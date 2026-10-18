#pragma once

namespace RE
{
	class Script;
	class ScriptLocals;
	class TESObjectREFR;
	class TESForm;
	struct ScriptBuffer;
	struct ScriptLineBuffer;
}

namespace NVSE
{
	// the game's "ScriptEventList" (variable value list of a script) is RE::ScriptLocals in this library
	using ScriptEventList = RE::ScriptLocals;

	// script command parameter types (CommandTable.h in NVSE)
	enum class ParamType : std::uint32_t
	{
		kString = 0x00,
		kInteger = 0x01,
		kFloat = 0x02,
		kObjectID = 0x03,
		kObjectRef = 0x04,
		kActorValue = 0x05,
		kActor = 0x06,
		kSpellItem = 0x07,
		kAxis = 0x08,
		kCell = 0x09,
		kAnimationGroup = 0x0A,
		kMagicItem = 0x0B,
		kSound = 0x0C,
		kTopic = 0x0D,
		kQuest = 0x0E,
		kRace = 0x0F,
		kClass = 0x10,
		kFaction = 0x11,
		kSex = 0x12,
		kGlobal = 0x13,
		kFurniture = 0x14,
		kTESObject = 0x15,
		kVariableName = 0x16,
		kQuestStage = 0x17,
		kMapMarker = 0x18,
		kActorBase = 0x19,
		kContainer = 0x1A,
		kWorldSpace = 0x1B,
		kCrimeType = 0x1C,
		kAIPackage = 0x1D,
		kCombatStyle = 0x1E,
		kMagicEffect = 0x1F,
		kFormType = 0x20,
		kWeatherID = 0x21,
		kNPC = 0x22,
		kOwner = 0x23,
		kEffectShader = 0x24,
		kFormList = 0x25,
		kMenuIcon = 0x26,
		kPerk = 0x27,
		kNote = 0x28,
		kMiscellaneousStat = 0x29,
		kImageSpaceModifier = 0x2A,
		kImageSpace = 0x2B,
		kDouble = 0x2C,
		kScriptVariable = 0x2D,
		kUnhandled2E = 0x2E,
		kEncounterZone = 0x2F,
		kIdleForm = 0x30,
		kMessage = 0x31,
		kInvObjOrFormList = 0x32,
		kAlignment = 0x33,
		kEquipType = 0x34,
		kNonFormList = 0x35,
		kSoundFile = 0x36,
		kCriticalStage = 0x37,
		kLeveledOrBaseChar = 0x38,
		kLeveledOrBaseCreature = 0x39,
		kLeveledChar = 0x3A,
		kLeveledCreature = 0x3B,
		kLeveledItem = 0x3C,
		kAnyForm = 0x3D,
		kReputation = 0x3E,
		kCasino = 0x3F,
		kCasinoChip = 0x40,
		kChallenge = 0x41,
		kCaravanMoney = 0x42,
		kCaravanCard = 0x43,
		kCaravanDeck = 0x44,
		kRegion = 0x45,

		// NVSE additions
		kStringVar = 0x01,
		kArray = 0x100,  // only with the compiler override
	};

	enum class CommandReturnType : std::uint8_t
	{
		kDefault,
		kForm,
		kString,
		kArray,
		kArrayIndex,
		kAmbiguous,

		kMax
	};

	struct ParamInfo
	{
		const char*   typeStr;  // 00 (can also be used to name the argument)
		std::uint32_t typeID;   // 04
		std::uint32_t isOptional;  // 08
	};
	static_assert(sizeof(ParamInfo) == 0xC);

	[[nodiscard]] constexpr ParamInfo MakeParam(const char* a_name, ParamType a_type, bool a_optional = false) noexcept
	{
		return ParamInfo{ a_name, static_cast<std::uint32_t>(a_type), a_optional ? 1u : 0u };
	}

	struct CommandInfo;

	// bool Execute(ParamInfo*, void* scriptData, TESObjectREFR* thisObj, TESObjectREFR* containingObj, Script*, ScriptEventList*, double* result, UInt32* opcodeOffsetPtr)
// definitions: the parameters may be unused
#define NVSE_COMMAND_ARGS \
	[[maybe_unused]] ::NVSE::ParamInfo*        paramInfo, \
	[[maybe_unused]] void*                     scriptData, \
	[[maybe_unused]] ::RE::TESObjectREFR*      thisObj, \
	[[maybe_unused]] ::RE::TESObjectREFR*      containingObj, \
	[[maybe_unused]] ::RE::Script*             scriptObj, \
	[[maybe_unused]] ::NVSE::ScriptEventList*  eventList, \
	[[maybe_unused]] double*                   result, \
	[[maybe_unused]] std::uint32_t*            opcodeOffsetPtr
// function pointer types and declarations (attributes are not allowed there)
#define NVSE_COMMAND_ARGS_T \
	::NVSE::ParamInfo*        paramInfo, \
	void*                     scriptData, \
	::RE::TESObjectREFR*      thisObj, \
	::RE::TESObjectREFR*      containingObj, \
	::RE::Script*             scriptObj, \
	::NVSE::ScriptEventList*  eventList, \
	double*                   result, \
	std::uint32_t*            opcodeOffsetPtr

#define NVSE_PASS_COMMAND_ARGS paramInfo, scriptData, thisObj, containingObj, scriptObj, eventList, result, opcodeOffsetPtr

	using CommandExecute = bool (*)(NVSE_COMMAND_ARGS_T);
	using CommandParse = bool (*)(std::uint32_t a_numParams, ParamInfo* a_params, RE::ScriptLineBuffer* a_line, RE::ScriptBuffer* a_buffer);
	using CommandEval = bool (*)(RE::TESObjectREFR* a_thisObj, void* a_arg1, void* a_arg2, double* a_result);

	// parser value that selects the NVSE expression evaluator for plugin commands
	inline const CommandParse kExpressionPluginParse{ reinterpret_cast<CommandParse>(0x08000000) };

	struct CommandInfo
	{
		const char*    longName;     // 00
		const char*    shortName;    // 04
		std::uint32_t  opcode;       // 08
		const char*    helpText;     // 0C
		std::uint16_t  needsParent;  // 10
		std::uint16_t  numParams;    // 12
		ParamInfo*     params;       // 14
		CommandExecute execute;      // 18
		CommandParse   parse;        // 1C
		CommandEval    eval;         // 20
		std::uint32_t  flags;        // 24
	};
	static_assert(sizeof(CommandInfo) == 0x28);

	// NVSE overwrites `opcode` when the command is registered; keep command infos in static storage
	template <std::size_t N>
	[[nodiscard]] constexpr CommandInfo MakeCommand(const char* a_longName, const char* a_shortName, const char* a_help, bool a_needsParent, ParamInfo (&a_params)[N], CommandExecute a_execute, CommandParse a_parse = nullptr) noexcept
	{
		return CommandInfo{ a_longName, a_shortName, 0, a_help, a_needsParent ? std::uint16_t{ 1 } : std::uint16_t{ 0 }, static_cast<std::uint16_t>(N), a_params, a_execute, a_parse, nullptr, 0 };
	}

	[[nodiscard]] constexpr CommandInfo MakeCommand(const char* a_longName, const char* a_shortName, const char* a_help, bool a_needsParent, CommandExecute a_execute, CommandParse a_parse = nullptr) noexcept
	{
		return CommandInfo{ a_longName, a_shortName, 0, a_help, a_needsParent ? std::uint16_t{ 1 } : std::uint16_t{ 0 }, 0, nullptr, a_execute, a_parse, nullptr, 0 };
	}
}

// same shape as NVSE's DEFINE_COMMAND_PLUGIN: declares `kCommandInfo_<name>` bound to `Cmd_<name>_Execute`
#define NVSE_DEFINE_COMMAND(a_name, a_help, a_needsParent, a_params)                                                                    \
	extern bool Cmd_##a_name##_Execute(NVSE_COMMAND_ARGS_T);                                                                              \
	static ::NVSE::CommandInfo kCommandInfo_##a_name = ::NVSE::MakeCommand(#a_name, "", a_help, a_needsParent, a_params, Cmd_##a_name##_Execute)

#define NVSE_DEFINE_COMMAND_NOARGS(a_name, a_help, a_needsParent)                                                                       \
	extern bool Cmd_##a_name##_Execute(NVSE_COMMAND_ARGS_T);                                                                              \
	static ::NVSE::CommandInfo kCommandInfo_##a_name = ::NVSE::MakeCommand(#a_name, "", a_help, a_needsParent, Cmd_##a_name##_Execute)
