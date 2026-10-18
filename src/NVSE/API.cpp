#include "NVSE/API.h"

#include "NVSE/Interfaces.h"
#include "REL/FHookStore.h"
#include "REL/Trampoline.h"
#include "REX/TSingleton.h"
#include "REX/W32/OLE32.h"
#include "REX/W32/SHELL32.h"

#include <spdlog/sinks/basic_file_sink.h>
#include <spdlog/sinks/msvc_sink.h>
#include <spdlog/sinks/rotating_file_sink.h>
#include <spdlog/spdlog.h>

namespace NVSE
{
	namespace Impl
	{
		struct API :
			public REX::TSingleton<API>
		{
			void Init(InitInfo a_info, const LoadInterface* a_intfc);
			void InitLog();
			void InitInterfaces();
			void InitTrampoline();
			void InitHook();

			InitInfo info;

			std::string  pluginName{};
			std::uint32_t pluginVersion{ 0 };

			const LoadInterface* intfc{ nullptr };
			REL::Version         nvseVersion{};
			REL::Version         runtimeVersion{};
			PluginHandle         pluginHandle{ kInvalidPluginHandle };
			bool                 isEditor{ false };
			bool                 isNogore{ false };
			std::string          runtimeDirectory{};

			MessagingInterface*     messagingInterface{ nullptr };
			SerializationInterface* serializationInterface{ nullptr };
			ConsoleInterface*       consoleInterface{ nullptr };
			CommandTableInterface*  commandTableInterface{ nullptr };
			StringVarInterface*     stringVarInterface{ nullptr };
			DataInterface*          dataInterface{ nullptr };
			ScriptInterface*        scriptInterface{ nullptr };
		};

		void API::Init(InitInfo a_info, const LoadInterface* a_intfc)
		{
			info = a_info;

			static std::once_flag once;
			std::call_once(once, [&]() {
				intfc = a_intfc;
				pluginVersion = info.pluginVersion;
				if (info.pluginName) {
					pluginName = info.pluginName;
				} else {
					std::vector<char> buf(REX::W32::MAX_PATH, '\0');
					const auto        size = REX::W32::GetModuleFileNameA(REX::W32::GetCurrentModule(), buf.data(), REX::W32::MAX_PATH);
					if (size) {
						std::filesystem::path p(buf.begin(), buf.begin() + size);
						pluginName = p.stem().string();
					}
				}

				nvseVersion = a_intfc->NVSEVersion();
				runtimeVersion = a_intfc->RuntimeVersion();
				pluginHandle = a_intfc->GetPluginHandle();
				isEditor = a_intfc->IsEditor();
				isNogore = a_intfc->IsNogore();
				if (const auto dir = a_intfc->GetRuntimeDirectory()) {
					runtimeDirectory = dir;
				}
			});
		}

		void API::InitLog()
		{
			if (info.log) {
				static std::once_flag once;
				std::call_once(once, [&]() {
					wchar_t*                                                       knownBuffer{ nullptr };
					const auto                                                     knownResult = REX::W32::SHGetKnownFolderPath(REX::W32::FOLDERID_Documents, REX::W32::KF_FLAG_DEFAULT, nullptr, std::addressof(knownBuffer));
					std::unique_ptr<wchar_t[], decltype(&REX::W32::CoTaskMemFree)> knownPath(knownBuffer, REX::W32::CoTaskMemFree);
					if (!knownPath || knownResult != 0) {
						REX::ERROR("failed to get known folder path");
						return;
					}

					std::filesystem::path path = knownPath.get();
					path /= std::format("My Games/FalloutNV/NVSE/{}.log", info.logName ? info.logName : GetPluginName());
					std::error_code ec;
					std::filesystem::create_directories(path.parent_path(), ec);

					std::vector<spdlog::sink_ptr> sinks{
						std::make_shared<spdlog::sinks::msvc_sink_mt>()
					};

					if (info.logRotate > 0) {
						constexpr auto maxSize = std::numeric_limits<std::size_t>::max();
						sinks.push_back(std::make_shared<spdlog::sinks::rotating_file_sink_mt>(path.string(), maxSize, info.logRotate, true));
					} else {
						sinks.push_back(std::make_shared<spdlog::sinks::basic_file_sink_mt>(path.string(), true));
					}

					auto logger = std::make_shared<spdlog::logger>("global", sinks.begin(), sinks.end());
					logger->set_level(static_cast<spdlog::level::level_enum>(info.logLevel));
					logger->flush_on(static_cast<spdlog::level::level_enum>(info.logLevel));

					spdlog::set_default_logger(std::move(logger));
					spdlog::set_pattern(info.logPattern ? info.logPattern : "[%T.%e] [%=5t] [%L] %v");

					const auto version = REL::Version::unpack(GetPluginVersion());
					REX::INFO("{} v{}.{}.{}", GetPluginName(), version[0], version[1], version[2]);
					REX::INFO("Runtime: {}", GetRuntimeVersion());
					REX::INFO("NVSE: {}", GetNVSEVersion());
				});
			}
		}

		void API::InitInterfaces()
		{
			// QueryInterface returns nullptr for interfaces older NVSE releases do not implement
			messagingInterface = intfc->QueryInterface<MessagingInterface>();
			serializationInterface = intfc->QueryInterface<SerializationInterface>();
			consoleInterface = intfc->QueryInterface<ConsoleInterface>();
			commandTableInterface = intfc->QueryInterface<CommandTableInterface>();
			stringVarInterface = intfc->QueryInterface<StringVarInterface>();
			dataInterface = intfc->QueryInterface<DataInterface>();
			scriptInterface = intfc->QueryInterface<ScriptInterface>();
		}

		void API::InitTrampoline()
		{
			if (info.trampoline) {
				static std::once_flag once;
				std::call_once(once, [&]() {
					if (!info.trampolineSize) {
						info.trampolineSize = REL::FHookStore::GetSingleton()->GetSizeTrampoline();
					}
					if (info.trampolineSize) {
						REL::GetTrampoline().create(info.trampolineSize);
					}
				});
			}
		}

		void API::InitHook()
		{
			if (info.hook) {
				const auto hookStore = REL::FHookStore::GetSingleton();
				hookStore->Init();
				hookStore->Enable(REL::EHookStep::Load);
			}
		}
	}

	void Init(const LoadInterface* a_intfc, InitInfo a_info) noexcept
	{
		const auto api = Impl::API::GetSingleton();
		api->Init(a_info, a_intfc);
		api->InitLog();
		api->InitInterfaces();
		api->InitTrampoline();
		api->InitHook();
	}

	REL::Version GetNVSEVersion() noexcept { return Impl::API::GetSingleton()->nvseVersion; }
	REL::Version GetRuntimeVersion() noexcept { return Impl::API::GetSingleton()->runtimeVersion; }
	std::string_view GetPluginName() noexcept { return Impl::API::GetSingleton()->pluginName; }
	std::uint32_t GetPluginVersion() noexcept { return Impl::API::GetSingleton()->pluginVersion; }
	PluginHandle GetPluginHandle() noexcept { return Impl::API::GetSingleton()->pluginHandle; }
	bool IsEditor() noexcept { return Impl::API::GetSingleton()->isEditor; }
	bool IsNogore() noexcept { return Impl::API::GetSingleton()->isNogore; }
	std::string_view GetRuntimeDirectory() noexcept { return Impl::API::GetSingleton()->runtimeDirectory; }
	const LoadInterface* GetInterface() noexcept { return Impl::API::GetSingleton()->intfc; }

	const MessagingInterface* GetMessagingInterface() noexcept { return Impl::API::GetSingleton()->messagingInterface; }
	const SerializationInterface* GetSerializationInterface() noexcept { return Impl::API::GetSingleton()->serializationInterface; }
	const ConsoleInterface* GetConsoleInterface() noexcept { return Impl::API::GetSingleton()->consoleInterface; }
	const CommandTableInterface* GetCommandTableInterface() noexcept { return Impl::API::GetSingleton()->commandTableInterface; }
	const StringVarInterface* GetStringVarInterface() noexcept { return Impl::API::GetSingleton()->stringVarInterface; }
	const DataInterface* GetDataInterface() noexcept { return Impl::API::GetSingleton()->dataInterface; }
	const ScriptInterface* GetScriptInterface() noexcept { return Impl::API::GetSingleton()->scriptInterface; }
}
