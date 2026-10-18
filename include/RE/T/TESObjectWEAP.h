#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ANIM_GROUP_ENUM.h"
#include "RE/A/ActorValue_Index.h"
#include "RE/B/BGSAmmoForm.h"
#include "RE/B/BGSBipedModelList.h"
#include "RE/B/BGSClipRoundsForm.h"
#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/B/BGSEquipType.h"
#include "RE/B/BGSMessageIcon.h"
#include "RE/B/BGSPickupPutdownSounds.h"
#include "RE/B/BGSPreloadable.h"
#include "RE/B/BGSRepairItemList.h"
#include "RE/B/BSStringT.h"
#include "RE/C/COMBAT_WEAPON_TYPE.h"
#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/M/MATERIAL_TYPE.h"
#include "RE/N/NiPoint3.h"
#include "RE/O/OBJ_WEAP.h"
#include "RE/O/OBJ_WEAP_CRITICAL.h"
#include "RE/O/OBJ_WEAP_VATS_SPECIAL.h"
#include "RE/S/SOUND_LEVEL.h"
#include "RE/T/TESAttackDamageForm.h"
#include "RE/T/TESBoundObject.h"
#include "RE/T/TESEnchantableForm.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESHealthForm.h"
#include "RE/T/TESIcon.h"
#include "RE/T/TESModel.h"
#include "RE/T/TESModelTextureSwap.h"
#include "RE/T/TESScriptableForm.h"
#include "RE/T/TESValueForm.h"
#include "RE/T/TESWeightForm.h"
#include "RE/W/WEAPON_MOD_EFFECT.h"
#include "RE/W/WEAPON_TYPE.h"

namespace RE
{
	class Actor;
	class ActorValueOwner;
	class BGSImpactData;
	class BGSImpactDataSet;
	class BGSLoadFormBuffer;
	class BGSProjectile;
	class BGSSaveFormBuffer;
	class NiAVObject;
	class QueuedFile;
	class TESAmmo;
	class TESEffectShader;
	class TESFile;
	class TESForm;
	class TESObjectIMOD;
	class TESObjectREFR;
	class TESObjectSTAT;
	class TESSound;

	class TESObjectWEAP :
		public TESBoundObject,  // 00
		public TESFullName,  // 30
		public TESModelTextureSwap,  // 3C
		public TESIcon,  // 5C
		public TESScriptableForm,  // 68
		public TESEnchantableForm,  // 74
		public TESValueForm,  // 84
		public TESWeightForm,  // 8C
		public TESHealthForm,  // 94
		public TESAttackDamageForm,  // 9C
		public BGSAmmoForm,  // A4
		public BGSClipRoundsForm,  // AC
		public BGSDestructibleObjectForm,  // B4
		public BGSRepairItemList,  // BC
		public BGSEquipType,  // C4
		public BGSPreloadable,  // CC
		public BGSMessageIcon,  // D0
		public BGSBipedModelList,  // E0
		public BGSPickupPutdownSounds  // E8
	{
	public:
		static constexpr auto RTTI{ RTTI::TESObjectWEAP };
		static constexpr auto VTABLE{ VTABLE::TESObjectWEAP };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kWEAP_ID };

		// override (TESBoundObject)
		virtual ~TESObjectWEAP() = default;                                                                                                                              // 04
		virtual void ClearData() override;                                                                                                                               // 05
		virtual bool ProcessBeforeSave() override;                                                                                                                       // 06
		virtual bool Load(TESFile* apFile) override;                                                                                                                     // 08
		virtual void Save() override;                                                                                                                                    // 0B
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                                                                                               // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                             // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                                                                                           // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                             // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;                                                                             // 18
		virtual void InitItem() override;                                                                                                                                // 22
		virtual void Copy(TESForm* apCopy) override;                                                                                                                     // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                                                                  // 43
		virtual bool Activate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjectToGet, std::int32_t aiCount) override;  // 49

		WEAPON_TYPE GetWeaponType()
		{
			using func_t = decltype(&TESObjectWEAP::GetWeaponType);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetWeaponType };
			return func(this);
		}

		bool IsEmbeddedWeapon()
		{
			using func_t = decltype(&TESObjectWEAP::IsEmbeddedWeapon);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::IsEmbeddedWeapon };
			return func(this);
		}

		bool GetIsPlayable()
		{
			using func_t = decltype(&TESObjectWEAP::GetIsPlayable);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetIsPlayable };
			return func(this);
		}

		TESObjectSTAT* Get1stPersonModObject(std::uint8_t iModSlots)
		{
			using func_t = decltype(&TESObjectWEAP::Get1stPersonModObject);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::Get1stPersonModObject };
			return func(this, iModSlots);
		}

		bool GetHideBackpack()
		{
			using func_t = decltype(&TESObjectWEAP::GetHideBackpack);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetHideBackpack };
			return func(this);
		}

		bool HasScope()
		{
			using func_t = decltype(&TESObjectWEAP::HasScope);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::HasScope };
			return func(this);
		}

		bool HasModScope()
		{
			using func_t = decltype(&TESObjectWEAP::HasModScope);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::HasModScope };
			return func(this);
		}

		float GetModEffectValue(WEAPON_MOD_EFFECT eEffect, std::uint8_t cValue)
		{
			using func_t = decltype(&TESObjectWEAP::GetModEffectValue);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetModEffectValue };
			return func(this, eEffect, cValue);
		}

		TESObjectIMOD* GetModItem(std::uint32_t iModSlot)
		{
			using func_t = decltype(&TESObjectWEAP::GetModItem);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetModItem };
			return func(this, iModSlot);
		}

		WEAPON_MOD_EFFECT GetModEffect(std::uint32_t iModSlot)
		{
			using func_t = decltype(&TESObjectWEAP::GetModEffect);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetModEffect };
			return func(this, iModSlot);
		}

		float GetFormWeight(bool bModValue)
		{
			using func_t = decltype(&TESObjectWEAP::GetFormWeight);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetFormWeight };
			return func(this, bModValue);
		}

		bool IsThrownWeapon()
		{
			using func_t = decltype(&TESObjectWEAP::IsThrownWeapon);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::IsThrownWeapon };
			return func(this);
		}

		bool IsRangedWeapon()
		{
			using func_t = decltype(&TESObjectWEAP::IsRangedWeapon);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::IsRangedWeapon };
			return func(this);
		}

		bool IsGunWeapon()
		{
			using func_t = decltype(&TESObjectWEAP::IsGunWeapon);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::IsGunWeapon };
			return func(this);
		}

		float GetSpeed()
		{
			using func_t = decltype(&TESObjectWEAP::GetSpeed);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetSpeed };
			return func(this);
		}

		std::int32_t GetFormClipRounds(bool bModValue)
		{
			using func_t = decltype(&TESObjectWEAP::GetFormClipRounds);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetFormClipRounds };
			return func(this, bModValue);
		}

		TESObjectWEAP* ctor()
		{
			using func_t = TESObjectWEAP*(__thiscall*)(TESObjectWEAP*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::ctor };
			return func(this);
		}

		ANIM_GROUP_ENUM GetReloadAnim(bool bModValue)
		{
			using func_t = decltype(&TESObjectWEAP::GetReloadAnim);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetReloadAnim };
			return func(this, bModValue);
		}

		ANIM_GROUP_ENUM GetAttackAnim()
		{
			using func_t = decltype(&TESObjectWEAP::GetAttackAnim);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetAttackAnim };
			return func(this);
		}

		TESSound* GetAttackSound(bool bModSound)
		{
			using func_t = decltype(&TESObjectWEAP::GetAttackSound);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetAttackSound };
			return func(this, bModSound);
		}

		TESSound* GetAttackSound2(bool bModSound)
		{
			using func_t = decltype(&TESObjectWEAP::GetAttackSound2);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetAttackSound2 };
			return func(this, bModSound);
		}

		TESSound* GetAttackSound2D(bool bModSound)
		{
			using func_t = decltype(&TESObjectWEAP::GetAttackSound2D);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetAttackSound2D };
			return func(this, bModSound);
		}

		TESSound* GetAttackFailSound()
		{
			using func_t = decltype(&TESObjectWEAP::GetAttackFailSound);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetAttackFailSound };
			return func(this);
		}

		TESSound* GetMeleeBlockSound()
		{
			using func_t = decltype(&TESObjectWEAP::GetMeleeBlockSound);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetMeleeBlockSound };
			return func(this);
		}

		TESSound* GetIdleSound()
		{
			using func_t = decltype(&TESObjectWEAP::GetIdleSound);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetIdleSound };
			return func(this);
		}

		TESSound* GetEquipSound()
		{
			using func_t = decltype(&TESObjectWEAP::GetEquipSound);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetEquipSound };
			return func(this);
		}

		TESSound* GetUnEquipSound()
		{
			using func_t = decltype(&TESObjectWEAP::GetUnEquipSound);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetUnEquipSound };
			return func(this);
		}

		BGSImpactData* GetImpactData(MATERIAL_TYPE aehkMatType)
		{
			using func_t = decltype(&TESObjectWEAP::GetImpactData);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetImpactData };
			return func(this, aehkMatType);
		}

		char const* GetEmbeddedWeaponNode()
		{
			using func_t = decltype(&TESObjectWEAP::GetEmbeddedWeaponNode);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetEmbeddedWeaponNode };
			return func(this);
		}

		COMBAT_WEAPON_TYPE GetCombatWeaponType()
		{
			using func_t = decltype(&TESObjectWEAP::GetCombatWeaponType);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetCombatWeaponType };
			return func(this);
		}

		void Fire(TESObjectREFR* apSource)
		{
			using func_t = decltype(&TESObjectWEAP::Fire);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::Fire };
			func(this, apSource);
		}

		bool IsAutomaticWeapon()
		{
			using func_t = decltype(&TESObjectWEAP::IsAutomaticWeapon);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::IsAutomaticWeapon };
			return func(this);
		}

		std::uint8_t GetAmmoPerShot()
		{
			using func_t = decltype(&TESObjectWEAP::GetAmmoPerShot);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetAmmoPerShot };
			return func(this);
		}

		float GetMinSpreadDegrees(bool bModValue)
		{
			using func_t = decltype(&TESObjectWEAP::GetMinSpreadDegrees);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetMinSpreadDegrees };
			return func(this, bModValue);
		}

		float GetSpreadDegrees(bool bModValue)
		{
			using func_t = decltype(&TESObjectWEAP::GetSpreadDegrees);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetSpreadDegrees };
			return func(this, bModValue);
		}

		void ExpelShellCasing(TESObjectREFR* apSource)
		{
			using func_t = decltype(&TESObjectWEAP::ExpelShellCasing);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::ExpelShellCasing };
			func(this, apSource);
		}

		void QueueFiles(IO_TASK_PRIORITY aePriority, QueuedFile* apParent, bool bLoadScope)
		{
			using func_t = decltype(&TESObjectWEAP::QueueFiles);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::QueueFiles };
			func(this, aePriority, apParent, bLoadScope);
		}

		std::int32_t GetSoundLevelValue(bool bModValue)
		{
			using func_t = decltype(&TESObjectWEAP::GetSoundLevelValue);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetSoundLevelValue };
			return func(this, bModValue);
		}

		char const* GetFireNodeName()
		{
			using func_t = decltype(&TESObjectWEAP::GetFireNodeName);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetFireNodeName };
			return func(this);
		}

		NiAVObject* GetFireNode(NiAVObject* apObject)
		{
			using func_t = decltype(&TESObjectWEAP::GetFireNode);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetFireNode };
			return func(this, apObject);
		}

		NiPoint3 CalculateReleasePoint(TESObjectREFR* result)
		{
			using func_t = decltype(&TESObjectWEAP::CalculateReleasePoint);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::CalculateReleasePoint };
			return func(this, result);
		}

		TESAmmo* GetCurrentAmmo(Actor* apWeaponHolder)
		{
			using func_t = decltype(&TESObjectWEAP::GetCurrentAmmo);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetCurrentAmmo };
			return func(this, apWeaponHolder);
		}

		BGSProjectile* GetProjectile(Actor* apWeaponHolder)
		{
			using func_t = BGSProjectile* (TESObjectWEAP::*)(Actor*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetProjectile };
			return func(this, apWeaponHolder);
		}

		BGSProjectile* GetProjectile(ActorValueOwner* apWeaponHolder)
		{
			using func_t = BGSProjectile* (TESObjectWEAP::*)(ActorValueOwner*);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetProjectile_1 };
			return func(this, apWeaponHolder);
		}

		std::uint8_t GetNumProjectiles(bool bUseModValue, bool bIgnoreAmmo, Actor* apWeaponHolder)
		{
			using func_t = decltype(&TESObjectWEAP::GetNumProjectiles);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetNumProjectiles };
			return func(this, bUseModValue, bIgnoreAmmo, apWeaponHolder);
		}

		float GetReach()
		{
			using func_t = decltype(&TESObjectWEAP::GetReach);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetReach };
			return func(this);
		}

		bool IsMeleeWeapon()
		{
			using func_t = decltype(&TESObjectWEAP::IsMeleeWeapon);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::IsMeleeWeapon };
			return func(this);
		}

		float GetAttackSpeed(bool bModValue)
		{
			using func_t = decltype(&TESObjectWEAP::GetAttackSpeed);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetAttackSpeed };
			return func(this, bModValue);
		}

		bool IsTwoHandedWeapon()
		{
			using func_t = decltype(&TESObjectWEAP::IsTwoHandedWeapon);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::IsTwoHandedWeapon };
			return func(this);
		}

		std::int32_t GetStrengthRequirement()
		{
			using func_t = decltype(&TESObjectWEAP::GetStrengthRequirement);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetStrengthRequirement };
			return func(this);
		}

		TESSound* GetAttackLoop()
		{
			using func_t = decltype(&TESObjectWEAP::GetAttackLoop);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetAttackLoop };
			return func(this);
		}

		ActorValue_Index GetWeaponSkill()
		{
			using func_t = decltype(&TESObjectWEAP::GetWeaponSkill);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetWeaponSkill };
			return func(this);
		}

		float GetAimArc()
		{
			using func_t = decltype(&TESObjectWEAP::GetAimArc);
			static REL::Relocation<func_t> func{ Offsets::TESObjectWEAP::GetAimArc };
			return func(this);
		}

	public:
		// members
		OBJ_WEAP              data;                    // F4
		OBJ_WEAP_CRITICAL     criticalData;            // 1C0
		TESModel              ShellCasingModel;        // 1D0
		TESModel              ScopeModel;              // 1E8
		TESModel              WorldModel;              // 200
		TESEffectShader*      pScopeEffect;            // 218
		TESSound*             pAttackSound;            // 21C
		TESSound*             pAttackSound2;           // 220
		TESSound*             pAttackSound2D;          // 224
		TESSound*             pAttackLoop;             // 228
		TESSound*             pAttackFailSound;        // 22C
		TESSound*             pMeleeBlockSound;        // 230
		TESSound*             pIdleSound;              // 234
		TESSound*             pEquipSound;             // 238
		TESSound*             pUnEquipSound;           // 23C
		TESSound*             pModSilencedSound;       // 240
		TESSound*             pModSilencedSound2;      // 244
		TESSound*             pModSilencedSound2D;     // 248
		BGSImpactDataSet*     pImpactDataSet;          // 24C
		TESObjectSTAT*        p1stPersonObject;        // 250
		TESObjectSTAT*        p1stPersonMod1Object;    // 254
		TESObjectSTAT*        p1stPersonMod2Object;    // 258
		TESObjectSTAT*        p1stPersonMod3Object;    // 25C
		TESObjectSTAT*        p1stPersonMod12Object;   // 260
		TESObjectSTAT*        p1stPersonMod23Object;   // 264
		TESObjectSTAT*        p1stPersonMod13Object;   // 268
		TESObjectSTAT*        p1stPersonMod123Object;  // 26C
		TESModelTextureSwap   WorldModelMod1;          // 270
		TESModelTextureSwap   WorldModelMod2;          // 290
		TESModelTextureSwap   WorldModelMod3;          // 2B0
		TESModelTextureSwap   WorldModelMod12;         // 2D0
		TESModelTextureSwap   WorldModelMod13;         // 2F0
		TESModelTextureSwap   WorldModelMod23;         // 310
		TESModelTextureSwap   WorldModelMod123;        // 330
		TESObjectIMOD*        pModObjectOne;           // 350
		TESObjectIMOD*        pModObjectTwo;           // 354
		TESObjectIMOD*        pModObjectThree;         // 358
		BSStringT<char>       EmbeddedWeaponNode;      // 35C
		SOUND_LEVEL           eSoundLevel;             // 364
		BSStringT<char>       VATSAttackName;          // 368
		OBJ_WEAP_VATS_SPECIAL specialVATSData;         // 370
		bool                  bIsLoopingReload;        // 384
		std::uint8_t          pad385[0x3];             // 385
	};
	static_assert(sizeof(TESObjectWEAP) == 0x388);
}
