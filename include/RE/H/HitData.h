#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/B/BGSBodyPart_LIMB_ENUM.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class Actor;
	class DamageImpactData;
	class ItemChange;
	class Projectile;
	class SpellItem;
	class TESObjectREFR;
	class TESObjectWEAP;
	class VATS_COMMAND;

	class HitData
	{
	public:
		enum class Flag : std::int32_t
		{
			kHD_BLOCKED = 0x1,
			kHD_BLOCK_WITH_WEAPON = 0x2,
			kHD_CRITICAL = 0x4,
			kHD_CRITICAL_ON_DEATH = 0x8,
			kHD_FATAL = 0x10,
			kHD_DISMEMBER_LIMB = 0x20,
			kHD_EXPLODE_LIMB = 0x40,
			kHD_CRIPPLE_LIMB = 0x80,
			kHD_DISARM = 0x100,
			kHD_DISABLE_WEAPON = 0x200,
			kHD_SNEAK_ATTACK = 0x400,
			kHD_IGNORE_CRITICAL = 0x800,
			kHD_PREDICT_DAMAGE = 0x1000,
			kHD_EXPLOSION = 0x2000,
		};

		bool IsFlagSet(HitData::Flag aeFlag)
		{
			using func_t = decltype(&HitData::IsFlagSet);
			static REL::Relocation<func_t> func{ Offsets::HitData::IsFlagSet };
			return func(this, aeFlag);
		}

		void IncRefCount()
		{
			using func_t = decltype(&HitData::IncRefCount);
			static REL::Relocation<func_t> func{ Offsets::HitData::IncRefCount };
			func(this);
		}

		void DecRefCount()
		{
			using func_t = decltype(&HitData::DecRefCount);
			static REL::Relocation<func_t> func{ Offsets::HitData::DecRefCount };
			func(this);
		}

		HitData* ctor()
		{
			using func_t = HitData*(__thiscall*)(HitData*);
			static REL::Relocation<func_t> func{ Offsets::HitData::ctor };
			return func(this);
		}

		static void InitializeHitData(HitData* apData, VATS_COMMAND* apVATSCommand)
		{
			using func_t = void(__cdecl*)(HitData*, VATS_COMMAND*);
			static REL::Relocation<func_t> func{ Offsets::HitData::InitializeHitData };
			func(apData, apVATSCommand);
		}

		static void InitializeHitData(HitData* apData, Actor* apAggressor, Actor* apTarget, ItemChange* apWeaponItem, bool abPowerAttack, Projectile* apProjectile)
		{
			using func_t = void(__cdecl*)(HitData*, Actor*, Actor*, ItemChange*, bool, Projectile*);
			static REL::Relocation<func_t> func{ Offsets::HitData::InitializeHitData_1 };
			func(apData, apAggressor, apTarget, apWeaponItem, abPowerAttack, apProjectile);
		}

		static void InitializeHitData(HitData* apData, Actor* apAggressor, Actor* apTarget, ItemChange* apWeaponItem, bool abPowerAttack)
		{
			using func_t = void(__cdecl*)(HitData*, Actor*, Actor*, ItemChange*, bool);
			static REL::Relocation<func_t> func{ Offsets::HitData::InitializeHitData_2 };
			func(apData, apAggressor, apTarget, apWeaponItem, abPowerAttack);
		}

		static void InitializeHitData(HitData* apData, Actor* apAggressor, Actor* apTarget, ItemChange* apWeaponItem, Projectile* apProjectile)
		{
			using func_t = void(__cdecl*)(HitData*, Actor*, Actor*, ItemChange*, Projectile*);
			static REL::Relocation<func_t> func{ Offsets::HitData::InitializeHitData_3 };
			func(apData, apAggressor, apTarget, apWeaponItem, apProjectile);
		}

		static void InitializeHitData(HitData* apData, Actor* apAggressor, Actor* apTarget, float afDamage)
		{
			using func_t = void(__cdecl*)(HitData*, Actor*, Actor*, float);
			static REL::Relocation<func_t> func{ Offsets::HitData::InitializeHitData_4 };
			func(apData, apAggressor, apTarget, afDamage);
		}

		static void InitializeExplosionData(HitData* apData, Actor* apAggressor, Actor* apTarget, TESObjectREFR* apSourceRef, float afDamage)
		{
			using func_t = decltype(&HitData::InitializeExplosionData);
			static REL::Relocation<func_t> func{ Offsets::HitData::InitializeExplosionData };
			func(apData, apAggressor, apTarget, apSourceRef, afDamage);
		}

		static void InitializeImpactData(HitData* apData, TESObjectREFR* apSourceRef, Actor* apTarget, float a_arg4, DamageImpactData* a_arg5)
		{
			using func_t = decltype(&HitData::InitializeImpactData);
			static REL::Relocation<func_t> func{ Offsets::HitData::InitializeImpactData };
			func(apData, apSourceRef, apTarget, a_arg4, a_arg5);
		}

	private:
		void ReduceDamage(bool abIgnoreBlocking)
		{
			using func_t = decltype(&HitData::ReduceDamage);
			static REL::Relocation<func_t> func{ Offsets::HitData::ReduceDamage };
			func(this, abIgnoreBlocking);
		}

		void SetTargetedLimb(Projectile* apProjectile)
		{
			using func_t = decltype(&HitData::SetTargetedLimb);
			static REL::Relocation<func_t> func{ Offsets::HitData::SetTargetedLimb };
			func(this, apProjectile);
		}

		void CheckCriticalStrike()
		{
			using func_t = decltype(&HitData::CheckCriticalStrike);
			static REL::Relocation<func_t> func{ Offsets::HitData::CheckCriticalStrike };
			func(this);
		}

		void DetermineOutcome()
		{
			using func_t = decltype(&HitData::DetermineOutcome);
			static REL::Relocation<func_t> func{ Offsets::HitData::DetermineOutcome };
			func(this);
		}

	public:
		// members
		Actor*                pAggressor;           // 00
		Actor*                pTarget;              // 04
		TESObjectREFR*        pSourceRef;           // 08
		ActorValue_Index      eAttackSkill;         // 0C
		BGSBodyPart_LIMB_ENUM eDamageLimb;          // 10
		float                 fHealthDamage;        // 14
		float                 fTotalDamage;         // 18
		float                 fFatigueDamage;       // 1C
		float                 fTargetedLimbDamage;  // 20
		float                 fPercentBlocked;      // 24
		float                 fArmorDamage;         // 28
		float                 fDamageToWeapon;      // 2C
		TESObjectWEAP*        pWeapon;              // 30
		float                 fWeaponHealth;        // 34
		NiPoint3              kHitLocation;         // 38
		NiPoint3              kHitDirection;        // 44
		SpellItem*            pCriticalEffect;      // 50
		VATS_COMMAND*         pVATSCommand;         // 54
		std::uint32_t         uiFlags;              // 58
		float                 fBonusMult;           // 5C
		std::int32_t          iRefCount;            // 60
	};
	static_assert(sizeof(HitData) == 0x64);
}
