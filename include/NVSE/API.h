#pragma once

#include "REX/LOG.h"

namespace NVSE
{
	using PluginHandle = std::uint32_t;

	class Interface;
	using QueryInterface = Interface;
	using LoadInterface = Interface;

	struct PluginInfo;

	class MessagingInterface;
	class SerializationInterface;
	class ConsoleInterface;
	class CommandTableInterface;
	class StringVarInterface;
	class DataInterface;
	class ScriptInterface;

	struct InitInfo
	{
		bool log{ true };
#ifndef NDEBUG
		REX::ELogLevel logLevel{ REX::ELogLevel::Debug };
#else
		REX::ELogLevel logLevel{ REX::ELogLevel::Info };
#endif
		const char* logName{ nullptr };     // default: the plugin name
		const char* logPattern{ nullptr };  // default: "[%T.%e] [%=5t] [%L] %v"
		std::size_t logRotate{ 0 };

		bool        trampoline{ false };  // create a trampoline for 6 byte (call/jmp [mem]) hooks; sized from the registered hooks unless trampolineSize is set
		std::size_t trampolineSize{ 0 };
		bool        hook{ true };  // initialize and enable the REL::THook hooks registered before Init

		const char*   pluginName{ nullptr };  // default: the dll's file name
		std::uint32_t pluginVersion{ 0 };     // the number passed in PluginInfo::version
	};

	// call from NVSEPlugin_Load; stores the plugin handle, sets up logging and acquires the optional interfaces
	void Init(const LoadInterface* a_intfc, InitInfo a_info = {}) noexcept;

	[[nodiscard]] REL::Version     GetNVSEVersion() noexcept;
	[[nodiscard]] REL::Version     GetRuntimeVersion() noexcept;
	[[nodiscard]] std::string_view GetPluginName() noexcept;
	[[nodiscard]] std::uint32_t    GetPluginVersion() noexcept;
	[[nodiscard]] PluginHandle     GetPluginHandle() noexcept;
	[[nodiscard]] bool             IsEditor() noexcept;
	[[nodiscard]] bool             IsNogore() noexcept;
	[[nodiscard]] std::string_view GetRuntimeDirectory() noexcept;
	[[nodiscard]] const LoadInterface* GetInterface() noexcept;

	// all return nullptr when NVSE does not provide the interface (old NVSE) or before Init
	[[nodiscard]] const MessagingInterface*     GetMessagingInterface() noexcept;
	[[nodiscard]] const SerializationInterface* GetSerializationInterface() noexcept;
	[[nodiscard]] const ConsoleInterface*       GetConsoleInterface() noexcept;
	[[nodiscard]] const CommandTableInterface*  GetCommandTableInterface() noexcept;
	[[nodiscard]] const StringVarInterface*     GetStringVarInterface() noexcept;
	[[nodiscard]] const DataInterface*          GetDataInterface() noexcept;
	[[nodiscard]] const ScriptInterface*        GetScriptInterface() noexcept;
}
