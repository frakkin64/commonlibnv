#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/C/COMPILER_NAME.h"
#include "RE/S/SCRIPT_HEADER.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class ExtraDataList;
	class SCRIPT_LOCAL;
	class SCRIPT_PARAMETER;
	class SCRIPT_REFERENCED_OBJECT;
	class ScriptCompileData;
	class ScriptCompiler;
	class ScriptLocals;
	class ScriptVariable;
	class TESFile;
	class TESObject;
	class TESObjectREFR;
	class TESQuest;

	class Script :
		public TESForm  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Script };
		static constexpr auto VTABLE{ VTABLE::Script };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kSCPT_ID };

		// override (TESForm)
		virtual ~Script() = default;                      // 04
		virtual void ClearData() override;                // 05
		virtual bool ProcessBeforeSave() override;        // 06
		virtual bool Load(TESFile* apFile) override;      // 08
		virtual void Save() override;                     // 0B
		virtual bool SaveEdit(TESFile* apFile) override;  // 0D
		virtual void InitItem() override;                 // 22

		static bool GetDistanceConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetDistanceConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetDistanceConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetInZoneConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetInZoneConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetInZoneConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetPosConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetPosConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetPosConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetAngleConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetAngleConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetAngleConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetStartingPosConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetStartingPosConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetStartingPosConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetStartingAngleConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetStartingAngleConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetStartingAngleConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetMenuModeConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetMenuModeConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetMenuModeConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetSecondsPassedConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetSecondsPassedConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetSecondsPassedConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetActorValueConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetActorValueConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetActorValueConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetBaseActorValueConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetBaseActorValueConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetBaseActorValueConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetPermanentActorValueConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetPermanentActorValueConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetPermanentActorValueConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetFatiguePercentageConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetFatiguePercentageConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetFatiguePercentageConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetHealthPercentageConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetHealthPercentageConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetHealthPercentageConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetWalkSpeedConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetWalkSpeedConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetWalkSpeedConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetCurrentTimeConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetCurrentTimeConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetCurrentTimeConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetScaleConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetScaleConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetScaleConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetLOSConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetLOSConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetLOSConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetDisabledConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetDisabledConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetDisabledConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetLockedConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetLockedConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetLockedConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetLockLevelConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetLockLevelConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetLockLevelConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsLockBrokenConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsLockBrokenConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsLockBrokenConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetDiseaseConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetDiseaseConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetDiseaseConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetVampireConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetVampireConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetVampireConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetClothingValueConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetClothingValueConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetClothingValueConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool SameFactionConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::SameFactionConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SameFactionConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool SameRaceConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::SameRaceConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SameRaceConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool SameSexConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::SameSexConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SameSexConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetDetectedConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetDetectedConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetDetectedConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetDeadConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetDeadConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetDeadConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetItemCountConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetItemCountConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetItemCountConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetEquippedConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetEquippedConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetEquippedConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetGoldConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetGoldConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetGoldConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetSleepingConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetSleepingConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetSleepingConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetSittingConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetSittingConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetSittingConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetFurnitureMarkerIDConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetFurnitureMarkerIDConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetFurnitureMarkerIDConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsCurrentFurnitureRefConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsCurrentFurnitureRefConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsCurrentFurnitureRefConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsCurrentFurnitureObjConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsCurrentFurnitureObjConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsCurrentFurnitureObjConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetTalkedToPCConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetTalkedToPCConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetTalkedToPCConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetScriptVariableConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetScriptVariableConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetScriptVariableConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetQuestRunningConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetQuestRunningConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetQuestRunningConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetQuestCompletedConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetQuestCompletedConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetQuestCompletedConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetStageConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetStageConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetStageConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetStageDoneConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetStageDoneConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetStageDoneConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetFactionRankDifferenceConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetFactionRankDifferenceConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetFactionRankDifferenceConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetAlarmedConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetAlarmedConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetAlarmedConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsPleasantConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsPleasantConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsPleasantConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsCloudyConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsCloudyConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsCloudyConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsRainingConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsRainingConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsRainingConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsSnowingConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsSnowingConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsSnowingConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetWeatherPercentConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetWeatherPercentConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetWeatherPercentConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsCurrentWeatherConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsCurrentWeatherConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsCurrentWeatherConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetAttackedConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetAttackedConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetAttackedConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsCreatureConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsCreatureConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsCreatureConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetShouldAttackConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetShouldAttackConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetShouldAttackConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetInSameCellConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetInSameCellConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetInSameCellConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetInCellConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetInCellConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetInCellConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetInWorldspaceConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetInWorldspaceConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetInWorldspaceConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsClassConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsClassConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsClassConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsRaceConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsRaceConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsRaceConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsCreatureTypeConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsCreatureTypeConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsCreatureTypeConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsSexConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsSexConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsSexConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsVoiceTypeConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsVoiceTypeConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsVoiceTypeConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsPlayableRaceConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsPlayableRaceConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsPlayableRaceConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetInFactionConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetInFactionConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetInFactionConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsIDConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsIDConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsIDConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsInListConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsInListConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsInListConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsChildConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsChildConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsChildConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsUsedItemConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsUsedItemConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsUsedItemConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsUsedItemTypeConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsUsedItemTypeConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsUsedItemTypeConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetUsedItemLevelConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetUsedItemLevelConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetUsedItemLevelConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetUsedItemActivateConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetUsedItemActivateConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetUsedItemActivateConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsRefConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsRefConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsRefConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetFactionRankConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetFactionRankConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetFactionRankConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetGlobalValueConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetGlobalValueConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetGlobalValueConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetDispositionConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetDispositionConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetDispositionConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetUnconsciousConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetUnconsciousConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetUnconsciousConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetRestrainedConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetRestrainedConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetRestrainedConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetRandomPercentConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetRandomPercentConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetRandomPercentConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetLevelConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetLevelConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetLevelConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetArmorRatingConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetArmorRatingConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetArmorRatingConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetDeadCountConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetDeadCountConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetDeadCountConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetAlertConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetAlertConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetAlertConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetPlayerControlsDisabledConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetPlayerControlsDisabledConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetPlayerControlsDisabledConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetHeadingAngleConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetHeadingAngleConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetHeadingAngleConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsWeaponOutConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsWeaponOutConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsWeaponOutConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsWeaponInListConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsWeaponInListConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsWeaponInListConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsFacingUpConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsFacingUpConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsFacingUpConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsLeftUpConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsLeftUpConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsLeftUpConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetKnockedStateConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetKnockedStateConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetKnockedStateConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetWeaponAnimTypeConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetWeaponAnimTypeConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetWeaponAnimTypeConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsWeaponSkillTypeConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsWeaponSkillTypeConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsWeaponSkillTypeConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetCurrentAIPackageConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetCurrentAIPackageConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetCurrentAIPackageConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsWaitingConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsWaitingConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsWaitingConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsIdlePlayingConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsIdlePlayingConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsIdlePlayingConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetCrimeConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetCrimeConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetCrimeConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsGuardConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsGuardConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsGuardConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsTalkingConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsTalkingConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsTalkingConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetCurrentAIProcedureConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetCurrentAIProcedureConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetCurrentAIProcedureConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetTrespassWarningLevelConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetTrespassWarningLevelConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetTrespassWarningLevelConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetWindSpeedConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetWindSpeedConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetWindSpeedConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsTrespassingConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsTrespassingConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsTrespassingConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsInMyOwnedCellConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsInMyOwnedCellConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsInMyOwnedCellConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsContinuingPackagePCNearConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsContinuingPackagePCNearConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsContinuingPackagePCNearConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool CanHaveFlamesConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::CanHaveFlamesConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::CanHaveFlamesConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool HasFlamesConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::HasFlamesConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::HasFlamesConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetOpenStateConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetOpenStateConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetOpenStateConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsCurrentPackageConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsCurrentPackageConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsCurrentPackageConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetDayOfWeekConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetDayOfWeekConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetDayOfWeekConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsPCSleepingConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsPCSleepingConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsPCSleepingConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsPCAMurdererConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsPCAMurdererConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsPCAMurdererConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetDetectionLevelConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetDetectionLevelConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetDetectionLevelConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsSwimmingConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsSwimmingConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsSwimmingConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetAmountStolenSoldConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetAmountStolenSoldConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetAmountStolenSoldConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetPCExpelledConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetPCExpelledConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetPCExpelledConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetPCFactionMurderConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetPCFactionMurderConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetPCFactionMurderConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetPlayerEnemyofFactionConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetPlayerEnemyofFactionConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetPlayerEnemyofFactionConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetPCFactionAttackConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetPCFactionAttackConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetPCFactionAttackConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetDestroyedConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetDestroyedConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetDestroyedConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool HasMagicEffectConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::HasMagicEffectConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::HasMagicEffectConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsSpellTargetConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsSpellTargetConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsSpellTargetConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetSpellUsageNumberConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetSpellUsageNumberConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetSpellUsageNumberConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetVATSModeConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetVATSModeConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetVATSModeConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetVATSTargetHeightConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetVATSTargetHeightConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetVATSTargetHeightConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetSandmanConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetSandmanConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetSandmanConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetCannibalConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetCannibalConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetCannibalConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsInCritStageConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsInCritStageConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsInCritStageConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool HasBeenEatenConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::HasBeenEatenConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::HasBeenEatenConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetGhostConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetGhostConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetGhostConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetOffersServiceConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetOffersServiceConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetOffersServiceConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetBarterGoldConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetBarterGoldConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetBarterGoldConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsTimePassingConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsTimePassingConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsTimePassingConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetArmorRatingUpperConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetArmorRatingUpperConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetArmorRatingUpperConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetOwnershipConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetOwnershipConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetOwnershipConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetCellOwnershipConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetCellOwnershipConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetCellOwnershipConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsSneakingConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsSneakingConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsSneakingConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsRunningConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsRunningConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsRunningConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetFriendHitConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetFriendHitConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetFriendHitConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsInCombatConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsInCombatConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsInCombatConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsInInteriorConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsInInteriorConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsInInteriorConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetPCMiscStatConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetPCMiscStatConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetPCMiscStatConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsActorEvilConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsActorEvilConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsActorEvilConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsActorVictimConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsActorVictimConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsActorVictimConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsInDangerousWaterConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsInDangerousWaterConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsInDangerousWaterConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsXboxConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsXboxConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsXboxConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsPS3ConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsPS3ConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsPS3ConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsPCConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsPCConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsPCConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsPlayerActionActiveConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsPlayerActionActiveConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsPlayerActionActiveConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetTalkingActivatorActorConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetTalkingActivatorActorConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetTalkingActivatorActorConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetHitLocationConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetHitLocationConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetHitLocationConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetLastHitCriticalConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetLastHitCriticalConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetLastHitCriticalConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetCauseofDeathConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetCauseofDeathConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetCauseofDeathConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetKillingBlowLimbConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetKillingBlowLimbConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetKillingBlowLimbConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetKillerConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetKillerConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetKillerConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetKillerObjectConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetKillerObjectConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetKillerObjectConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsObjectTypeConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsObjectTypeConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsObjectTypeConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetDialogueEmotionConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetDialogueEmotionConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetDialogueEmotionConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetDialogueEmotionValueConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetDialogueEmotionValueConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetDialogueEmotionValueConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsWaterObjectConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsWaterObjectConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsWaterObjectConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool HasPerkConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::HasPerkConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::HasPerkConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetFactionRelationConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetFactionRelationConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetFactionRelationConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsLastPlayedIdleConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsLastPlayedIdleConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsLastPlayedIdleConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetPlayerTeammateConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetPlayerTeammateConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetPlayerTeammateConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetPlayerTeammateCountConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetPlayerTeammateCountConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetPlayerTeammateCountConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetActorCrimePlayerEnemyConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetActorCrimePlayerEnemyConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetActorCrimePlayerEnemyConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetActorFactionPlayerEnemyConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetActorFactionPlayerEnemyConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetActorFactionPlayerEnemyConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetMinorCrimeCountConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetMinorCrimeCountConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetMinorCrimeCountConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetMajorCrimeCountConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetMajorCrimeCountConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetMajorCrimeCountConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetDestructionStageConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetDestructionStageConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetDestructionStageConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetThreatRatioConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetThreatRatioConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetThreatRatioConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsAlignmentConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsAlignmentConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsAlignmentConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIsUsedItemEquipTypeConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIsUsedItemEquipTypeConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsUsedItemEquipTypeConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetAggroRadiusViolatedConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetAggroRadiusViolatedConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetAggroRadiusViolatedConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetConcussedConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetConcussedConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetConcussedConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetMapMarkerVisibleConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetMapMarkerVisibleConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetMapMarkerVisibleConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetWeaponHealthPercConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetWeaponHealthPercConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetWeaponHealthPercConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsGreetingPlayerConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsGreetingPlayerConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsGreetingPlayerConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsCombatTargetConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsCombatTargetConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsCombatTargetConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetVATSRightAreaFreeConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetVATSRightAreaFreeConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetVATSRightAreaFreeConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetVATSLeftAreaFreeConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetVATSLeftAreaFreeConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetVATSLeftAreaFreeConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetVATSBackAreaFreeConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetVATSBackAreaFreeConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetVATSBackAreaFreeConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetVATSFrontAreaFreeConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetVATSFrontAreaFreeConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetVATSFrontAreaFreeConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetVATSRightTargetVisibleConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetVATSRightTargetVisibleConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetVATSRightTargetVisibleConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetVATSLeftTargetVisibleConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetVATSLeftTargetVisibleConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetVATSLeftTargetVisibleConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetVATSBackTargetVisibleConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetVATSBackTargetVisibleConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetVATSBackTargetVisibleConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetVATSFrontTargetVisibleConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetVATSFrontTargetVisibleConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetVATSFrontTargetVisibleConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetXPForNextLevelConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetXPForNextLevelConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetXPForNextLevelConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetIgnoreCrimeConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetIgnoreCrimeConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIgnoreCrimeConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsGoreDisabledConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsGoreDisabledConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsGoreDisabledConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetActorsInHighConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetActorsInHighConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetActorsInHighConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetForceHitReactionConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetForceHitReactionConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetForceHitReactionConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetReputationConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetReputationConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetReputationConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetReputationPctConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetReputationPctConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetReputationPctConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetReputationThresholdConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetReputationThresholdConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetReputationThresholdConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetObjectiveCompletedConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetObjectiveCompletedConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetObjectiveCompletedConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetObjectiveDisplayedConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetObjectiveDisplayedConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetObjectiveDisplayedConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsPlayerTagSkillConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsPlayerTagSkillConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsPlayerTagSkillConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsHardcoreConditionalFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsHardcoreConditionalFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsHardcoreConditionalFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool IsAlwaysHardcoreConditionalFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::IsAlwaysHardcoreConditionalFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsAlwaysHardcoreConditionalFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool ChallengeLockedConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::ChallengeLockedConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ChallengeLockedConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		static bool GetChallengeCompletedConditionFunction(TESObjectREFR* apRefObject, void* apParam1, void* apParam2, double& afReturnValue)
		{
			using func_t = decltype(&Script::GetChallengeCompletedConditionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetChallengeCompletedConditionFunction };
			return func(apRefObject, apParam1, apParam2, afReturnValue);
		}

		Script* ctor()
		{
			using func_t = Script*(__thiscall*)(Script*);
			static REL::Relocation<func_t> func{ Offsets::Script::ctor };
			return func(this);
		}

		void CopyResultScript(Script* apScriptToCopy)
		{
			using func_t = decltype(&Script::CopyResultScript);
			static REL::Relocation<func_t> func{ Offsets::Script::CopyResultScript };
			func(this, apScriptToCopy);
		}

		static void AddPendingDisabledReference(TESObjectREFR* apRef, bool abFade)
		{
			using func_t = decltype(&Script::AddPendingDisabledReference);
			static REL::Relocation<func_t> func{ Offsets::Script::AddPendingDisabledReference };
			func(apRef, abFade);
		}

		static void AddPendingEnabledReference(TESObjectREFR* apRef)
		{
			using func_t = decltype(&Script::AddPendingEnabledReference);
			static REL::Relocation<func_t> func{ Offsets::Script::AddPendingEnabledReference };
			func(apRef);
		}

		static void RemoveDelayedScriptActionReference(TESObjectREFR* apRef)
		{
			using func_t = decltype(&Script::RemoveDelayedScriptActionReference);
			static REL::Relocation<func_t> func{ Offsets::Script::RemoveDelayedScriptActionReference };
			func(apRef);
		}

		static bool IsPendingDisabledReference(TESObjectREFR* apRef)
		{
			using func_t = decltype(&Script::IsPendingDisabledReference);
			static REL::Relocation<func_t> func{ Offsets::Script::IsPendingDisabledReference };
			return func(apRef);
		}

		static bool IsPendingEnabledReference(TESObjectREFR* apRef)
		{
			using func_t = decltype(&Script::IsPendingEnabledReference);
			static REL::Relocation<func_t> func{ Offsets::Script::IsPendingEnabledReference };
			return func(apRef);
		}

		static void RunDelayedScriptActionsOnReferences()
		{
			using func_t = decltype(&Script::RunDelayedScriptActionsOnReferences);
			static REL::Relocation<func_t> func{ Offsets::Script::RunDelayedScriptActionsOnReferences };
			func();
		}

		static void SavePendingReferences(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&Script::SavePendingReferences);
			static REL::Relocation<func_t> func{ Offsets::Script::SavePendingReferences };
			func(apSaveGameBuffer);
		}

		static void LoadPendingReferences(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&Script::LoadPendingReferences);
			static REL::Relocation<func_t> func{ Offsets::Script::LoadPendingReferences };
			func(apLoadGameBuffer);
		}

		void SetCompileData(std::uint32_t auiDataSize, char* apCompileData)
		{
			using func_t = decltype(&Script::SetCompileData);
			static REL::Relocation<func_t> func{ Offsets::Script::SetCompileData };
			func(this, auiDataSize, apCompileData);
		}

		void Init(ScriptCompileData* apCompileData)
		{
			using func_t = decltype(&Script::Init);
			static REL::Relocation<func_t> func{ Offsets::Script::Init };
			func(this, apCompileData);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = void (Script::*)(TESForm*);
			static REL::Relocation<func_t> func{ Offsets::Script::InitItem };
			func(this, apOwner);
		}

		void SaveResultScript()
		{
			using func_t = decltype(&Script::SaveResultScript);
			static REL::Relocation<func_t> func{ Offsets::Script::SaveResultScript };
			func(this);
		}

		void SetText(char const* newText)
		{
			using func_t = decltype(&Script::SetText);
			static REL::Relocation<func_t> func{ Offsets::Script::SetText };
			func(this, newText);
		}

		char const* GetVariableName(std::uint32_t auiID)
		{
			using func_t = decltype(&Script::GetVariableName);
			static REL::Relocation<func_t> func{ Offsets::Script::GetVariableName };
			return func(this, auiID);
		}

		ScriptLocals* CloneLocals()
		{
			using func_t = decltype(&Script::CloneLocals);
			static REL::Relocation<func_t> func{ Offsets::Script::CloneLocals };
			return func(this);
		}

		BSSimpleList<SCRIPT_LOCAL*>* CreateLocalList()
		{
			using func_t = decltype(&Script::CreateLocalList);
			static REL::Relocation<func_t> func{ Offsets::Script::CreateLocalList };
			return func(this);
		}

		static void InitActionList(TESObjectREFR* ownerObject, ExtraDataList* apExtra)
		{
			using func_t = decltype(&Script::InitActionList);
			static REL::Relocation<func_t> func{ Offsets::Script::InitActionList };
			func(ownerObject, apExtra);
		}

		bool Run(TESObjectREFR* ownerObject, ScriptLocals* ownerVars, TESObjectREFR* ownerContainer, bool abIsPartialScript)
		{
			using func_t = decltype(&Script::Run);
			static REL::Relocation<func_t> func{ Offsets::Script::Run };
			return func(this, ownerObject, ownerVars, ownerContainer, abIsPartialScript);
		}

		void RunScriptEffectStart(TESObjectREFR* apTargetRef, ScriptLocals* apEffectLocals)
		{
			using func_t = decltype(&Script::RunScriptEffectStart);
			static REL::Relocation<func_t> func{ Offsets::Script::RunScriptEffectStart };
			func(this, apTargetRef, apEffectLocals);
		}

		void RunScriptEffectFinish(TESObjectREFR* apTargetRef, ScriptLocals* apEffectLocals)
		{
			using func_t = decltype(&Script::RunScriptEffectFinish);
			static REL::Relocation<func_t> func{ Offsets::Script::RunScriptEffectFinish };
			func(this, apTargetRef, apEffectLocals);
		}

		void RunScriptEffectUpdate(TESObjectREFR* apTargetRef, ScriptLocals* apEffectLocals, float afSecondsElapsed)
		{
			using func_t = decltype(&Script::RunScriptEffectUpdate);
			static REL::Relocation<func_t> func{ Offsets::Script::RunScriptEffectUpdate };
			func(this, apTargetRef, apEffectLocals, afSecondsElapsed);
		}

		void CompileAndRun(ScriptCompiler* compiler, COMPILER_NAME compilerIndex, TESObjectREFR* ownerObject)
		{
			using func_t = decltype(&Script::CompileAndRun);
			static REL::Relocation<func_t> func{ Offsets::Script::CompileAndRun };
			func(this, compiler, compilerIndex, ownerObject);
		}

		SCRIPT_REFERENCED_OBJECT* GetReferencedObject(std::uint32_t aiIndex, ScriptLocals* apScriptLocals)
		{
			using func_t = decltype(&Script::GetReferencedObject);
			static REL::Relocation<func_t> func{ Offsets::Script::GetReferencedObject };
			return func(this, aiIndex, apScriptLocals);
		}

		char FindVariable(char const* varName, std::uint32_t* auiID)
		{
			using func_t = decltype(&Script::FindVariable);
			static REL::Relocation<func_t> func{ Offsets::Script::FindVariable };
			return func(this, varName, auiID);
		}

		static bool GetProcessScripts()
		{
			using func_t = decltype(&Script::GetProcessScripts);
			static REL::Relocation<func_t> func{ Offsets::Script::GetProcessScripts };
			return func();
		}

		static bool SetActionFlag(TESForm* apActionForm, ExtraDataList* apExtra, std::uint32_t aiFlag)
		{
			using func_t = decltype(&Script::SetActionFlag);
			static REL::Relocation<func_t> func{ Offsets::Script::SetActionFlag };
			return func(apActionForm, apExtra, aiFlag);
		}

		static bool GetValue(double& adValue, char const* apCompiledData, std::uint32_t& auiDataOffset, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, bool abEndian)
		{
			using func_t = decltype(&Script::GetValue);
			static REL::Relocation<func_t> func{ Offsets::Script::GetValue };
			return func(adValue, apCompiledData, auiDataOffset, apRefObject, apContainer, apScript, apScriptLocals, abEndian);
		}

		static void PutNumericIDInDouble(std::uint32_t const& aiID, double& adVal)
		{
			using func_t = decltype(&Script::PutNumericIDInDouble);
			static REL::Relocation<func_t> func{ Offsets::Script::PutNumericIDInDouble };
			func(aiID, adVal);
		}

		static void GetNumericIDFromDouble(std::uint32_t& aiID, double const& adVal)
		{
			using func_t = decltype(&Script::GetNumericIDFromDouble);
			static REL::Relocation<func_t> func{ Offsets::Script::GetNumericIDFromDouble };
			func(aiID, adVal);
		}

		static bool ParseParameters(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, std::uint32_t& auiOffset, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, ...)
		{
			using func_t = bool(__cdecl*)(SCRIPT_PARAMETER const*, char const*, std::uint32_t&, TESObjectREFR*, TESObjectREFR*, Script*, ScriptLocals*, ...);
			static REL::Relocation<func_t> func{ Offsets::Script::ParseParameters };
			return func(apParameters, apCompiledParams, auiOffset, apRefObject, apContainer, apScript, apScriptLocals);
		}

		static void ClearOptimizations()
		{
			using func_t = decltype(&Script::ClearOptimizations);
			static REL::Relocation<func_t> func{ Offsets::Script::ClearOptimizations };
			func();
		}

		static bool EssentailDeathReloadFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::EssentailDeathReloadFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::EssentailDeathReloadFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool MessageFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::MessageFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::MessageFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool BuildMessageBoxStringFromParameters(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset, char const* apText, BSStringT<char>& aMessage)
		{
			using func_t = decltype(&Script::BuildMessageBoxStringFromParameters);
			static REL::Relocation<func_t> func{ Offsets::Script::BuildMessageBoxStringFromParameters };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset, apText, aMessage);
		}

		static bool GetButtonPressedFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetButtonPressedFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetButtonPressedFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool AddItemFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::AddItemFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::AddItemFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool RemoveItemFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::RemoveItemFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::RemoveItemFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool RemoveMeFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::RemoveMeFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::RemoveMeFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool RemoveAllTypedItemsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::RemoveAllTypedItemsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::RemoveAllTypedItemsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool RemoveAllItemsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::RemoveAllItemsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::RemoveAllItemsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetOwnershipFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetOwnershipFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetOwnershipFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool DropMeFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::DropMeFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::DropMeFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool IsActionRefFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::IsActionRefFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsActionRefFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ActivateFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ActivateFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ActivateFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleCombatStatsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleCombatStatsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleCombatStatsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowWhoDetectsPlayer(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowWhoDetectsPlayer);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowWhoDetectsPlayer };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PrintAILists(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PrintAILists);
			static REL::Relocation<func_t> func{ Offsets::Script::PrintAILists };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool FreezeRendererAccumulation(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::FreezeRendererAccumulation);
			static REL::Relocation<func_t> func{ Offsets::Script::FreezeRendererAccumulation };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleOcclusion(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleOcclusion);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleOcclusion };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool OutputMemContexts(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::OutputMemContexts);
			static REL::Relocation<func_t> func{ Offsets::Script::OutputMemContexts };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool OutputMemStats(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::OutputMemStats);
			static REL::Relocation<func_t> func{ Offsets::Script::OutputMemStats };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool OutputTextureUseMap(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::OutputTextureUseMap);
			static REL::Relocation<func_t> func{ Offsets::Script::OutputTextureUseMap };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool OutputArchiveProfile(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::OutputArchiveProfile);
			static REL::Relocation<func_t> func{ Offsets::Script::OutputArchiveProfile };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool QuitGame(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::QuitGame);
			static REL::Relocation<func_t> func{ Offsets::Script::QuitGame };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PurgeCellBuffers(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PurgeCellBuffers);
			static REL::Relocation<func_t> func{ Offsets::Script::PurgeCellBuffers };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleMapMarkersFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleMapMarkersFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleMapMarkersFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleVerboseFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleVerboseFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleVerboseFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleGodModeFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleGodModeFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleGodModeFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleDemigodModeFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleDemigodModeFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleDemigodModeFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleScriptsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleScriptsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleScriptsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleGrassFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleGrassFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleGrassFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool TestAllCellsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::TestAllCellsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::TestAllCellsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool RenderTestCellFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::RenderTestCellFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::RenderTestCellFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool RenderTestHereFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::RenderTestHereFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::RenderTestHereFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleEmotionsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleEmotionsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleEmotionsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ReloadCurrentClimate(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ReloadCurrentClimate);
			static REL::Relocation<func_t> func{ Offsets::Script::ReloadCurrentClimate };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ReloadCurrentWeather(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ReloadCurrentWeather);
			static REL::Relocation<func_t> func{ Offsets::Script::ReloadCurrentWeather };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetActiveWeather(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetActiveWeather);
			static REL::Relocation<func_t> func{ Offsets::Script::SetActiveWeather };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ForceWeather(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ForceWeather);
			static REL::Relocation<func_t> func{ Offsets::Script::ForceWeather };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetImageSpace(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetImageSpace);
			static REL::Relocation<func_t> func{ Offsets::Script::SetImageSpace };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool TestSeenData(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::TestSeenData);
			static REL::Relocation<func_t> func{ Offsets::Script::TestSeenData };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool TestLocalMap(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::TestLocalMap);
			static REL::Relocation<func_t> func{ Offsets::Script::TestLocalMap };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool TestCode(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::TestCode);
			static REL::Relocation<func_t> func{ Offsets::Script::TestCode };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleConversationStatsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleConversationStatsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleConversationStatsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleFullHelp(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleFullHelp);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleFullHelp };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleMagicStatsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleMagicStatsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleMagicStatsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleBordersFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleBordersFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleBordersFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleMenusFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleMenusFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleMenusFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleSkyFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleSkyFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleSkyFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleCollisionFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleCollisionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleCollisionFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleLeavesFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleLeavesFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleLeavesFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleWireframeFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleWireframeFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleWireframeFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleDetectionStats(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleDetectionStats);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleDetectionStats };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetTargetRefraction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetTargetRefraction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetTargetRefraction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetTargetRefractionFire(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetTargetRefractionFire);
			static REL::Relocation<func_t> func{ Offsets::Script::SetTargetRefractionFire };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetTargetFalloff(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetTargetFalloff);
			static REL::Relocation<func_t> func{ Offsets::Script::SetTargetFalloff };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetTargetDOF(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetTargetDOF);
			static REL::Relocation<func_t> func{ Offsets::Script::SetTargetDOF };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetMotionBlur(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetMotionBlur);
			static REL::Relocation<func_t> func{ Offsets::Script::SetMotionBlur };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleFootIK(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleFootIK);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleFootIK };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleGrabIK(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleGrabIK);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleGrabIK };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleLookIK(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleLookIK);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleLookIK };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleRagdollAnim(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleRagdollAnim);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleRagdollAnim };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetVelFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetVelFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetVelFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleLiteBriteFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleLiteBriteFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleLiteBriteFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleDebugTextFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleDebugTextFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleDebugTextFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetDebugTextFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetDebugTextFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetDebugTextFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleLODLandFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleLODLandFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleLODLandFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetLODObjectDistanceFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetLODObjectDistanceFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetLODObjectDistanceFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool HighlightBodyPartFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::HighlightBodyPartFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::HighlightBodyPartFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool HighlightAdditionalReferenceFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::HighlightAdditionalReferenceFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::HighlightAdditionalReferenceFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool DeactivateAllHighlightsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::DeactivateAllHighlightsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::DeactivateAllHighlightsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool MovePipboyKnobFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::MovePipboyKnobFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::MovePipboyKnobFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleTestLight(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleTestLight);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleTestLight };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool AddOcclusionPlane(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::AddOcclusionPlane);
			static REL::Relocation<func_t> func{ Offsets::Script::AddOcclusionPlane };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetGlobalRadialBlur(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetGlobalRadialBlur);
			static REL::Relocation<func_t> func{ Offsets::Script::SetGlobalRadialBlur };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleAiDetection(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleAiDetection);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleAiDetection };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleActorAI(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleActorAI);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleActorAI };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool IsActorsAIOff(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::IsActorsAIOff);
			static REL::Relocation<func_t> func{ Offsets::Script::IsActorsAIOff };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleAI(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleAI);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleAI };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleCombatAI(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleCombatAI);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleCombatAI };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowHeadTrackTarget(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowHeadTrackTarget);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowHeadTrackTarget };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleHighProcess(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleHighProcess);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleHighProcess };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleLowProcess(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleLowProcess);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleLowProcess };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleMiddleLowProcess(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleMiddleLowProcess);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleMiddleLowProcess };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleMiddleHighProcess(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleMiddleHighProcess);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleMiddleHighProcess };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleAISchedules(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleAISchedules);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleAISchedules };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SpeakSoundFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SpeakSoundFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SpeakSoundFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool HelpFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::HelpFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::HelpFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleNavMeshFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleNavMeshFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleNavMeshFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool DisableNavMesh(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::DisableNavMesh);
			static REL::Relocation<func_t> func{ Offsets::Script::DisableNavMesh };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool EnableNavMesh(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::EnableNavMesh);
			static REL::Relocation<func_t> func{ Offsets::Script::EnableNavMesh };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool TogglePathingInfoFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::TogglePathingInfoFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::TogglePathingInfoFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool CenterOnCellFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::CenterOnCellFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::CenterOnCellFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool CenterOnExteriorFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::CenterOnExteriorFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::CenterOnExteriorFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool CenterOnWorldFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::CenterOnWorldFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::CenterOnWorldFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetActorValueInfoFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetActorValueInfoFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetActorValueInfoFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetActorValueFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetActorValueFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetActorValueFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetSizeFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetSizeFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetSizeFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ModActorValueFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ModActorValueFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ModActorValueFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool DamageActorValueFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::DamageActorValueFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::DamageActorValueFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool RestoreActorValueFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::RestoreActorValueFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::RestoreActorValueFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ForceActorValueFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ForceActorValueFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ForceActorValueFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool KillActorFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::KillActorFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::KillActorFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool KillAllActorsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::KillAllActorsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::KillAllActorsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetGameSettingFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetGameSettingFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetGameSettingFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetGameSettingFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetGameSettingFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetGameSettingFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetINISettingFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetINISettingFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetINISettingFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetINISettingFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetINISettingFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetINISettingFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetLightingPassesFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetLightingPassesFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetLightingPassesFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetClipDistFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetClipDistFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetClipDistFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetHUDGlowConstants(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetHUDGlowConstants);
			static REL::Relocation<func_t> func{ Offsets::Script::SetHUDGlowConstants };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetTreeMipmapBias(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetTreeMipmapBias);
			static REL::Relocation<func_t> func{ Offsets::Script::SetTreeMipmapBias };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ForceCloseFile(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ForceCloseFile);
			static REL::Relocation<func_t> func{ Offsets::Script::ForceCloseFile };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool AddDecal(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::AddDecal);
			static REL::Relocation<func_t> func{ Offsets::Script::AddDecal };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool RotateFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::RotateFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::RotateFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetPosFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetPosFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetPosFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static void SetPosBase(TESObjectREFR* apRefObject, char acAxis, float afValue)
		{
			using func_t = decltype(&Script::SetPosBase);
			static REL::Relocation<func_t> func{ Offsets::Script::SetPosBase };
			func(apRefObject, acAxis, afValue);
		}

		static bool SetAngleFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetAngleFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetAngleFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static void SetAngleBase(TESObjectREFR* apRefObject, char acAxis, float afValue)
		{
			using func_t = decltype(&Script::SetAngleBase);
			static REL::Relocation<func_t> func{ Offsets::Script::SetAngleBase };
			func(apRefObject, acAxis, afValue);
		}

		static bool SetAtStartFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetAtStartFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetAtStartFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PlayGroupFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PlayGroupFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::PlayGroupFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PlayExplosionFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PlayExplosionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::PlayExplosionFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool IsAnimPlayingFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::IsAnimPlayingFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsAnimPlayingFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool StartCombatFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::StartCombatFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::StartCombatFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetScaleFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetScaleFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetScaleFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static void SetScaleBase(TESObjectREFR* apRefObject, float afValue)
		{
			using func_t = decltype(&Script::SetScaleBase);
			static REL::Relocation<func_t> func{ Offsets::Script::SetScaleBase };
			func(apRefObject, afValue);
		}

		static bool ModScaleFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ModScaleFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ModScaleFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool AddSpellFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::AddSpellFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::AddSpellFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool RemoveSpellFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::RemoveSpellFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::RemoveSpellFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool CastImmediateOnSelfFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::CastImmediateOnSelfFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::CastImmediateOnSelfFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool DispelFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::DispelFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::DispelFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PlaySoundFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PlaySoundFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::PlaySoundFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PlaySound3DFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PlaySound3DFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::PlaySound3DFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PlayMusicFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PlayMusicFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::PlayMusicFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool FadeSFXFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::FadeSFXFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::FadeSFXFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetLocationSpecificLoadScreensOnlyFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetLocationSpecificLoadScreensOnlyFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetLocationSpecificLoadScreensOnlyFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool CalcLowPathToPointFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::CalcLowPathToPointFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::CalcLowPathToPointFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowVarsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowVarsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowVarsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowQuestVarsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowQuestVarsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowQuestVarsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowQuestsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowQuestsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowQuestsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowAnimFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowAnimFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowAnimFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool Show1stPersonFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::Show1stPersonFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::Show1stPersonFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool EnableFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::EnableFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::EnableFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool DisableFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::DisableFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::DisableFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool DisableAllActors(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::DisableAllActors);
			static REL::Relocation<func_t> func{ Offsets::Script::DisableAllActors };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetIsFormTypeFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetIsFormTypeFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsFormTypeFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PlaceAtMeFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PlaceAtMeFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::PlaceAtMeFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static TESObjectREFR* PlaceAtMeFunctionBase(TESObjectREFR* apPlaceAtRef, TESObject* apObject, std::int32_t aiCount, std::int32_t aiDistance, std::int32_t aiDirection, float afHealthPerc)
		{
			using func_t = decltype(&Script::PlaceAtMeFunctionBase);
			static REL::Relocation<func_t> func{ Offsets::Script::PlaceAtMeFunctionBase };
			return func(apPlaceAtRef, apObject, aiCount, aiDistance, aiDirection, afHealthPerc);
		}

		static bool CopySaveGames(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::CopySaveGames);
			static REL::Relocation<func_t> func{ Offsets::Script::CopySaveGames };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleCellNode(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleCellNode);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleCellNode };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleTrees(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleTrees);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleTrees };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetCameraFOV(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetCameraFOV);
			static REL::Relocation<func_t> func{ Offsets::Script::SetCameraFOV };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool DumpTexturePalette(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::DumpTexturePalette);
			static REL::Relocation<func_t> func{ Offsets::Script::DumpTexturePalette };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool DumpModelMap(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::DumpModelMap);
			static REL::Relocation<func_t> func{ Offsets::Script::DumpModelMap };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ResetHealthFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ResetHealthFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ResetHealthFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool DuplicateNPCStatsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::DuplicateNPCStatsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::DuplicateNPCStatsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetChargenValue(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetChargenValue);
			static REL::Relocation<func_t> func{ Offsets::Script::SetChargenValue };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetFactionRank(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetFactionRank);
			static REL::Relocation<func_t> func{ Offsets::Script::SetFactionRank };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ModFactionRank(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ModFactionRank);
			static REL::Relocation<func_t> func{ Offsets::Script::ModFactionRank };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetFactionReaction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetFactionReaction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetFactionReaction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetAllyFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetAllyFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetAllyFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetEnemyFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetEnemyFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetEnemyFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ModDisposition(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ModDisposition);
			static REL::Relocation<func_t> func{ Offsets::Script::ModDisposition };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowMap(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowMap);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowMap };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool StartConversation(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::StartConversation);
			static REL::Relocation<func_t> func{ Offsets::Script::StartConversation };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SayFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SayFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SayFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SayToFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SayToFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SayToFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ResetAIFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ResetAIFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ResetAIFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool EvaluatePackageFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::EvaluatePackageFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::EvaluatePackageFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetAlertFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetAlertFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetAlertFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool LookFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::LookFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::LookFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetSkyParamFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetSkyParamFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetSkyParamFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PrintHDRParamFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PrintHDRParamFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::PrintHDRParamFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowPivotFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowPivotFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowPivotFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static void CheckFlagFunction(std::uint32_t aiFlag, TESObjectREFR* apRefObject, TESForm* apActionForm, ScriptLocals* apScriptLocals, double& afReturnValue)
		{
			using func_t = decltype(&Script::CheckFlagFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::CheckFlagFunction };
			func(aiFlag, apRefObject, apActionForm, apScriptLocals, afReturnValue);
		}

		static bool OnActivateFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::OnActivateFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::OnActivateFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool OnHitWithFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::OnHitWithFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::OnHitWithFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PickIdleFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PickIdleFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::PickIdleFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PlayIdleFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PlayIdleFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::PlayIdleFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PlayVATSCamerasFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PlayVATSCamerasFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::PlayVATSCamerasFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowQuestTargetsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowQuestTargetsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowQuestTargetsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowQuestLogFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowQuestLogFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowQuestLogFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowFullQuestLogFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowFullQuestLogFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowFullQuestLogFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool LockFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::LockFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::LockFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool UnlockFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::UnlockFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::UnlockFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool AddScriptPackageFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::AddScriptPackageFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::AddScriptPackageFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool RemoveScriptPackageFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::RemoveScriptPackageFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::RemoveScriptPackageFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool AddFlamesFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::AddFlamesFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::AddFlamesFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool RemoveFlamesFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::RemoveFlamesFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::RemoveFlamesFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static void MoveToFunctionBase(TESObjectREFR* apMoveRef, TESObjectREFR* apTargetRef, float afX, float afY, float afZ)
		{
			using func_t = decltype(&Script::MoveToFunctionBase);
			static REL::Relocation<func_t> func{ Offsets::Script::MoveToFunctionBase };
			func(apMoveRef, apTargetRef, afX, afY, afZ);
		}

		static bool MoveToFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::MoveToFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::MoveToFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool MoveToFadeFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::MoveToFadeFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::MoveToFadeFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool MoveToQuestTargetFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::MoveToQuestTargetFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::MoveToQuestTargetFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool WakeUpPCFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::WakeUpPCFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::WakeUpPCFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetCombatStyleFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetCombatStyleFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetCombatStyleFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SelectPlayerSpellFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SelectPlayerSpellFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SelectPlayerSpellFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool IsActorDetected(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::IsActorDetected);
			static REL::Relocation<func_t> func{ Offsets::Script::IsActorDetected };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool WaitFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::WaitFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::WaitFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool StopWaitingFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::StopWaitingFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::StopWaitingFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetPCExpelledFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetPCExpelledFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetPCExpelledFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetPCFactionMurderFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetPCFactionMurderFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetPCFactionMurderFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetPlayerEnemyofFactionFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetPlayerEnemyofFactionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetPlayerEnemyofFactionFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetPCFactionAttackFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetPCFactionAttackFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetPCFactionAttackFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetDestroyedFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetDestroyedFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetDestroyedFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetActionRefFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetActionRefFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetActionRefFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetSelfFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetSelfFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetSelfFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetCombatTargetFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetCombatTargetFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetCombatTargetFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetPackageTargetFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetPackageTargetFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetPackageTargetFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetContainerFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetContainerFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetContainerFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetParentRefFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetParentRefFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetParentRefFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetLinkedRefFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetLinkedRefFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetLinkedRefFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetForceRun(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetForceRun);
			static REL::Relocation<func_t> func{ Offsets::Script::GetForceRun };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetForceRun(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetForceRun);
			static REL::Relocation<func_t> func{ Offsets::Script::SetForceRun };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetForceSneak(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetForceSneak);
			static REL::Relocation<func_t> func{ Offsets::Script::GetForceSneak };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetForceSneak(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetForceSneak);
			static REL::Relocation<func_t> func{ Offsets::Script::SetForceSneak };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool AdvanceLevelFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::AdvanceLevelFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::AdvanceLevelFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetDefaultOpenFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetDefaultOpenFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetDefaultOpenFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetDefaultOpenFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetDefaultOpenFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetDefaultOpenFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetOpenStateFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetOpenStateFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetOpenStateFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowBarterMenu(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowBarterMenu);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowBarterMenu };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowSPECIALBookMenu(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowSPECIALBookMenu);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowSPECIALBookMenu };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowSlotMachineMenu(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowSlotMachineMenu);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowSlotMachineMenu };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowBlackJackMenu(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowBlackJackMenu);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowBlackJackMenu };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowRouletteMenu(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowRouletteMenu);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowRouletteMenu };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowCaravanMenu(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowCaravanMenu);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowCaravanMenu };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool AddCardToPlayer(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& auiOffset, std::uint32_t& a_arg8)
		{
			using func_t = decltype(&Script::AddCardToPlayer);
			static REL::Relocation<func_t> func{ Offsets::Script::AddCardToPlayer };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, auiOffset, a_arg8);
		}

		static bool IsPlayerInRegion(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::IsPlayerInRegion);
			static REL::Relocation<func_t> func{ Offsets::Script::IsPlayerInRegion };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowLoveTesterMenu(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowLoveTesterMenu);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowLoveTesterMenu };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetSecuritronExpression(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetSecuritronExpression);
			static REL::Relocation<func_t> func{ Offsets::Script::SetSecuritronExpression };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SwapTextureOnRef(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SwapTextureOnRef);
			static REL::Relocation<func_t> func{ Offsets::Script::SwapTextureOnRef };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowHackingMiniGame(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowHackingMiniGame);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowHackingMiniGame };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowComputersInterface(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowComputersInterface);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowComputersInterface };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetGhostFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetGhostFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetGhostFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool EquipItemFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::EquipItemFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::EquipItemFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool UnEquipItemFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::UnEquipItemFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::UnEquipItemFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetClassFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetClassFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetClassFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetUnconsciousFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetUnconsciousFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetUnconsciousFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetRestrainedFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetRestrainedFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetRestrainedFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ForceFleeFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ForceFleeFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ForceFleeFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ModBarterGoldFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ModBarterGoldFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ModBarterGoldFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetBarterGoldFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetBarterGoldFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetBarterGoldFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetLevelFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetLevelFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetLevelFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ResetFallDamageTimerFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ResetFallDamageTimerFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ResetFallDamageTimerFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ModPCAttributeFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ModPCAttributeFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ModPCAttributeFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetWeaponHealthFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetWeaponHealthFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetWeaponHealthFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PlayBinkFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PlayBinkFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::PlayBinkFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetCellOwnershipFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetCellOwnershipFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetCellOwnershipFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetCellOwnershipFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetCellOwnershipFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetCellOwnershipFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetActorFullNameFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetActorFullNameFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetActorFullNameFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetPackageDurationFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetPackageDurationFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetPackageDurationFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PlayMagicShader(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PlayMagicShader);
			static REL::Relocation<func_t> func{ Offsets::Script::PlayMagicShader };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PlayMagicEffect(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PlayMagicEffect);
			static REL::Relocation<func_t> func{ Offsets::Script::PlayMagicEffect };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool StopMagicShader(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::StopMagicShader);
			static REL::Relocation<func_t> func{ Offsets::Script::StopMagicShader };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool StopMagicEffect(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::StopMagicEffect);
			static REL::Relocation<func_t> func{ Offsets::Script::StopMagicEffect };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PreloadMagicEffect(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PreloadMagicEffect);
			static REL::Relocation<func_t> func{ Offsets::Script::PreloadMagicEffect };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetNoRumorsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetNoRumorsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetNoRumorsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetNoRumorsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetNoRumorsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetNoRumorsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetWhichServiceFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetWhichServiceFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetWhichServiceFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool TriggerHitShaderFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::TriggerHitShaderFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::TriggerHitShaderFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool IsActorRidingHorseFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::IsActorRidingHorseFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsActorRidingHorseFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool IsPlayersLastRiddenHorseFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::IsPlayersLastRiddenHorseFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsPlayersLastRiddenHorseFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool IsInDangerousWaterFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::IsInDangerousWaterFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsInDangerousWaterFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleWaterSystem(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleWaterSystem);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleWaterSystem };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ModifyWaterShader(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ModifyWaterShader);
			static REL::Relocation<func_t> func{ Offsets::Script::ModifyWaterShader };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ModifyWaterShaderShallowColor(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ModifyWaterShaderShallowColor);
			static REL::Relocation<func_t> func{ Offsets::Script::ModifyWaterShaderShallowColor };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ModifyWaterShaderDeepColor(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ModifyWaterShaderDeepColor);
			static REL::Relocation<func_t> func{ Offsets::Script::ModifyWaterShaderDeepColor };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ModifyWaterShaderReflectionColor(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ModifyWaterShaderReflectionColor);
			static REL::Relocation<func_t> func{ Offsets::Script::ModifyWaterShaderReflectionColor };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetRigidBodyMass(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetRigidBodyMass);
			static REL::Relocation<func_t> func{ Offsets::Script::SetRigidBodyMass };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetIgnoreFriendlyHitsFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetIgnoreFriendlyHitsFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIgnoreFriendlyHitsFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetItemValueFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetItemValueFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetItemValueFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetActorRefractionFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetActorRefractionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetActorRefractionFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool StartAllQuests(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::StartAllQuests);
			static REL::Relocation<func_t> func{ Offsets::Script::StartAllQuests };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool CompleteAllQuestStages(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::CompleteAllQuestStages);
			static REL::Relocation<func_t> func{ Offsets::Script::CompleteAllQuestStages };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool FlushPersistantActors(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::FlushPersistantActors);
			static REL::Relocation<func_t> func{ Offsets::Script::FlushPersistantActors };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool DeleteReference(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::DeleteReference);
			static REL::Relocation<func_t> func{ Offsets::Script::DeleteReference };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleFogOfWar(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleFogOfWar);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleFogOfWar };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetDepthOfField(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetDepthOfField);
			static REL::Relocation<func_t> func{ Offsets::Script::SetDepthOfField };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SendCrimeAlarmFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SendCrimeAlarmFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SendCrimeAlarmFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleCastShadows(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleCastShadows);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleCastShadows };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetSceneIsComplex(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetSceneIsComplex);
			static REL::Relocation<func_t> func{ Offsets::Script::SetSceneIsComplex };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool IsEssentialFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::IsEssentialFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsEssentialFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool IsActorFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::IsActorFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsActorFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool IsPlayerMovingIntoNewSpaceFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::IsPlayerMovingIntoNewSpaceFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsPlayerMovingIntoNewSpaceFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetTimeDeadFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetTimeDeadFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetTimeDeadFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool DamageObjectFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::DamageObjectFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::DamageObjectFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetTalkingActivatorActorFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetTalkingActivatorActorFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetTalkingActivatorActorFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool AddPerkFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::AddPerkFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::AddPerkFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SendSherlockDebugPage(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SendSherlockDebugPage);
			static REL::Relocation<func_t> func{ Offsets::Script::SendSherlockDebugPage };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool RemoveNoteFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::RemoveNoteFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::RemoveNoteFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetGlobalTimeMultiplierFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetGlobalTimeMultiplierFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetGlobalTimeMultiplierFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetHitLocationFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetHitLocationFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetHitLocationFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetLastHitCriticalFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetLastHitCriticalFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetLastHitCriticalFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool IsPC1stPersonFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::IsPC1stPersonFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsPC1stPersonFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetCombatActionCostFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetCombatActionCostFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetCombatActionCostFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleCombatDebugFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleCombatDebugFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleCombatDebugFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ForceCombatGroupStrategyFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ForceCombatGroupStrategyFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ForceCombatGroupStrategyFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetActorsAIFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetActorsAIFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetActorsAIFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PushActorAwayFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PushActorAwayFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::PushActorAwayFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowInventoryFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowInventoryFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowInventoryFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowCharGenMenu(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowCharGenMenu);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowCharGenMenu };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowCharGenMenuModValues(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowCharGenMenuModValues);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowCharGenMenuModValues };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleDecalRendering(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleDecalRendering);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleDecalRendering };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetIsMovingFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetIsMovingFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsMovingFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetIsTurningFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetIsTurningFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetIsTurningFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetAnimActionFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetAnimActionFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetAnimActionFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetObjectiveCompletedFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetObjectiveCompletedFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetObjectiveCompletedFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetObjectiveDisplayedFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetObjectiveDisplayedFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetObjectiveDisplayedFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetObjectiveCompletedFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetObjectiveCompletedFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetObjectiveCompletedFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetObjectiveDisplayedFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetObjectiveDisplayedFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetObjectiveDisplayedFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PipboyRadio(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PipboyRadio);
			static REL::Relocation<func_t> func{ Offsets::Script::PipboyRadio };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetNPCRadio(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetNPCRadio);
			static REL::Relocation<func_t> func{ Offsets::Script::SetNPCRadio };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetBroadcastState(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetBroadcastState);
			static REL::Relocation<func_t> func{ Offsets::Script::GetBroadcastState };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetAudioMultiThreading(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetAudioMultiThreading);
			static REL::Relocation<func_t> func{ Offsets::Script::SetAudioMultiThreading };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleVATSLight(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleVATSLight);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleVATSLight };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ResetDialogueFlags(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ResetDialogueFlags);
			static REL::Relocation<func_t> func{ Offsets::Script::ResetDialogueFlags };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowWarningFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowWarningFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowWarningFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool TriggerEnterFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::TriggerEnterFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::TriggerEnterFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool AddItemHealthPercentFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::AddItemHealthPercentFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::AddItemHealthPercentFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PlaceAtMeHealthPercentFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PlaceAtMeHealthPercentFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::PlaceAtMeHealthPercentFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetConsoleOutputFileFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetConsoleOutputFileFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetConsoleOutputFileFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool OpenTeammateContainerFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::OpenTeammateContainerFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::OpenTeammateContainerFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetPlayerTagSkillFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetPlayerTagSkillFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetPlayerTagSkillFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool IsPlayerTagSkillFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::IsPlayerTagSkillFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsPlayerTagSkillFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetPlayerGrabbedRefFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetPlayerGrabbedRefFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetPlayerGrabbedRefFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PlaceLeveledActorAtMeFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PlaceLeveledActorAtMeFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::PlaceLeveledActorAtMeFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool MatchFaceGeometryFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::MatchFaceGeometryFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::MatchFaceGeometryFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static void MatchFaceGeometryBase(TESObjectREFR* apRef, TESObjectREFR* apMatchActor, std::int32_t aiValue)
		{
			using func_t = decltype(&Script::MatchFaceGeometryBase);
			static REL::Relocation<func_t> func{ Offsets::Script::MatchFaceGeometryBase };
			func(apRef, apMatchActor, aiValue);
		}

		static bool SendAssaultAlarmFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SendAssaultAlarmFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SendAssaultAlarmFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool FireWeaponFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::FireWeaponFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::FireWeaponFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowTutorialMenu(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowTutorialMenu);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowTutorialMenu };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool AgeRaceFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::AgeRaceFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::AgeRaceFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool MatchRaceFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::MatchRaceFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::MatchRaceFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetVATSTargetFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetVATSTargetFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetVATSTargetFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ModWeaponHealthPercFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ModWeaponHealthPercFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ModWeaponHealthPercFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetNoActivationSound(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetNoActivationSound);
			static REL::Relocation<func_t> func{ Offsets::Script::SetNoActivationSound };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool DrawSkeleton(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::DrawSkeleton);
			static REL::Relocation<func_t> func{ Offsets::Script::DrawSkeleton };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool AttachAshPileFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::AttachAshPileFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::AttachAshPileFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SinFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SinFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SinFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool CosFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::CosFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::CosFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool TanFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::TanFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::TanFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool LogFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::LogFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::LogFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ForceTerminalBackFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ForceTerminalBackFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ForceTerminalBackFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ToggleDepthBiasFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ToggleDepthBiasFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ToggleDepthBiasFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetMinimalUseFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetMinimalUseFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetMinimalUseFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ShowQuestStagesFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowQuestStagesFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowQuestStagesFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ModifyFaceGen(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ModifyFaceGen);
			static REL::Relocation<func_t> func{ Offsets::Script::ModifyFaceGen };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool IsCodeRedeemedFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::IsCodeRedeemedFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsCodeRedeemedFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool DetonatePlacedExplosivesFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::DetonatePlacedExplosivesFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::DetonatePlacedExplosivesFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetLastExtDoorActivated(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetLastExtDoorActivated);
			static REL::Relocation<func_t> func{ Offsets::Script::SetLastExtDoorActivated };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetTaskThreadSleepFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetTaskThreadSleepFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetTaskThreadSleepFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetTaskThreadUpdateSleepFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetTaskThreadUpdateSleepFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetTaskThreadUpdateSleepFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool AddItemToLeveledListFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::AddItemToLeveledListFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::AddItemToLeveledListFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool RemapWaterTypeFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::RemapWaterTypeFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::RemapWaterTypeFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool SetHardcoreFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::SetHardcoreFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::SetHardcoreFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ResetXPFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& auiOffset, std::uint32_t& a_arg8)
		{
			using func_t = decltype(&Script::ResetXPFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ResetXPFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, auiOffset, a_arg8);
		}

		static bool ShowRecipeMenu(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ShowRecipeMenu);
			static REL::Relocation<func_t> func{ Offsets::Script::ShowRecipeMenu };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool PlaceAtReticleFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::PlaceAtReticleFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::PlaceAtReticleFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool ObjectUnderReticleFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::ObjectUnderReticleFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::ObjectUnderReticleFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool GetDLCCountFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::GetDLCCountFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::GetDLCCountFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool IsDLCInstalledFunction(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::IsDLCInstalledFunction);
			static REL::Relocation<func_t> func{ Offsets::Script::IsDLCInstalledFunction };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool EnableLoadingMenu(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::EnableLoadingMenu);
			static REL::Relocation<func_t> func{ Offsets::Script::EnableLoadingMenu };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static bool IsLoadingMenuEnabled(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& auiOffset, std::uint32_t& a_arg8)
		{
			using func_t = decltype(&Script::IsLoadingMenuEnabled);
			static REL::Relocation<func_t> func{ Offsets::Script::IsLoadingMenuEnabled };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, auiOffset, a_arg8);
		}

		static bool IsActorRefEssential(SCRIPT_PARAMETER const* apParameters, char const* apCompiledParams, TESObjectREFR* apRefObject, TESObjectREFR* apContainer, Script* apScript, ScriptLocals* apScriptLocals, double& afReturnValue, std::uint32_t& auiOffset)
		{
			using func_t = decltype(&Script::IsActorRefEssential);
			static REL::Relocation<func_t> func{ Offsets::Script::IsActorRefEssential };
			return func(apParameters, apCompiledParams, apRefObject, apContainer, apScript, apScriptLocals, afReturnValue, auiOffset);
		}

		static void SetCrimeVictim(TESForm* apform)
		{
			using func_t = decltype(&Script::SetCrimeVictim);
			static REL::Relocation<func_t> func{ Offsets::Script::SetCrimeVictim };
			func(apform);
		}

	public:
		// members
		SCRIPT_HEADER                           m_header;                      // 18
		char*                                   m_text;                        // 2C
		char*                                   m_data;                        // 30
		float                                   fProfilerTimer;                // 34
		float                                   fQuestScriptDelay;             // 38
		float                                   fQuestScriptGetSecondsBuffer;  // 3C
		TESQuest*                               pOwnerQuest;                   // 40
		BSSimpleList<SCRIPT_REFERENCED_OBJECT*> listRefObjects;                // 44
		BSSimpleList<ScriptVariable*>           listVariables;                 // 4C
	};
	static_assert(sizeof(Script) == 0x54);
}
