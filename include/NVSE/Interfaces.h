#pragma once

#include "NVSE/Commands.h"
#include "NVSE/Version.h"

namespace NVSE
{
	using PluginHandle = std::uint32_t;
	inline constexpr PluginHandle kInvalidPluginHandle{ 0xFFFFFFFF };

	// ids accepted by NVSEInterface::QueryInterface
	enum class InterfaceID : std::uint32_t
	{
		kSerialization = 0,
		kConsole,

		// v0002
		kMessaging,
		kCommandTable,

		// v0004
		kStringVar,
		kArrayVar,
		kScript,

		// v0005
		kData,

		// v0006
		kEventManager,
		kLogging,
		kPlayerControls,

		kMax
	};

	struct PluginInfo
	{
		enum : std::uint32_t
		{
			kInfoVersion = 1
		};

		std::uint32_t infoVersion;
		const char*   name;
		std::uint32_t version;
	};
	static_assert(sizeof(PluginInfo) == 0xC);

	class Interface;
	class MessagingInterface;
	class SerializationInterface;
	class ConsoleInterface;
	class CommandTableInterface;
	class StringVarInterface;
	class ArrayVarInterface;
	class ScriptInterface;
	class DataInterface;
	class EventManagerInterface;

	struct ExpressionEvaluatorUtils;

	namespace Impl
	{
		// ----------------------------------------------------------------------------------- ABI (must match PluginAPI.h of NVSE)
		struct NVSEInterface
		{
			std::uint32_t nvseVersion;     // 00
			std::uint32_t runtimeVersion;  // 04
			std::uint32_t editorVersion;   // 08
			std::uint32_t isEditor;        // 0C
			bool (*RegisterCommand)(CommandInfo* a_info);
			void (*SetOpcodeBase)(std::uint32_t a_opcode);
			void* (*QueryInterface)(std::uint32_t a_id);
			PluginHandle (*GetPluginHandle)();
			bool (*RegisterTypedCommand)(CommandInfo* a_info, CommandReturnType a_returnType);
			const char* (*GetRuntimeDirectory)();
			std::uint32_t isNogore;
			void (*InitExpressionEvaluatorUtils)(ExpressionEvaluatorUtils* a_utils);
			bool (*RegisterTypedCommandVersion)(CommandInfo* a_info, CommandReturnType a_returnType, std::uint32_t a_requiredPluginVersion);
		};
		static_assert(sizeof(NVSEInterface) == 0x34);

		struct NVSEMessage
		{
			const char*   sender;
			std::uint32_t type;
			std::uint32_t dataLen;
			void*         data;
		};

		struct NVSEMessagingInterface
		{
			std::uint32_t version;
			bool (*RegisterListener)(PluginHandle a_listener, const char* a_sender, void (*a_handler)(NVSEMessage*));
			bool (*Dispatch)(PluginHandle a_sender, std::uint32_t a_type, void* a_data, std::uint32_t a_dataLen, const char* a_receiver);
		};

		struct NVSESerializationInterface
		{
			std::uint32_t version;
			void (*SetSaveCallback)(PluginHandle a_plugin, void (*a_callback)(void*));
			void (*SetLoadCallback)(PluginHandle a_plugin, void (*a_callback)(void*));
			void (*SetNewGameCallback)(PluginHandle a_plugin, void (*a_callback)(void*));
			bool (*WriteRecord)(std::uint32_t a_type, std::uint32_t a_version, const void* a_buf, std::uint32_t a_length);
			bool (*OpenRecord)(std::uint32_t a_type, std::uint32_t a_version);
			bool (*WriteRecordData)(const void* a_buf, std::uint32_t a_length);
			bool (*GetNextRecordInfo)(std::uint32_t* a_type, std::uint32_t* a_version, std::uint32_t* a_length);
			std::uint32_t (*ReadRecordData)(void* a_buf, std::uint32_t a_length);
			bool (*ResolveRefID)(std::uint32_t a_refID, std::uint32_t* a_outRefID);
			void (*SetPreLoadCallback)(PluginHandle a_plugin, void (*a_callback)(void*));
			const char* (*GetSavePath)();
			std::uint32_t (*PeekRecordData)(void* a_buf, std::uint32_t a_length);
			void (*WriteRecord8)(std::uint8_t a_data);
			void (*WriteRecord16)(std::uint16_t a_data);
			void (*WriteRecord32)(std::uint32_t a_data);
			void (*WriteRecord64)(const void* a_data);
			std::uint8_t (*ReadRecord8)();
			std::uint16_t (*ReadRecord16)();
			std::uint32_t (*ReadRecord32)();
			void (*ReadRecord64)(void* a_data);
			void (*SkipNBytes)(std::uint32_t a_count);
		};

		struct NVSEConsoleInterface
		{
			std::uint32_t version;
			bool (*RunScriptLine)(const char* a_buf, RE::TESObjectREFR* a_object);
			bool (*RunScriptLine2)(const char* a_buf, RE::TESObjectREFR* a_callingRefr, bool a_suppressConsoleOutput);
		};

		struct NVSECommandTableInterface
		{
			std::uint32_t version;
			const CommandInfo* (*Start)();
			const CommandInfo* (*End)();
			const CommandInfo* (*GetByOpcode)(std::uint32_t a_opcode);
			const CommandInfo* (*GetByName)(const char* a_name);
			std::uint32_t (*GetReturnType)(const CommandInfo* a_cmd);
			std::uint32_t (*GetRequiredNVSEVersion)(const CommandInfo* a_cmd);
			const PluginInfo* (*GetParentPlugin)(const CommandInfo* a_cmd);
			const PluginInfo* (*GetPluginInfoByName)(const char* a_pluginName);
			const PluginInfo* (*GetPluginInfoByDLLName)(const char* a_dllName);
		};

		struct NVSEStringVarInterface
		{
			std::uint32_t version;
			const char* (*GetString)(std::uint32_t a_stringID);
			void (*SetString)(std::uint32_t a_stringID, const char* a_newValue);
			std::uint32_t (*CreateString)(const char* a_value, void* a_owningScript);
			void (*Register)(NVSEStringVarInterface* a_intfc);
			bool (*Assign)(NVSE_COMMAND_ARGS_T, const char* a_newValue);
		};

		struct NVSEDataInterface
		{
			std::uint32_t version;
			void* (*GetSingleton)(std::uint32_t a_singletonID);
			void* (*GetFunc)(std::uint32_t a_funcID);
			void* (*GetData)(std::uint32_t a_dataID);
			void (*ClearScriptDataCache)();
		};

		struct NVSEEventManagerInterface;
		struct NVSEScriptInterface;
		struct NVSEArrayVarInterface;
	}

	// ---------------------------------------------------------------------------------------- game heap helpers
	namespace Impl
	{
		[[nodiscard]] inline void* FormHeapAlloc(std::size_t a_size)
		{
			static REL::Relocation<void*(__cdecl*)(std::size_t)> func{ REL::Offset(0x1000) };  // operator new[] / FormHeap_Allocate
			return func(a_size);
		}

		inline void FormHeapFree(void* a_ptr)
		{
			static REL::Relocation<void(__cdecl*)(void*)> func{ REL::Offset(0x1030) };  // operator delete / FormHeap_Free
			func(a_ptr);
		}
	}

	// ---------------------------------------------------------------------------------------- the interface handed to Query/Load
	class Interface
	{
	private:
		[[nodiscard]] const Impl::NVSEInterface& GetProxy() const noexcept { return reinterpret_cast<const Impl::NVSEInterface&>(*this); }

	public:
		[[nodiscard]] std::uint32_t PackedNVSEVersion() const noexcept { return GetProxy().nvseVersion; }
		[[nodiscard]] std::uint32_t PackedRuntimeVersion() const noexcept { return GetProxy().runtimeVersion; }
		[[nodiscard]] std::uint32_t PackedEditorVersion() const noexcept { return GetProxy().editorVersion; }
		[[nodiscard]] REL::Version  NVSEVersion() const noexcept { return UnpackNVSEVersion(GetProxy().nvseVersion); }
		[[nodiscard]] REL::Version  RuntimeVersion() const noexcept { return UnpackRuntimeVersion(GetProxy().runtimeVersion); }
		[[nodiscard]] REL::Version  EditorVersion() const noexcept { return UnpackRuntimeVersion(GetProxy().editorVersion); }
		[[nodiscard]] bool          IsEditor() const noexcept { return GetProxy().isEditor != 0; }
		[[nodiscard]] bool          IsNogore() const noexcept { return GetProxy().isNogore != 0; }

		// call during Query/Load, the handle is only valid at that time
		[[nodiscard]] PluginHandle GetPluginHandle() const { return GetProxy().GetPluginHandle(); }
		[[nodiscard]] const char*  GetRuntimeDirectory() const { return GetProxy().GetRuntimeDirectory ? GetProxy().GetRuntimeDirectory() : nullptr; }

		// commands
		void SetOpcodeBase(std::uint32_t a_opcode) const { GetProxy().SetOpcodeBase(a_opcode); }
		bool RegisterCommand(CommandInfo& a_info) const { return GetProxy().RegisterCommand(&a_info); }
		bool RegisterTypedCommand(CommandInfo& a_info, CommandReturnType a_returnType) const { return GetProxy().RegisterTypedCommand(&a_info, a_returnType); }
		bool RegisterTypedCommandVersion(CommandInfo& a_info, CommandReturnType a_returnType, std::uint32_t a_requiredPluginVersion) const { return GetProxy().RegisterTypedCommandVersion(&a_info, a_returnType, a_requiredPluginVersion); }

		[[nodiscard]] void* QueryInterface(InterfaceID a_id) const { return GetProxy().QueryInterface(static_cast<std::uint32_t>(a_id)); }

		template <class T>
		[[nodiscard]] T* QueryInterface() const
		{
			return static_cast<T*>(QueryInterface(T::kID));
		}

		void InitExpressionEvaluatorUtils(ExpressionEvaluatorUtils* a_utils) const { GetProxy().InitExpressionEvaluatorUtils(a_utils); }
	};

	using QueryInterface = Interface;
	using LoadInterface = Interface;

	// ---------------------------------------------------------------------------------------- messaging
	class MessagingInterface
	{
	private:
		[[nodiscard]] const Impl::NVSEMessagingInterface& GetProxy() const noexcept { return reinterpret_cast<const Impl::NVSEMessagingInterface&>(*this); }

	public:
		static constexpr auto kID{ InterfaceID::kMessaging };

		enum
		{
			kVersion = 4
		};

		// messages sent by NVSE (sender "NVSE")
		enum : std::uint32_t
		{
			kPostLoad,
			kExitGame,
			kExitToMainMenu,
			kLoadGame,  // data: char* path of the savegame
			kSaveGame,
			kScriptPrecompile,
			kPreLoadGame,
			kExitGameConsole,
			kPostLoadGame,  // data: bool success
			kPostPostLoad,
			kRuntimeScriptError,  // data: char* message
			kDeleteGame,
			kRenameGame,
			kRenameNewGame,
			kNewGame,
			kDeleteGameName,
			kRenameGameName,
			kRenameNewGameName,
			kDeferredInit,
			kClearScriptDataCache,
			kMainGameLoop,
			kScriptCompile,
			kEventListDestroyed,
			kPostQueryPlugins,
			kOnFramePresent,
			kReloadConfig,
			kOnRefSet3D,
			kOnRefUnset3D,
			kOnRefAttach,
			kOnCellStateChange,
			kOnCellRefsLoaded,
			kOnNonPersistentFormLoad,
			kOnNonPersistentFormUnload,
		};

		using Message = Impl::NVSEMessage;
		using EventCallback = void (*)(Message*);

		[[nodiscard]] std::uint32_t Version() const noexcept { return GetProxy().version; }

		bool RegisterListener(EventCallback a_handler, const char* a_sender = "NVSE") const;
		bool Dispatch(std::uint32_t a_type, void* a_data = nullptr, std::uint32_t a_dataLen = 0, const char* a_receiver = nullptr) const;
	};

	// ---------------------------------------------------------------------------------------- serialization
	class SerializationInterface
	{
	private:
		[[nodiscard]] const Impl::NVSESerializationInterface& GetProxy() const noexcept { return reinterpret_cast<const Impl::NVSESerializationInterface&>(*this); }

	public:
		static constexpr auto kID{ InterfaceID::kSerialization };

		enum
		{
			kVersion = 2
		};

		using EventCallback = void (*)(void*);

		[[nodiscard]] std::uint32_t Version() const noexcept { return GetProxy().version; }

		void SetSaveCallback(EventCallback a_callback) const;
		void SetLoadCallback(EventCallback a_callback) const;
		void SetNewGameCallback(EventCallback a_callback) const;
		void SetPreLoadCallback(EventCallback a_callback) const;

		bool WriteRecord(std::uint32_t a_type, std::uint32_t a_version, const void* a_buf, std::uint32_t a_length) const { return GetProxy().WriteRecord(a_type, a_version, a_buf, a_length); }
		bool OpenRecord(std::uint32_t a_type, std::uint32_t a_version) const { return GetProxy().OpenRecord(a_type, a_version); }
		bool WriteRecordData(const void* a_buf, std::uint32_t a_length) const { return GetProxy().WriteRecordData(a_buf, a_length); }

		template <class T>
		bool WriteRecordData(const T& a_data) const
			requires(std::is_trivially_copyable_v<T>)
		{
			return WriteRecordData(std::addressof(a_data), static_cast<std::uint32_t>(sizeof(T)));
		}

		bool          GetNextRecordInfo(std::uint32_t& a_type, std::uint32_t& a_version, std::uint32_t& a_length) const { return GetProxy().GetNextRecordInfo(&a_type, &a_version, &a_length); }
		std::uint32_t ReadRecordData(void* a_buf, std::uint32_t a_length) const { return GetProxy().ReadRecordData(a_buf, a_length); }
		std::uint32_t PeekRecordData(void* a_buf, std::uint32_t a_length) const { return GetProxy().PeekRecordData(a_buf, a_length); }

		template <class T>
		bool ReadRecordData(T& a_data) const
			requires(std::is_trivially_copyable_v<T>)
		{
			return ReadRecordData(std::addressof(a_data), static_cast<std::uint32_t>(sizeof(T))) == sizeof(T);
		}

		// refids stored in a save must be resolved against the current load order
		bool ResolveRefID(std::uint32_t a_refID, std::uint32_t& a_outRefID) const { return GetProxy().ResolveRefID(a_refID, &a_outRefID); }

		[[nodiscard]] const char* GetSavePath() const { return GetProxy().GetSavePath(); }

		void          WriteRecord8(std::uint8_t a_data) const { GetProxy().WriteRecord8(a_data); }
		void          WriteRecord16(std::uint16_t a_data) const { GetProxy().WriteRecord16(a_data); }
		void          WriteRecord32(std::uint32_t a_data) const { GetProxy().WriteRecord32(a_data); }
		void          WriteRecord64(std::uint64_t a_data) const { GetProxy().WriteRecord64(&a_data); }
		std::uint8_t  ReadRecord8() const { return GetProxy().ReadRecord8(); }
		std::uint16_t ReadRecord16() const { return GetProxy().ReadRecord16(); }
		std::uint32_t ReadRecord32() const { return GetProxy().ReadRecord32(); }
		std::uint64_t ReadRecord64() const
		{
			std::uint64_t result{};
			GetProxy().ReadRecord64(&result);
			return result;
		}
		void SkipNBytes(std::uint32_t a_count) const { GetProxy().SkipNBytes(a_count); }
	};

	// ---------------------------------------------------------------------------------------- console
	class ConsoleInterface
	{
	private:
		[[nodiscard]] const Impl::NVSEConsoleInterface& GetProxy() const noexcept { return reinterpret_cast<const Impl::NVSEConsoleInterface&>(*this); }

	public:
		static constexpr auto kID{ InterfaceID::kConsole };

		enum
		{
			kVersion = 3
		};

		[[nodiscard]] std::uint32_t Version() const noexcept { return GetProxy().version; }

		bool RunScriptLine(const char* a_line, RE::TESObjectREFR* a_object = nullptr) const { return GetProxy().RunScriptLine(a_line, a_object); }
		bool RunScriptLine2(const char* a_line, RE::TESObjectREFR* a_callingRefr = nullptr, bool a_suppressConsoleOutput = false) const { return Version() >= 3 && GetProxy().RunScriptLine2(a_line, a_callingRefr, a_suppressConsoleOutput); }
	};

	// ---------------------------------------------------------------------------------------- command table
	class CommandTableInterface
	{
	private:
		[[nodiscard]] const Impl::NVSECommandTableInterface& GetProxy() const noexcept { return reinterpret_cast<const Impl::NVSECommandTableInterface&>(*this); }

	public:
		static constexpr auto kID{ InterfaceID::kCommandTable };

		enum
		{
			kVersion = 2
		};

		[[nodiscard]] std::uint32_t Version() const noexcept { return GetProxy().version; }

		[[nodiscard]] const CommandInfo* Start() const { return GetProxy().Start(); }
		[[nodiscard]] const CommandInfo* End() const { return GetProxy().End(); }
		[[nodiscard]] const CommandInfo* GetByOpcode(std::uint32_t a_opcode) const { return GetProxy().GetByOpcode(a_opcode); }
		[[nodiscard]] const CommandInfo* GetByName(const char* a_name) const { return GetProxy().GetByName(a_name); }
		[[nodiscard]] CommandReturnType  GetReturnType(const CommandInfo* a_cmd) const { return static_cast<CommandReturnType>(GetProxy().GetReturnType(a_cmd)); }
		[[nodiscard]] std::uint32_t      GetRequiredNVSEVersion(const CommandInfo* a_cmd) const { return GetProxy().GetRequiredNVSEVersion(a_cmd); }
		[[nodiscard]] const PluginInfo*  GetParentPlugin(const CommandInfo* a_cmd) const { return GetProxy().GetParentPlugin(a_cmd); }
		[[nodiscard]] const PluginInfo*  GetPluginInfoByName(const char* a_pluginName) const { return GetProxy().GetPluginInfoByName(a_pluginName); }
		[[nodiscard]] const PluginInfo*  GetPluginInfoByDLLName(const char* a_dllName) const { return GetProxy().GetPluginInfoByDLLName(a_dllName); }
	};

	// ---------------------------------------------------------------------------------------- string_var
	class StringVarInterface
	{
	private:
		[[nodiscard]] const Impl::NVSEStringVarInterface& GetProxy() const noexcept { return reinterpret_cast<const Impl::NVSEStringVarInterface&>(*this); }

	public:
		static constexpr auto kID{ InterfaceID::kStringVar };

		enum
		{
			kVersion = 1
		};

		[[nodiscard]] std::uint32_t Version() const noexcept { return GetProxy().version; }

		// the pointer is only valid while the string_var is unchanged
		[[nodiscard]] const char* GetString(std::uint32_t a_stringID) const { return GetProxy().GetString(a_stringID); }
		void                      SetString(std::uint32_t a_stringID, const char* a_value) const { GetProxy().SetString(a_stringID, a_value); }
		[[nodiscard]] std::uint32_t CreateString(const char* a_value, RE::Script* a_owningScript = nullptr) const { return GetProxy().CreateString(a_value, a_owningScript); }

		// return a string from a command: Assign(NVSE_PASS_COMMAND_ARGS, "text")
		bool Assign(NVSE_COMMAND_ARGS, const char* a_value) const { return GetProxy().Assign(NVSE_PASS_COMMAND_ARGS, a_value); }
	};

	// ---------------------------------------------------------------------------------------- data (raw access, for the less common services)
	class DataInterface
	{
	private:
		[[nodiscard]] const Impl::NVSEDataInterface& GetProxy() const noexcept { return reinterpret_cast<const Impl::NVSEDataInterface&>(*this); }

	public:
		static constexpr auto kID{ InterfaceID::kData };

		enum
		{
			kVersion = 4
		};

		enum Singleton : std::uint32_t
		{
			kDIHookControl = 1,
			kArrayMap,
			kStringMap,
			kInventoryReferenceMap,
		};

		enum Function : std::uint32_t
		{
			kInventoryReferenceCreate = 1,
			kInventoryReferenceGetForRefID,
			kInventoryReferenceGetRefBySelf,
			kArrayVarMapDeleteBySelf,
			kStringVarMapDeleteBySelf,
			kLambdaDeleteAllForScript,
			kInventoryReferenceCreateEntry,
			kLambdaSaveVariableList,
			kLambdaUnsaveVariableList,
			kIsScriptLambda,
			kHasScriptCommand,
			kDecompileScript,
			kLegacyFormExtraDataGet,
			kLegacyFormExtraDataGetAll,
			kLegacyFormExtraDataAdd,
			kLegacyFormExtraDataRemoveByName,
			kLegacyFormExtraDataRemoveByPtr,
			kPluginFormExtraDataGet,
			kPluginFormExtraDataGetAll,
			kPluginFormExtraDataAdd,
			kPluginFormExtraDataRemoveByName,
			kPluginFormExtraDataRemoveByPtr,
		};

		enum Data : std::uint32_t
		{
			kNumPreloadMods = 1,
		};

		[[nodiscard]] std::uint32_t Version() const noexcept { return GetProxy().version; }
		[[nodiscard]] void*         GetSingleton(Singleton a_id) const { return GetProxy().GetSingleton(a_id); }
		[[nodiscard]] void*         GetFunc(Function a_id) const { return GetProxy().GetFunc(a_id); }
		[[nodiscard]] void*         GetData(Data a_id) const { return GetProxy().GetData(a_id); }
		void                        ClearScriptDataCache() const { GetProxy().ClearScriptDataCache(); }
	};

	// ---------------------------------------------------------------------------------------- array_var
	// The array, script, and event manager interfaces carry long variadic APIs; their tables are exposed with the original layout
	// so plugins can call them directly (see NVSE's PluginAPI.h for the documentation of every entry).
	class ArrayVarInterface
	{
	public:
		static constexpr auto kID{ InterfaceID::kArrayVar };

		enum
		{
			kVersion = 2
		};

		struct Array;

		class Element
		{
		public:
			enum Type : std::uint8_t
			{
				kInvalid,
				kNumeric,
				kForm,
				kString,
				kArray,
			};

			Element() noexcept = default;
			Element(const char* a_str) :
				_type(kString)
			{
				const auto len = std::strlen(a_str) + 1;
				_str = static_cast<char*>(Impl::FormHeapAlloc(len));
				std::memcpy(_str, a_str, len);
			}
			Element(double a_num) noexcept :
				_num(a_num),
				_type(kNumeric)
			{}
			Element(RE::TESForm* a_form) noexcept :
				_form(a_form),
				_type(kForm)
			{}
			Element(Array* a_array) noexcept :
				_arr(a_array),
				_type(kArray)
			{}
			Element(const Element& a_rhs) { Copy(a_rhs); }
			Element& operator=(const Element& a_rhs)
			{
				if (this != std::addressof(a_rhs)) {
					Reset();
					Copy(a_rhs);
				}
				return *this;
			}
			~Element() { Reset(); }

			void Reset()
			{
				if (_type == kString && _str) {
					Impl::FormHeapFree(_str);
				}
				_type = kInvalid;
				_str = nullptr;
			}

			[[nodiscard]] bool          IsValid() const noexcept { return _type != kInvalid; }
			[[nodiscard]] Type          GetType() const noexcept { return _type; }
			[[nodiscard]] const char*   GetString() const noexcept { return _type == kString ? _str : nullptr; }
			[[nodiscard]] Array*        GetArray() const noexcept { return _type == kArray ? _arr : nullptr; }
			[[nodiscard]] RE::TESForm*  GetForm() const noexcept { return _type == kForm ? _form : nullptr; }
			[[nodiscard]] double        GetNumber() const noexcept { return _type == kNumeric ? _num : 0.0; }

			[[nodiscard]] CommandReturnType GetReturnType() const noexcept
			{
				switch (_type) {
				case kNumeric: return CommandReturnType::kDefault;
				case kForm: return CommandReturnType::kForm;
				case kArray: return CommandReturnType::kArray;
				case kString: return CommandReturnType::kString;
				default: return CommandReturnType::kAmbiguous;
				}
			}

		private:
			void Copy(const Element& a_rhs)
			{
				_type = a_rhs._type;
				if (a_rhs._type == kString && a_rhs._str) {
					const auto len = std::strlen(a_rhs._str) + 1;
					_str = static_cast<char*>(Impl::FormHeapAlloc(len));
					std::memcpy(_str, a_rhs._str, len);
				} else {
					_num = a_rhs._num;
				}
			}

			union
			{
				char*       _str;
				Array*      _arr;
				RE::TESForm* _form;
				double      _num{ 0.0 };
			};
			Type _type{ kInvalid };
		};
		static_assert(sizeof(Element) == 0x10);

		enum ContainerType : std::int32_t
		{
			kInvalidContainer = -1,
			kArrayContainer = 0,
			kMapContainer,
			kStringMapContainer,
		};

		std::uint32_t version;
		Array* (*CreateArray)(const Element* a_data, std::uint32_t a_size, RE::Script* a_callingScript);
		Array* (*CreateStringMap)(const char** a_keys, const Element* a_values, std::uint32_t a_size, RE::Script* a_callingScript);
		Array* (*CreateMap)(const double* a_keys, const Element* a_values, std::uint32_t a_size, RE::Script* a_callingScript);
		bool (*AssignCommandResult)(Array* a_arr, double* a_dest);
		void (*SetElement)(Array* a_arr, const Element& a_key, const Element& a_value);
		void (*AppendElement)(Array* a_arr, const Element& a_value);
		std::uint32_t (*GetArraySize)(Array* a_arr);
		Array* (*LookupArrayByID)(std::uint32_t a_id);
		bool (*GetElement)(Array* a_arr, const Element& a_key, Element& a_outElement);
		bool (*GetElements)(Array* a_arr, Element* a_elements, Element* a_keys);
		// version 2
		std::uint32_t (*GetArrayPacked)(Array* a_arr);
		int (*GetContainerType)(Array* a_arr);
		bool (*ArrayHasKey)(Array* a_arr, const Element& a_key);
	};

	// ---------------------------------------------------------------------------------------- script (compile / call user functions)
	class ScriptInterface
	{
	public:
		static constexpr auto kID{ InterfaceID::kScript };

		enum
		{
			kVersion = 1
		};

		bool (*CallFunction)(RE::Script* a_funcScript, RE::TESObjectREFR* a_callingObj, RE::TESObjectREFR* a_container, ArrayVarInterface::Element* a_result, std::uint8_t a_numArgs, ...);
		std::uint32_t (*GetFunctionParams)(RE::Script* a_funcScript, std::uint8_t* a_paramTypesOut);
		bool (*ExtractArgsEx)(ParamInfo* a_paramInfo, void* a_scriptDataIn, std::uint32_t* a_scriptDataOffset, RE::Script* a_scriptObj, ScriptEventList* a_eventList, ...);
		bool (*ExtractFormatStringArgs)(std::uint32_t a_fmtStringPos, char* a_buffer, ParamInfo* a_paramInfo, void* a_scriptDataIn, std::uint32_t* a_scriptDataOffset, RE::Script* a_scriptObj, ScriptEventList* a_eventList, std::uint32_t a_maxParams, ...);
		bool (*CallFunctionAlt)(RE::Script* a_funcScript, RE::TESObjectREFR* a_callingObj, std::uint8_t a_numArgs, ...);
		RE::Script* (*CompileScript)(const char* a_scriptText);
		RE::Script* (*CompileExpression)(const char* a_expression);
		std::size_t(__stdcall* DecompileToBuffer)(RE::Script* a_script, std::FILE* a_stream, char* a_buffer);
	};

	// ---------------------------------------------------------------------------------------- event manager
	class EventManagerInterface
	{
	public:
		static constexpr auto kID{ InterfaceID::kEventManager };

		using NativeEventHandler = void (*)(RE::TESObjectREFR* a_thisObj, void* a_parameters);

		enum ParamType : std::uint8_t
		{
			kFloat = 0,
			kInt,
			kString,
			kArray,
			kRefVar,
			kAnyForm = kRefVar,
			kReference,
			kBaseForm,
			kInvalidParam,
			kAnything,
			kFloatPtr,
			kIntPtr,
			kStringPtr,
			kArrayPtr,
			kRefVarPtr,
			kAnyFormPtr = kRefVarPtr,
			kReferencePtr,
			kBaseFormPtr,
		};

		enum EventFlags : std::uint32_t
		{
			kFlags_None = 0,
			kFlag_FlushOnLoad = 1 << 0,
			kFlag_HasUnknownArgTypes = 1 << 1,
			kFlag_AllowScriptDispatch = 1 << 2,
			kFlag_IsUserDefined = kFlag_HasUnknownArgTypes | kFlag_AllowScriptDispatch,
			kFlag_ReportErrorIfNoResultGiven = 1 << 3,
		};

		enum DispatchReturn : std::int8_t
		{
			kRetn_UnknownEvent = -2,
			kRetn_GenericError = -1,
			kRetn_Normal = 0,
			kRetn_EarlyBreak,
			kRetn_Deferred,
		};

		using DispatchCallback = bool (*)(ArrayVarInterface::Element& a_result, void* a_anyData);
		using PostDispatchCallback = void (*)(void* a_anyData, DispatchReturn a_retn);

		bool (*RegisterEvent)(const char* a_name, std::uint8_t a_numParams, ParamType* a_paramTypes, EventFlags a_flags);
		bool (*DispatchEvent)(const char* a_eventName, RE::TESObjectREFR* a_thisObj, ...);
		DispatchReturn (*DispatchEventAlt)(const char* a_eventName, DispatchCallback a_resultCallback, void* a_anyData, RE::TESObjectREFR* a_thisObj, ...);
		bool (*SetNativeEventHandler)(const char* a_eventName, NativeEventHandler a_func);
		bool (*RemoveNativeEventHandler)(const char* a_eventName, NativeEventHandler a_func);
		bool (*RegisterEventWithAlias)(const char* a_name, const char* a_alias, std::uint8_t a_numParams, ParamType* a_paramTypes, EventFlags a_flags);
		bool (*DispatchEventThreadSafe)(const char* a_eventName, PostDispatchCallback a_postCallback, RE::TESObjectREFR* a_thisObj, ...);
		DispatchReturn (*DispatchEventAltThreadSafe)(const char* a_eventName, DispatchCallback a_resultCallback, void* a_anyData, PostDispatchCallback a_postCallback, RE::TESObjectREFR* a_thisObj, ...);
		void (*SetNativeHandlerFunctionValue)(ArrayVarInterface::Element& a_value);
		bool (*SetNativeEventHandlerWithPriority)(const char* a_eventName, NativeEventHandler a_func, PluginHandle a_pluginHandle, const char* a_handlerName, int a_priority);
		bool (*RemoveNativeEventHandlerWithPriority)(const char* a_eventName, NativeEventHandler a_func, int a_priority);
		bool (*IsEventHandlerFirst)(const char* a_eventName, NativeEventHandler a_func, int a_startPriority, RE::TESForm** a_scriptsToIgnore, std::uint32_t a_numScriptsToIgnore, const char** a_pluginsToIgnore, std::uint32_t a_numPluginsToIgnore, const char** a_pluginHandlersToIgnore, std::uint32_t a_numPluginHandlersToIgnore);
		bool (*IsEventHandlerLast)(const char* a_eventName, NativeEventHandler a_func, int a_startPriority, RE::TESForm** a_scriptsToIgnore, std::uint32_t a_numScriptsToIgnore, const char** a_pluginsToIgnore, std::uint32_t a_numPluginsToIgnore, const char** a_pluginHandlersToIgnore, std::uint32_t a_numPluginHandlersToIgnore);
		ArrayVarInterface::Array* (*GetHigherPriorityEventHandlers)(const char* a_eventName, NativeEventHandler a_func, int a_priority, RE::TESForm** a_scriptsToIgnore, std::uint32_t a_numScriptsToIgnore, const char** a_pluginsToIgnore, std::uint32_t a_numPluginsToIgnore, const char** a_pluginHandlersToIgnore, std::uint32_t a_numPluginHandlersToIgnore);
		ArrayVarInterface::Array* (*GetLowerPriorityEventHandlers)(const char* a_eventName, NativeEventHandler a_func, int a_priority, RE::TESForm** a_scriptsToIgnore, std::uint32_t a_numScriptsToIgnore, const char** a_pluginsToIgnore, std::uint32_t a_numPluginsToIgnore, const char** a_pluginHandlersToIgnore, std::uint32_t a_numPluginHandlersToIgnore);
	};
}

// NVSE looks for the unmangled exports NVSEPlugin_Query and NVSEPlugin_Load (cdecl exports are undecorated on x86)
#define NVSE_EXPORT extern "C" [[maybe_unused]] __declspec(dllexport)
#define NVSE_PLUGIN_QUERY(...) NVSE_EXPORT bool NVSEPlugin_Query(__VA_ARGS__)
#define NVSE_PLUGIN_LOAD(...) NVSE_EXPORT bool NVSEPlugin_Load(__VA_ARGS__)
#define NVSEPluginQuery NVSE_PLUGIN_QUERY
#define NVSEPluginLoad NVSE_PLUGIN_LOAD
