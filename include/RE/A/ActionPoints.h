#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActionPoints_Action.h"
#include "RE/W/WEAPON_TYPE.h"

namespace RE
{
	class TESObjectWEAP;

	class ActionPoints
	{
	public:
		using Action = ActionPoints_Action;

		static ActionPoints_Action GetAttackAction(WEAPON_TYPE aeWeaponType)
		{
			using func_t = decltype(&ActionPoints::GetAttackAction);
			static REL::Relocation<func_t> func{ Offsets::ActionPoints::GetAttackAction };
			return func(aeWeaponType);
		}

		static float GetBaseActionPoints(ActionPoints_Action aeAction)
		{
			using func_t = decltype(&ActionPoints::GetBaseActionPoints);
			static REL::Relocation<func_t> func{ Offsets::ActionPoints::GetBaseActionPoints };
			return func(aeAction);
		}

		static float GetActionPoints(ActionPoints_Action aeAction, bool abVATS, float afWeaponZoomFOV, bool abSpecialAttack)
		{
			using func_t = decltype(&ActionPoints::GetActionPoints);
			static REL::Relocation<func_t> func{ Offsets::ActionPoints::GetActionPoints };
			return func(aeAction, abVATS, afWeaponZoomFOV, abSpecialAttack);
		}

		static float GetWeaponAttackActionPoints(TESObjectWEAP* apWeapon, bool abVATS, bool abSpecialAttack)
		{
			using func_t = decltype(&ActionPoints::GetWeaponAttackActionPoints);
			static REL::Relocation<func_t> func{ Offsets::ActionPoints::GetWeaponAttackActionPoints };
			return func(apWeapon, abVATS, abSpecialAttack);
		}

		static bool IsAttackAction(ActionPoints_Action aeAction)
		{
			using func_t = decltype(&ActionPoints::IsAttackAction);
			static REL::Relocation<func_t> func{ Offsets::ActionPoints::IsAttackAction };
			return func(aeAction);
		}
	};
}
