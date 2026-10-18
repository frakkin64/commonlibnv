#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/B/BGSImpactDataSet_IMPACT_MATERIAL_TYPE.h"
#include "RE/C/CREATURE_DATA.h"
#include "RE/C/CREATURE_SOUND_TYPE.h"
#include "RE/S/SOUND_LEVEL.h"
#include "RE/T/TESActorBase.h"
#include "RE/T/TESAttackDamageForm.h"
#include "RE/T/TESModelList.h"

namespace RE
{
	class BGSBodyPartData;
	class BGSImpactDataSet;
	class BGSListForm;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class CreatureSounds;
	class NiAVObject;
	class TESBoundObject;
	class TESCombatStyle;
	class TESFile;
	class TESForm;
	class TESObjectREFR;
	class TESSound;

	class TESCreature :
		public TESActorBase,  // 00
		public TESAttackDamageForm,  // 10C
		public TESModelList  // 114
	{
	public:
		static constexpr auto RTTI{ RTTI::TESCreature };
		static constexpr auto VTABLE{ VTABLE::TESCreature };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kCREA_ID };

		// override (TESActorBase)
		virtual ~TESCreature() = default;                                                                                                                                // 04
		virtual void ClearData() override;                                                                                                                               // 05
		virtual bool ProcessBeforeSave() override;                                                                                                                       // 06
		virtual bool Load(TESFile* apFile) override;                                                                                                                     // 08
		virtual void Save() override;                                                                                                                                    // 0B
		virtual std::uint16_t GetSaveSize(std::uint32_t aiFlags) override;                                                                                               // 14
		virtual void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer) override;                                                                                             // 15
		virtual void SaveGame(std::uint32_t aiFlags) override;                                                                                                           // 16
		virtual void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                             // 17
		virtual void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags) override;                                                                             // 18
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;                                                                                               // 1C
		virtual void InitItem() override;                                                                                                                                // 22
		virtual void Copy(TESForm* apCopy) override;                                                                                                                     // 42
		virtual bool Compare(TESForm* apCopy) override;                                                                                                                  // 43
		virtual bool Activate(TESObjectREFR* apItemActivated, TESObjectREFR* apActionRef, bool abIdFlag, TESBoundObject* apObjectToGet, std::int32_t aiCount) override;  // 49
		virtual void UnClone3D(TESObjectREFR* apRequester) override;                                                                                                     // 54
		virtual NiAVObject* Clone3D_5E(TESObjectREFR* pRequester) override;                                                                                              // 5E
		virtual BGSBodyPartData* GetBodyPartData() override;                                                                                                             // 60
		virtual void SetBodyPartData(BGSBodyPartData* apData) override;                                                                                                  // 61
		virtual TESCombatStyle* GetCombatStyle() override;                                                                                                               // 62
		virtual void SetActorValue(ActorValue_Index aiWhich, std::int32_t aiValue) override;                                                                             // 65

		float GetBaseScale()
		{
			using func_t = decltype(&TESCreature::GetBaseScale);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::GetBaseScale };
			return func(this);
		}

		char GetCreatureType()
		{
			using func_t = decltype(&TESCreature::GetCreatureType);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::GetCreatureType };
			return func(this);
		}

		TESCreature* ctor()
		{
			using func_t = TESCreature*(__thiscall*)(TESCreature*);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::ctor };
			return func(this);
		}

		void SetImpactDataSet(BGSImpactDataSet* apSet)
		{
			using func_t = decltype(&TESCreature::SetImpactDataSet);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::SetImpactDataSet };
			func(this, apSet);
		}

		std::uint8_t GetCombatSkill()
		{
			using func_t = decltype(&TESCreature::GetCombatSkill);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::GetCombatSkill };
			return func(this);
		}

		TESCreature* GetSoundCreature()
		{
			using func_t = decltype(&TESCreature::GetSoundCreature);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::GetSoundCreature };
			return func(this);
		}

		void SetSoundCreature(TESCreature* apCreature)
		{
			using func_t = decltype(&TESCreature::SetSoundCreature);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::SetSoundCreature };
			func(this, apCreature);
		}

		CreatureSounds* GetCreatureSounds()
		{
			using func_t = decltype(&TESCreature::GetCreatureSounds);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::GetCreatureSounds };
			return func(this);
		}

		CreatureSounds* CreateCreatureSounds()
		{
			using func_t = decltype(&TESCreature::CreateCreatureSounds);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::CreateCreatureSounds };
			return func(this);
		}

		TESSound* PickCreatureSound(CREATURE_SOUND_TYPE aeType)
		{
			using func_t = decltype(&TESCreature::PickCreatureSound);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::PickCreatureSound };
			return func(this, aeType);
		}

		std::uint8_t GetHandReach()
		{
			using func_t = decltype(&TESCreature::GetHandReach);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::GetHandReach };
			return func(this);
		}

		BGSImpactDataSet* GetImpactDataSet()
		{
			using func_t = decltype(&TESCreature::GetImpactDataSet);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::GetImpactDataSet };
			return func(this);
		}

		void InitDefaultWorn(TESObjectREFR* apRef, bool abArmor, bool abWeapon, bool abAllowChanges)
		{
			using func_t = decltype(&TESCreature::InitDefaultWorn);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::InitDefaultWorn };
			func(this, apRef, abArmor, abWeapon, abAllowChanges);
		}

		void InitWorn(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESCreature::InitWorn);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::InitWorn };
			func(this, apRef);
		}

		bool CanWearItem(TESForm* apItem)
		{
			using func_t = decltype(&TESCreature::CanWearItem);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::CanWearItem };
			return func(this, apItem);
		}

		void CheckEmbeddedWeaponNodes(NiAVObject* ap3D)
		{
			using func_t = decltype(&TESCreature::CheckEmbeddedWeaponNodes);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::CheckEmbeddedWeaponNodes };
			func(this, ap3D);
		}

		std::int32_t GetSoundLevelValue()
		{
			using func_t = decltype(&TESCreature::GetSoundLevelValue);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::GetSoundLevelValue };
			return func(this);
		}

		bool IsHumanoidCreature()
		{
			using func_t = decltype(&TESCreature::IsHumanoidCreature);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::IsHumanoidCreature };
			return func(this);
		}

		float GetFootWeight()
		{
			using func_t = decltype(&TESCreature::GetFootWeight);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::GetFootWeight };
			return func(this);
		}

		SOUND_LEVEL GetSoundLevel()
		{
			using func_t = decltype(&TESCreature::GetSoundLevel);
			static REL::Relocation<func_t> func{ Offsets::TESCreature::GetSoundLevel };
			return func(this);
		}

	public:
		// members
		union
		{
			TESCreature* pSoundCreature;
			CreatureSounds* pCreatureSounds;
		} ___u3;  // 128
		CREATURE_DATA                         Data;                    // 12C
		std::uint8_t                          cHandReach;              // 130
		std::uint8_t                          pad131[0x3];             // 131
		float                                 fTurnSpeed;              // 134
		float                                 fFootWeight;             // 138
		float                                 fBaseScale;              // 13C
		TESCombatStyle*                       pCombatStyle;            // 140
		BGSBodyPartData*                      pBodyPartData;           // 144
		BGSImpactDataSet_IMPACT_MATERIAL_TYPE eBloodImpactMaterial;    // 148
		BGSImpactDataSet*                     pImpactDataSet;          // 14C
		bool                                  bEmbeddedWeaponChecked;  // 150
		std::uint8_t                          pad151[0x3];             // 151
		SOUND_LEVEL                           eSoundLevel;             // 154
		BGSListForm*                          pWeaponList;             // 158
		char                                  cCanUseHandToHand;       // 15C
		std::uint8_t                          pad15D[0x3];             // 15D
	};
	static_assert(sizeof(TESCreature) == 0x160);
}
