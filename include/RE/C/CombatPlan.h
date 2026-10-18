#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class CombatAction;
	class CombatController;
	class CombatGoal;
	class CombatPlanStep;
	class CombatWorldStateArray;

	class CombatPlan
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(CombatPlan*);
			static REL::Relocation<func_t> func{ Offsets::CombatPlan::dtor };
			func(this);
		}

		void AllocateSteps(std::uint32_t aiLength)
		{
			using func_t = decltype(&CombatPlan::AllocateSteps);
			static REL::Relocation<func_t> func{ Offsets::CombatPlan::AllocateSteps };
			func(this, aiLength);
		}

		bool ExecuteNextAction(CombatController* apCombatController)
		{
			using func_t = decltype(&CombatPlan::ExecuteNextAction);
			static REL::Relocation<func_t> func{ Offsets::CombatPlan::ExecuteNextAction };
			return func(this, apCombatController);
		}

		std::uint32_t GetIndexForStep(CombatPlanStep* apStep)
		{
			using func_t = decltype(&CombatPlan::GetIndexForStep);
			static REL::Relocation<func_t> func{ Offsets::CombatPlan::GetIndexForStep };
			return func(this, apStep);
		}

		bool ValidatePlanStep(std::uint32_t aiStep, CombatAction* apAction, std::int32_t aiActionValue, CombatWorldStateArray* apWorldStateArray)
		{
			using func_t = decltype(&CombatPlan::ValidatePlanStep);
			static REL::Relocation<func_t> func{ Offsets::CombatPlan::ValidatePlanStep };
			return func(this, aiStep, apAction, aiActionValue, apWorldStateArray);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&CombatPlan::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::CombatPlan::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatPlan::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatPlan::LoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		CombatPlanStep**  pPlanSteps;         // 00
		std::uint32_t     iLength;            // 04
		std::uint32_t     iCurrentAction;     // 08
		CombatGoal*       pGoal;              // 0C
		std::int32_t      iCombatLocation;    // 10?
		CombatController* pCombatController;  // 14?
	};
}
