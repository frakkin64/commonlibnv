#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSPreloadable.h"
#include "RE/B/BGSProjectileData.h"
#include "RE/S/SOUND_LEVEL.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESModel.h"

namespace RE
{
	class NiAVObject;
	class TESFile;
	class TESForm;
	class TESObjectREFR;
	class TESObjectWEAP;

	class BGSProjectile :
		public TESBoundObject,  // 00
		public TESFullName,  // 30
		public TESModel,  // 3C
		public BGSPreloadable,  // 54
		public BGSDestructibleObjectForm  // 58
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSProjectile };
		static constexpr auto VTABLE{ VTABLE::BGSProjectile };

		enum class BGSProjectileFlags : std::int32_t
		{
			kHITSCAN = 0x1,
			kEXPLOSION = 0x2,
			kEXPLOSION_ALT_TRIGGER = 0x4,
			kMUZZLE_FlASH = 0x8,
			kBOUNCE_ON_IMPACT = 0x10,
			kCAN_TURN_OFF = 0x20,
			kCAN_PICKUP = 0x40,
			kSUPERSONIC = 0x80,
			kPINS_LIMBS = 0x100,
			kPASS_SM_TRANSPARENT = 0x200,
			kEXPLOSION_DETONATES = 0x400,
			kHAS_ROTATION = 0x800,
			kMOTION_MISSILE = 0x10000,
			kMOTION_GRENADE = 0x20000,
			kMOTION_BEAM = 0x40000,
			kMOTION_FLAMETHROWER = 0x80000,
			kMOTION_CONTINUOUS_BEAM = 0x100000,
			kMOTIONTYPES = 0x1F0000,
		};

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kPROJ_ID };

		// override (TESBoundObject)
		virtual ~BGSProjectile() = default;                                                                                                                              // 04
		virtual void ClearData() override;                                                                                                                               // 05
		virtual bool ProcessBeforeSave() override;                                                                                                                       // 06
		virtual bool Load(TESFile* apFile) override;                                                                                                                     // 08
		virtual void Save() override;                                                                                                                                    // 0B
		virtual void InitItem() override;                                                                                                                                // 22
		virtual void Copy(TESForm* apCopy) override;                                                                                                                     // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                                                                  // 43
		virtual bool Activate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjectToGet, std::int32_t aiCount) override;  // 49
		virtual NiAVObject* Clone3D(TESObjectREFR* pRequester, bool deepCopy) override;                                                                                  // 53
		virtual void UnClone3D(TESObjectREFR* apRequester) override;                                                                                                     // 54

		BGSProjectileData* GetData()
		{
			using func_t = decltype(&BGSProjectile::GetData);
			static REL::Relocation<func_t> func{ Offsets::BGSProjectile::GetData };
			return func(this);
		}

		BGSProjectile* ctor()
		{
			using func_t = BGSProjectile*(__thiscall*)(BGSProjectile*);
			static REL::Relocation<func_t> func{ Offsets::BGSProjectile::ctor };
			return func(this);
		}

		bool GetHasExplosion()
		{
			using func_t = decltype(&BGSProjectile::GetHasExplosion);
			static REL::Relocation<func_t> func{ Offsets::BGSProjectile::GetHasExplosion };
			return func(this);
		}

		bool IsFlagSet(BGSProjectile::BGSProjectileFlags aeFlag)
		{
			using func_t = decltype(&BGSProjectile::IsFlagSet);
			static REL::Relocation<func_t> func{ Offsets::BGSProjectile::IsFlagSet };
			return func(this, aeFlag);
		}

		BGSProjectile::BGSProjectileFlags GetMotionType()
		{
			using func_t = decltype(&BGSProjectile::GetMotionType);
			static REL::Relocation<func_t> func{ Offsets::BGSProjectile::GetMotionType };
			return func(this);
		}

		bool GetCanTurnOff()
		{
			using func_t = decltype(&BGSProjectile::GetCanTurnOff);
			static REL::Relocation<func_t> func{ Offsets::BGSProjectile::GetCanTurnOff };
			return func(this);
		}

		std::int32_t GetPreCloneCount(TESObjectWEAP* apSourceWeapon)
		{
			using func_t = decltype(&BGSProjectile::GetPreCloneCount);
			static REL::Relocation<func_t> func{ Offsets::BGSProjectile::GetPreCloneCount };
			return func(this, apSourceWeapon);
		}

		bool GetHasExplosionDetonates()
		{
			using func_t = decltype(&BGSProjectile::GetHasExplosionDetonates);
			static REL::Relocation<func_t> func{ Offsets::BGSProjectile::GetHasExplosionDetonates };
			return func(this);
		}

		float GetGravity()
		{
			using func_t = decltype(&BGSProjectile::GetGravity);
			static REL::Relocation<func_t> func{ Offsets::BGSProjectile::GetGravity };
			return func(this);
		}

		bool GetHasExplosionAltTrigger()
		{
			using func_t = decltype(&BGSProjectile::GetHasExplosionAltTrigger);
			static REL::Relocation<func_t> func{ Offsets::BGSProjectile::GetHasExplosionAltTrigger };
			return func(this);
		}

		bool GetHitScan()
		{
			using func_t = decltype(&BGSProjectile::GetHitScan);
			static REL::Relocation<func_t> func{ Offsets::BGSProjectile::GetHitScan };
			return func(this);
		}

		bool GetHasMuzzleFlash()
		{
			using func_t = decltype(&BGSProjectile::GetHasMuzzleFlash);
			static REL::Relocation<func_t> func{ Offsets::BGSProjectile::GetHasMuzzleFlash };
			return func(this);
		}

		bool GetSupersonic()
		{
			using func_t = decltype(&BGSProjectile::GetSupersonic);
			static REL::Relocation<func_t> func{ Offsets::BGSProjectile::GetSupersonic };
			return func(this);
		}

	public:
		// members
		BGSProjectileData Data;              // 60
		TESModel          MuzzleFlashModel;  // B4
		SOUND_LEVEL       eSoundLevel;       // CC
	};
	static_assert(sizeof(BGSProjectile) == 0xD0);
}
