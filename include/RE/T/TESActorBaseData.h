#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ACTOR_BASE_DATA.h"
#include "RE/B/BGSImpactDataSet_IMPACT_MATERIAL_TYPE.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BaseFormComponent.h"
#include "RE/P/PC_FACTION_FLAG.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class BGSVoiceType;
	class FACTION_RANK;
	class TESActorBase;
	class TESFaction;
	class TESForm;
	class TESLevItem;
	class TESObjectREFR;

	class TESActorBaseData :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESActorBaseData };
		static constexpr auto VTABLE{ VTABLE::TESActorBaseData };

		enum class ALIGNMENT : std::int32_t
		{
			kALIGNMENT_GOOD = 0x0,
			kALIGNMENT_NEUTRAL = 0x1,
			kALIGNMENT_EVIL = 0x2,
			kALIGNMENT_VERY_GOOD = 0x3,
			kALIGNMENT_VERY_EVIL = 0x4,
			kALIGNMENT_COUNT = 0x5,
		};

		enum class TEMPLATE_USE_FLAG : std::int32_t
		{
			kTU_TRAITS = 0x0,
			kTU_STATS = 0x1,
			kTU_FACTIONS = 0x2,
			kTU_SPELLS = 0x3,
			kTU_AIDATA = 0x4,
			kTU_AIPACKAGES = 0x5,
			kTU_MODEL = 0x6,
			kTU_BASEDATA = 0x7,
			kTU_INVENTORY = 0x8,
			kTU_SCRIPT = 0x9,
			kTU_COUNT = 0xA,
			kTU_COPIED = 0xF,
		};

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		// add
		virtual void CopyFromTemplateForm(TESActorBase* apForceTemplate);                  // 04
		virtual bool GetNoVATSMelee();                                                     // 05
		virtual bool GetAllowPCDialogue();                                                 // 06
		virtual bool GetAllowPickPocket();                                                 // 07
		virtual bool GetIsGhost();                                                         // 08
		virtual bool GetInvulnerable();                                                    // 09
		virtual bool GetCantOpenDoors();                                                   // 0A
		virtual bool GetCanBeAllRaces();                                                   // 0B
		virtual bool GetAutoCalcServiceFlags();                                            // 0C
		virtual bool GetNoPersuasion();                                                    // 0D
		virtual bool GetNoLeftArm();                                                       // 0E
		virtual bool GetNoRightArm();                                                      // 0F
		virtual bool GetNoHead();                                                          // 10
		virtual bool GetNoShadow();                                                        // 11
		virtual bool GetNoBloodSpray();                                                    // 12
		virtual void SetNoBloodSpray(bool abVal);                                          // 13
		virtual bool GetNoBloodDecal();                                                    // 14
		virtual void SetNoBloodDecal(bool abVal);                                          // 15
		virtual BGSImpactDataSet_IMPACT_MATERIAL_TYPE GetBloodImpactMaterial();            // 16
		virtual void SetBloodImpactMaterial(BGSImpactDataSet_IMPACT_MATERIAL_TYPE aeMat);  // 17
		virtual std::uint16_t GetFatigue();                                                // 18
		virtual float GetKarma();                                                          // 19
		virtual BGSVoiceType* GetVoiceType();                                              // 1A

		bool GetMatchesPCLevel()
		{
			using func_t = decltype(&TESActorBaseData::GetMatchesPCLevel);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetMatchesPCLevel };
			return func(this);
		}

		bool GetFlagBit(std::int32_t aiFlag) const
		{
			using func_t = decltype(&TESActorBaseData::GetFlagBit);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetFlagBit };
			return func(this, aiFlag);
		}

		TESActorBaseData* ctor()
		{
			using func_t = TESActorBaseData*(__thiscall*)(TESActorBaseData*);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::ctor };
			return func(this);
		}

		void Save()
		{
			using func_t = decltype(&TESActorBaseData::Save);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::Save };
			func(this);
		}

		bool QCopiedTemplate()
		{
			using func_t = decltype(&TESActorBaseData::QCopiedTemplate);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::QCopiedTemplate };
			return func(this);
		}

		bool GetTemplateUseFlag(TESActorBaseData::TEMPLATE_USE_FLAG aeFlag)
		{
			using func_t = decltype(&TESActorBaseData::GetTemplateUseFlag);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetTemplateUseFlag };
			return func(this, aeFlag);
		}

		bool GetUsesLeveledTemplate() const
		{
			using func_t = decltype(&TESActorBaseData::GetUsesLeveledTemplate);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetUsesLeveledTemplate };
			return func(this);
		}

		bool IsTemplateLeveled() const
		{
			using func_t = decltype(&TESActorBaseData::IsTemplateLeveled);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::IsTemplateLeveled };
			return func(this);
		}

		void CalcTemplateForRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&TESActorBaseData::CalcTemplateForRef);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::CalcTemplateForRef };
			func(this, apRef);
		}

		static TESActorBase* CreateTemplateActorBase(TESActorBase* apOriginalBase, TESActorBase* apTemplateBase)
		{
			using func_t = decltype(&TESActorBaseData::CreateTemplateActorBase);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::CreateTemplateActorBase };
			return func(apOriginalBase, apTemplateBase);
		}

		std::uint16_t GetLevelExact()
		{
			using func_t = decltype(&TESActorBaseData::GetLevelExact);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetLevelExact };
			return func(this);
		}

		std::uint16_t GetCalcLevelMin()
		{
			using func_t = decltype(&TESActorBaseData::GetCalcLevelMin);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetCalcLevelMin };
			return func(this);
		}

		std::uint16_t GetCalcLevelMax()
		{
			using func_t = decltype(&TESActorBaseData::GetCalcLevelMax);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetCalcLevelMax };
			return func(this);
		}

		std::uint16_t GetBaseDisposition()
		{
			using func_t = decltype(&TESActorBaseData::GetBaseDisposition);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetBaseDisposition };
			return func(this);
		}

		std::uint16_t GetBarterGold()
		{
			using func_t = decltype(&TESActorBaseData::GetBarterGold);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetBarterGold };
			return func(this);
		}

		std::int32_t GetFactionRank(TESFaction* apFaction, bool abPC)
		{
			using func_t = decltype(&TESActorBaseData::GetFactionRank);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetFactionRank };
			return func(this, apFaction, abPC);
		}

		bool IsInEvilFactionsOnly()
		{
			using func_t = decltype(&TESActorBaseData::IsInEvilFactionsOnly);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::IsInEvilFactionsOnly };
			return func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&TESActorBaseData::InitItem);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::InitItem };
			func(this, apOwner);
		}

		void SetFlags(std::int32_t aiNewFlags)
		{
			using func_t = decltype(&TESActorBaseData::SetFlags);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::SetFlags };
			func(this, aiNewFlags);
		}

		void SetFlagBit(std::int32_t aiFlag, bool abVal, bool abAddChange)
		{
			using func_t = decltype(&TESActorBaseData::SetFlagBit);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::SetFlagBit };
			func(this, aiFlag, abVal, abAddChange);
		}

		void SetCalcLevelMin(std::uint16_t asVal)
		{
			using func_t = decltype(&TESActorBaseData::SetCalcLevelMin);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::SetCalcLevelMin };
			func(this, asVal);
		}

		void SetCalcLevelMax(std::uint16_t asVal)
		{
			using func_t = decltype(&TESActorBaseData::SetCalcLevelMax);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::SetCalcLevelMax };
			func(this, asVal);
		}

		void SetBaseDisposition(std::uint16_t asVal)
		{
			using func_t = decltype(&TESActorBaseData::SetBaseDisposition);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::SetBaseDisposition };
			func(this, asVal);
		}

		std::uint16_t GetLevel()
		{
			using func_t = decltype(&TESActorBaseData::GetLevel);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetLevel };
			return func(this);
		}

		void SetLevel(std::uint16_t asValue)
		{
			using func_t = decltype(&TESActorBaseData::SetLevel);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::SetLevel };
			func(this, asValue);
		}

		void SetFatigue(std::uint16_t ausFatigue)
		{
			using func_t = decltype(&TESActorBaseData::SetFatigue);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::SetFatigue };
			func(this, ausFatigue);
		}

		static TESActorBaseData::ALIGNMENT GetAlignmentForKarma(float afKarma)
		{
			using func_t = decltype(&TESActorBaseData::GetAlignmentForKarma);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetAlignmentForKarma };
			return func(afKarma);
		}

		static char const* GetKarmicTitle(Actor* apActor)
		{
			using func_t = decltype(&TESActorBaseData::GetKarmicTitle);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetKarmicTitle };
			return func(apActor);
		}

		void SetKarma(float afKarma)
		{
			using func_t = decltype(&TESActorBaseData::SetKarma);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::SetKarma };
			func(this, afKarma);
		}

		void SetBarterGold(std::uint16_t ausNewgold)
		{
			using func_t = decltype(&TESActorBaseData::SetBarterGold);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::SetBarterGold };
			func(this, ausNewgold);
		}

		void SetSpeedMult(std::uint16_t asSpeedMult)
		{
			using func_t = decltype(&TESActorBaseData::SetSpeedMult);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::SetSpeedMult };
			func(this, asSpeedMult);
		}

		void AddFormChange(std::int32_t aiChangeFlags)
		{
			using func_t = decltype(&TESActorBaseData::AddFormChange);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::AddFormChange };
			func(this, aiChangeFlags);
		}

		std::uint16_t GetSaveSize(std::uint32_t aiFlags)
		{
			using func_t = decltype(&TESActorBaseData::GetSaveSize);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetSaveSize };
			return func(this, aiFlags);
		}

		void SaveGame(std::uint32_t aiFlags)
		{
			using func_t = void (TESActorBaseData::*)(std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::SaveGame };
			func(this, aiFlags);
		}

		void LoadGame(std::uint32_t aiFlags, std::uint32_t aiCurrentFlags)
		{
			using func_t = void (TESActorBaseData::*)(std::uint32_t, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::LoadGame };
			func(this, aiFlags, aiCurrentFlags);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = void (TESActorBaseData::*)(BGSSaveFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::SaveGame_1 };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = void (TESActorBaseData::*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::LoadGame_1 };
			func(this, apLoadGameBuffer);
		}

		void SetPCFactionFlags(PC_FACTION_FLAG aeflag)
		{
			using func_t = decltype(&TESActorBaseData::SetPCFactionFlags);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::SetPCFactionFlags };
			func(this, aeflag);
		}

		void SetDeathItem(TESLevItem* apItem)
		{
			using func_t = decltype(&TESActorBaseData::SetDeathItem);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::SetDeathItem };
			func(this, apItem);
		}

		void SetVoiceType(BGSVoiceType* apVoiceType)
		{
			using func_t = decltype(&TESActorBaseData::SetVoiceType);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::SetVoiceType };
			func(this, apVoiceType);
		}

		bool GetRunsInLow()
		{
			using func_t = decltype(&TESActorBaseData::GetRunsInLow);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetRunsInLow };
			return func(this);
		}

		bool GetRespawn()
		{
			using func_t = decltype(&TESActorBaseData::GetRespawn);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetRespawn };
			return func(this);
		}

		void SetMatchesPCLevel(bool abVal)
		{
			using func_t = decltype(&TESActorBaseData::SetMatchesPCLevel);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::SetMatchesPCLevel };
			func(this, abVal);
		}

		bool GetNoRumors()
		{
			using func_t = decltype(&TESActorBaseData::GetNoRumors);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetNoRumors };
			return func(this);
		}

		void SetRunsInLow(bool abVal, bool abAddChange)
		{
			using func_t = decltype(&TESActorBaseData::SetRunsInLow);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::SetRunsInLow };
			func(this, abVal, abAddChange);
		}

		std::uint16_t GetSpeedMult()
		{
			using func_t = decltype(&TESActorBaseData::GetSpeedMult);
			static REL::Relocation<func_t> func{ Offsets::TESActorBaseData::GetSpeedMult };
			return func(this);
		}

	public:
		// members
		ACTOR_BASE_DATA             actorData;      // 04
		TESLevItem*                 pDeathItem;     // 1C
		BGSVoiceType*               pVoiceType;     // 20
		TESForm*                    pTemplateForm;  // 24
		std::int32_t                iChangeFlags;   // 28
		BSSimpleList<FACTION_RANK*> listFactions;   // 2C
	};
}
