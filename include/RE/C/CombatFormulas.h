#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ANIM_GROUP_ENUM.h"
#include "RE/A/ActorValue_Index.h"
#include "RE/W/WEAPON_TYPE.h"

namespace RE
{
	class Actor;
	class ActorValueOwner;
	class BGSBodyPart;
	class BGSExplosion;
	class IDebugText;
	class ItemChange;
	class TESAmmo;
	class TESCombatStyle;
	class TESForm;
	class TESObjectREFR;
	class TESObjectWEAP;

	class CombatFormulas
	{
	public:
		static float GetPowerAttackDamageMultiplier(std::int32_t aiWeaponSkill, ANIM_GROUP_ENUM aePowerAttackGroup)
		{
			using func_t = decltype(&CombatFormulas::GetPowerAttackDamageMultiplier);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::GetPowerAttackDamageMultiplier };
			return func(aiWeaponSkill, aePowerAttackGroup);
		}

		static std::uint16_t SelectDodgeDirection(TESCombatStyle* apCombatStyle, bool abDodgerAttacking, bool abTargetAttacking, float fTargetDistance, float a_arg5, bool a_arg6, bool abFavorLeftRight, std::uint16_t fWeaponReach)
		{
			using func_t = decltype(&CombatFormulas::SelectDodgeDirection);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::SelectDodgeDirection };
			return func(apCombatStyle, abDodgerAttacking, abTargetAttacking, fTargetDistance, a_arg5, a_arg6, abFavorLeftRight, fWeaponReach);
		}

		static float CalcWeaponDamage(ActorValueOwner* apActor, TESObjectWEAP* apWeapon, float afCondition, float a_arg4, bool a_arg5, bool abIgnoreFatigue, ItemChange* abIgnoreExplosion, bool afDamageMultiplier)
		{
			using func_t = decltype(&CombatFormulas::CalcWeaponDamage);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::CalcWeaponDamage };
			return func(apActor, apWeapon, afCondition, a_arg4, a_arg5, abIgnoreFatigue, abIgnoreExplosion, afDamageMultiplier);
		}

		static float CalcWeaponDamageForDisplay(TESObjectWEAP* apWeapon, float a_arg2, ItemChange* a_arg3, TESAmmo* apItem)
		{
			using func_t = decltype(&CombatFormulas::CalcWeaponDamageForDisplay);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::CalcWeaponDamageForDisplay };
			return func(apWeapon, a_arg2, a_arg3, apItem);
		}

		static float CalcWeaponDamagePerSecond(ActorValueOwner* apActor, TESObjectWEAP* apWeapon, float a_arg3, bool a_arg4, ItemChange* abRunEntryPoint, bool apItem, bool bForceReloadCalc, std::int32_t bForceJamTime, float afCondition, float fCritChanceOverride, bool fCritDamageModifier, bool weapSkillOverride, TESAmmo* bForceSneakAttackCrit)
		{
			using func_t = decltype(&CombatFormulas::CalcWeaponDamagePerSecond);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::CalcWeaponDamagePerSecond };
			return func(apActor, apWeapon, a_arg3, a_arg4, abRunEntryPoint, apItem, bForceReloadCalc, bForceJamTime, afCondition, fCritChanceOverride, fCritDamageModifier, weapSkillOverride, bForceSneakAttackCrit);
		}

		static float GetWeaponRateOfFire(ActorValueOwner* apActor, TESObjectWEAP* apWeapon, ItemChange* apItem)
		{
			using func_t = decltype(&CombatFormulas::GetWeaponRateOfFire);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::GetWeaponRateOfFire };
			return func(apActor, apWeapon, apItem);
		}

		static float GetWeaponShotsPerSecond(TESObjectREFR* apActorRef, TESObjectWEAP* apWeapon, bool abUseReload, ItemChange* apItem)
		{
			using func_t = decltype(&CombatFormulas::GetWeaponShotsPerSecond);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::GetWeaponShotsPerSecond };
			return func(apActorRef, apWeapon, abUseReload, apItem);
		}

		static float CalcCombatWeaponDPS(TESForm* apActorForm, TESObjectWEAP* apWeapon, float a_arg3, TESCombatStyle* CombatStyle, ItemChange* apCombatStyle, TESAmmo* apItem)
		{
			using func_t = decltype(&CombatFormulas::CalcCombatWeaponDPS);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::CalcCombatWeaponDPS };
			return func(apActorForm, apWeapon, a_arg3, CombatStyle, apCombatStyle, apItem);
		}

		static float CalcDamageToWeapon(Actor* apActor)
		{
			using func_t = decltype(&CombatFormulas::CalcDamageToWeapon);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::CalcDamageToWeapon };
			return func(apActor);
		}

		static void CalcHandToHandDamage(ActorValueOwner* apActor, bool abOpponentKnockedOut, float& afHealthDamage, float& afFatigueDamage)
		{
			using func_t = decltype(&CombatFormulas::CalcHandToHandDamage);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::CalcHandToHandDamage };
			func(apActor, abOpponentKnockedOut, afHealthDamage, afFatigueDamage);
		}

		static float CalcArmorRating(std::uint16_t asArmorRating, float afcondition)
		{
			using func_t = decltype(&CombatFormulas::CalcArmorRating);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::CalcArmorRating };
			return func(asArmorRating, afcondition);
		}

		static float CalcBlock(std::int32_t aiSkill)
		{
			using func_t = decltype(&CombatFormulas::CalcBlock);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::CalcBlock };
			return func(aiSkill);
		}

		static float CalcWeaponReach(float afReachMultiplier)
		{
			using func_t = decltype(&CombatFormulas::CalcWeaponReach);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::CalcWeaponReach };
			return func(afReachMultiplier);
		}

		static bool CheckKnockdown(ActorValueOwner* apActor, std::int32_t aiDamage)
		{
			using func_t = decltype(&CombatFormulas::CheckKnockdown);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::CheckKnockdown };
			return func(apActor, aiDamage);
		}

		static float GetKnockbackSpeed(ActorValueOwner* apActor, std::int32_t aiDamage)
		{
			using func_t = decltype(&CombatFormulas::GetKnockbackSpeed);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::GetKnockbackSpeed };
			return func(apActor, aiDamage);
		}

		static float GetRandomBetween(float afMin, float afMax)
		{
			using func_t = decltype(&CombatFormulas::GetRandomBetween);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::GetRandomBetween };
			return func(afMin, afMax);
		}

		static float GetArrowGravity(float afArrowPower, float afMarksmanSkill, std::int32_t aiLuck)
		{
			using func_t = decltype(&CombatFormulas::GetArrowGravity);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::GetArrowGravity };
			return func(afArrowPower, afMarksmanSkill, aiLuck);
		}

		static float GetInitialTargetValue(float afTargetBaseHealth, float afTargetCurrentHealth, float afActorBaseHealth, float afTargetModfiedDamage, float afDistance)
		{
			using func_t = decltype(&CombatFormulas::GetInitialTargetValue);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::GetInitialTargetValue };
			return func(afTargetBaseHealth, afTargetCurrentHealth, afActorBaseHealth, afTargetModfiedDamage, afDistance);
		}

		static float GetBodyPartCondition(ActorValueOwner* apActor, ActorValue_Index aiWhich, bool abRaw)
		{
			using func_t = decltype(&CombatFormulas::GetBodyPartCondition);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::GetBodyPartCondition };
			return func(apActor, aiWhich, abRaw);
		}

		static float GetArmCondition(ActorValueOwner* apActor, WEAPON_TYPE aeWeaponType)
		{
			using func_t = decltype(&CombatFormulas::GetArmCondition);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::GetArmCondition };
			return func(apActor, aeWeaponType);
		}

		static float GetGunSpread(Actor* apActor, TESObjectWEAP* apWeapon, float a_arg3, bool a_arg4, bool abIronSights, bool abCrouching, bool abWalking)
		{
			using func_t = decltype(&CombatFormulas::GetGunSpread);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::GetGunSpread };
			return func(apActor, apWeapon, a_arg3, a_arg4, abIronSights, abCrouching, abWalking);
		}

		static void CheckDismemberOrExplode(ActorValueOwner* apAttacker, TESObjectWEAP* apWeapon, std::int32_t aiExplodeChance, std::int32_t aiDismemberBonus, std::int32_t aiExplodeBonus, bool abExplodeChanceAbsolute, bool& abDismember, bool& abExplode)
		{
			using func_t = decltype(&CombatFormulas::CheckDismemberOrExplode);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::CheckDismemberOrExplode };
			func(apAttacker, apWeapon, aiExplodeChance, aiDismemberBonus, aiExplodeBonus, abExplodeChanceAbsolute, abDismember, abExplode);
		}

		static float GetVATSChanceToHit(ActorValueOwner* apActor, TESObjectREFR* apTarget, TESObjectWEAP* apWeapon, float afWeaponCondition, float a_arg5, float a_arg6, BGSBodyPart* a_arg7, TESObjectWEAP* afReach, float afGunSkill, float afScreenPercentage, float afTargetRange, IDebugText* afTargetSize)
		{
			using func_t = decltype(&CombatFormulas::GetVATSChanceToHit);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::GetVATSChanceToHit };
			return func(apActor, apTarget, apWeapon, afWeaponCondition, a_arg5, a_arg6, a_arg7, afReach, afGunSkill, afScreenPercentage, afTargetRange, afTargetSize);
		}

		static float GetWeaponConditionJamMult(std::int32_t aiCondition)
		{
			using func_t = decltype(&CombatFormulas::GetWeaponConditionJamMult);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::GetWeaponConditionJamMult };
			return func(aiCondition);
		}

		static float GetWeaponStrengthRequirementModifier(std::uint32_t aiSTRReq, std::uint32_t aiSTR, std::uint32_t aiSTRMod)
		{
			using func_t = decltype(&CombatFormulas::GetWeaponStrengthRequirementModifier);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::GetWeaponStrengthRequirementModifier };
			return func(aiSTRReq, aiSTR, aiSTRMod);
		}

		static float GetWeaponSkillRequirementModifier(std::uint32_t aiSkillReq, std::uint32_t aiSkill, std::uint32_t aiSTRMod)
		{
			using func_t = decltype(&CombatFormulas::GetWeaponSkillRequirementModifier);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::GetWeaponSkillRequirementModifier };
			return func(aiSkillReq, aiSkill, aiSTRMod);
		}

		static float CalcExplosionDamageDistance(float afExplosionRadius, float afBaseExplosionDamage, float afActualDamage)
		{
			using func_t = decltype(&CombatFormulas::CalcExplosionDamageDistance);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::CalcExplosionDamageDistance };
			return func(afExplosionRadius, afBaseExplosionDamage, afActualDamage);
		}

		static float CalcExplosionDamage(BGSExplosion* pExplosion)
		{
			using func_t = decltype(&CombatFormulas::CalcExplosionDamage);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::CalcExplosionDamage };
			return func(pExplosion);
		}

		static std::int32_t GetScreenSplatterCount(float fDamage)
		{
			using func_t = decltype(&CombatFormulas::GetScreenSplatterCount);
			static REL::Relocation<func_t> func{ Offsets::CombatFormulas::GetScreenSplatterCount };
			return func(fDamage);
		}
	};
}
