#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/COMBAT_WEAPON_TYPE.h"
#include "RE/C/COMBAT_WORLD_STATE.h"
#include "RE/C/CombatAction_COMBAT_ACTION.h"
#include "RE/C/CombatWorldStateList.h"

namespace RE
{
	class BGSWorldLocation;
	class CombatController;
	class CombatWorldStateArray;

	class __declspec(novtable) CombatAction
	{
	public:
		static constexpr auto RTTI{ RTTI::CombatAction };
		static constexpr auto VTABLE{ VTABLE::CombatAction };

		using COMBAT_ACTION = CombatAction_COMBAT_ACTION;

		enum class COMBAT_ACTION_FLAG : std::int32_t
		{
			kINFINITE_ACTION = 0x1,
			kBACKGROUND_ACTION = 0x2,
		};

		// add
		virtual bool CanExecute(CombatController* apCombatController, CombatWorldStateArray* apWorldStateArray, std::int32_t aiActionValue);  // 00
		virtual void Execute(CombatController* apCombatController, std::int32_t aiActionValue);                                               // 01
		virtual bool CheckIdentical(CombatController* apCombatController, std::int32_t aiActionValue);                                        // 02
		virtual float GetCost(CombatController* apCombatController, std::int32_t aiActionValue);                                              // 03
		virtual void GetDebugText(char* apDebugText, std::uint32_t aiMaxLength, std::int32_t aiActionValue);                                  // 04

		CombatAction* ctor(CombatAction_COMBAT_ACTION aeType)
		{
			using func_t = CombatAction*(__thiscall*)(CombatAction*, CombatAction_COMBAT_ACTION);
			static REL::Relocation<func_t> func{ Offsets::CombatAction::ctor };
			return func(this, aeType);
		}

		char* GetName()
		{
			using func_t = decltype(&CombatAction::GetName);
			static REL::Relocation<func_t> func{ Offsets::CombatAction::GetName };
			return func(this);
		}

		static CombatAction* CreateCombatAction(CombatAction_COMBAT_ACTION aeCombatAction)
		{
			using func_t = decltype(&CombatAction::CreateCombatAction);
			static REL::Relocation<func_t> func{ Offsets::CombatAction::CreateCombatAction };
			return func(aeCombatAction);
		}

		static float GetAttackCost(CombatController* apCombatController, COMBAT_WEAPON_TYPE aeWeaponType)
		{
			using func_t = decltype(&CombatAction::GetAttackCost);
			static REL::Relocation<func_t> func{ Offsets::CombatAction::GetAttackCost };
			return func(apCombatController, aeWeaponType);
		}

		static float GetMovementCost(CombatController* apCombatController, BGSWorldLocation& arStartWorldLoc, BGSWorldLocation& arEndWorldLoc)
		{
			using func_t = decltype(&CombatAction::GetMovementCost);
			static REL::Relocation<func_t> func{ Offsets::CombatAction::GetMovementCost };
			return func(apCombatController, arStartWorldLoc, arEndWorldLoc);
		}

		void AddPossibleEffect(COMBAT_WORLD_STATE aeState, std::int32_t aiValue)
		{
			using func_t = decltype(&CombatAction::AddPossibleEffect);
			static REL::Relocation<func_t> func{ Offsets::CombatAction::AddPossibleEffect };
			func(this, aeState, aiValue);
		}

		void RemovePrecondition(COMBAT_WORLD_STATE aeState)
		{
			using func_t = decltype(&CombatAction::RemovePrecondition);
			static REL::Relocation<func_t> func{ Offsets::CombatAction::RemovePrecondition };
			func(this, aeState);
		}

		void RemoveEffect(COMBAT_WORLD_STATE aeState)
		{
			using func_t = decltype(&CombatAction::RemoveEffect);
			static REL::Relocation<func_t> func{ Offsets::CombatAction::RemoveEffect };
			func(this, aeState);
		}

		void RemoveExecutionCondition(COMBAT_WORLD_STATE aeState)
		{
			using func_t = decltype(&CombatAction::RemoveExecutionCondition);
			static REL::Relocation<func_t> func{ Offsets::CombatAction::RemoveExecutionCondition };
			func(this, aeState);
		}

		bool GetFlag(CombatAction::COMBAT_ACTION_FLAG aeFlag)
		{
			using func_t = decltype(&CombatAction::GetFlag);
			static REL::Relocation<func_t> func{ Offsets::CombatAction::GetFlag };
			return func(this, aeFlag);
		}

	public:
		// members
		CombatWorldStateList       ExecutionConditions;  // 04
		CombatWorldStateList       Preconditions;        // 0C
		CombatWorldStateList       Effects;              // 14
		CombatWorldStateList       PossibleEffects;      // 1C
		CombatAction_COMBAT_ACTION eType;                // 24
		std::uint32_t              iFlags;               // 28
	};
}
