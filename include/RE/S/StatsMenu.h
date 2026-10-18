#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/L/ListBox.h"
#include "RE/M/Menu.h"
#include "RE/M/MiscStatManager_MiscStatID.h"
#include "RE/S/StatsMenu_BodyPartController.h"
#include "RE/S/StatsMenu_NamedEffectsList.h"
#include "RE/S/StatsMenu_StatusDataList.h"
#include "RE/S/StatsMenu_StatusEffect.h"
#include "RE/S/StatsMenu_StatusEffectList.h"

namespace RE
{
	class AlchemyItem;
	class EffectSetting;
	class ItemChange;
	class PerkRankData;
	class TESReputation;
	class Tile;

	class StatsMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::StatsMenu };
		static constexpr auto VTABLE{ VTABLE::StatsMenu };

		using BodyPartController = StatsMenu_BodyPartController;
		using NamedEffectsList = StatsMenu_NamedEffectsList;
		using StatusDataList = StatsMenu_StatusDataList;
		using StatusEffect = StatsMenu_StatusEffect;
		using StatusEffectList = StatsMenu_StatusEffectList;

		class HealingOption;

		enum class HealingOptionID : std::int32_t
		{
			kSM_HO_STIMPAK = 0x0,
			kSM_HO_RADX = 0x1,
			kSM_HO_RADAWAY = 0x2,
			kSM_HO_DRBAG = 0x3,
			kSM_HO_COUNT = 0x4,
		};

		enum class Page : std::int32_t
		{
			kSM_STATUS = 0x0,
			kSM_FIRST_PAGE = 0x0,
			kSM_SPECIAL = 0x1,
			kSM_SKILLS = 0x2,
			kSM_PERKS = 0x3,
			kSM_GENERAL = 0x4,
			kSM_LAST_PAGE = 0x4,
			kSM_PAGE_COUNT = 0x5,
		};

		enum class StatusPage : std::int32_t
		{
			kSM_STATUS_CONDITION = 0x0,
			kSM_FIRST_STATUS_PAGE = 0x0,
			kSM_STATUS_RADS = 0x1,
			kSM_STATUS_EFFECTS = 0x2,
			kSM_LAST_STATUS_PAGE = 0x2,
			kSM_STATUS_H20 = 0x3,
			kSM_STATUS_FOD = 0x4,
			kSM_STATUS_SLP = 0x5,
			kSM_LAST_STATUS_PAGE_HARDCORE = 0x5,
			kSM_STATUS_PAGE_COUNT = 0x6,
		};

		enum class TileIndex : std::int32_t
		{
			kEStatusButton = 0x0,
			kESpecialButton = 0x1,
			kESkillsButton = 0x2,
			kEPerksButton = 0x3,
			kEGeneralButton = 0x4,
			kEStatusRect = 0x5,
			kESpecialRect = 0x6,
			kESkillsRect = 0x7,
			kEGeneralRect = 0x8,
			kEHealingMode = 0x9,
			kEStimpakButton = 0xA,
			kERadAwayButton = 0xB,
			kEHeadImage = 0xC,
			kEHeadPct = 0xD,
			kETorsoImage = 0xE,
			kETorsoPct = 0xF,
			kELeftArmImage = 0x10,
			kELeftArmPct = 0x11,
			kERightArmImage = 0x12,
			kERightArmPct = 0x13,
			kELeftLegImage = 0x14,
			kELeftLegPct = 0x15,
			kERightLegImage = 0x16,
			kERightLegPct = 0x17,
			kEFaceImage = 0x18,
			kEItemIcon = 0x19,
			kEItemDesc = 0x1A,
			kEPlayerName = 0x1B,
			kEConditionButton = 0x1C,
			kERadsButton = 0x1D,
			kEEffectsButton = 0x1E,
			kERadXButton = 0x1F,
			kERadEffects = 0x20,
			kEStatusEffects = 0x21,
			kEPerksRect = 0x22,
			kEKarmaAlignment = 0x23,
			kEKarmaImage = 0x24,
			kEPlayerTitle = 0x25,
			kERadResistLevel = 0x26,
			kETitle = 0x27,
			kELevelInfo = 0x28,
			kEHPInfo = 0x29,
			kEAPInfo = 0x2A,
			kEXPInfo = 0x2B,
			kERadResistLabel = 0x2C,
			kENoEffects = 0x2D,
			kEReputationRect = 0x2E,
			kEReputationIcon = 0x2F,
			kEReputationTitle = 0x30,
			kEGenRepToggleButton = 0x31,
			kEGenRepRect = 0x32,
			kEReputationName = 0x33,
			kESkillBadgeImage = 0x34,
			kEH20Button = 0x35,
			kEH20Effects = 0x36,
			kEFODButton = 0x37,
			kEFODEffects = 0x38,
			kESLPButton = 0x39,
			kESLPEffects = 0x3A,
			kEDrBagButton = 0x3B,
			kNUM_TILES = 0x3C,
		};

		class HealingOption
		{
		public:
			// members
			AlchemyItem* pAlchemyItem;               // 00
			Tile*        pTile;                      // 04
			ItemChange*  pInventoryItem;             // 08
			void*        pfTargetConditionCallback;  // 0C
		};
		static_assert(sizeof(HealingOption) == 0x10);

		// override (Menu)
		virtual ~StatsMenu() = default;                                                // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;         // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;              // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;              // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;              // 05
		virtual void DoIdle() override;                                                // 0B
		virtual std::int32_t GetClass() override;                                      // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;         // 0E
		virtual bool DoGamepadUpEvent(std::int32_t aiButton, float afValue) override;  // 0F
		virtual void DoControllerSwitch(bool abHas360Controller) override;             // 11

		static void ResetHealingMode()
		{
			using func_t = decltype(&StatsMenu::ResetHealingMode);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::ResetHealingMode };
			func();
		}

		static Tile* Create()
		{
			using func_t = decltype(&StatsMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::Create };
			return func();
		}

		static bool FadeControlCallback(Tile* apTile, std::uint32_t aiOn)
		{
			using func_t = decltype(&StatsMenu::FadeControlCallback);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::FadeControlCallback };
			return func(apTile, aiOn);
		}

		void SetIconAndDescription(ActorValue_Index aeIndex)
		{
			using func_t = void (StatsMenu::*)(ActorValue_Index);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::SetIconAndDescription };
			func(this, aeIndex);
		}

		void SetIconAndDescription(PerkRankData* apPerkRankData)
		{
			using func_t = void (StatsMenu::*)(PerkRankData*);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::SetIconAndDescription_1 };
			func(this, apPerkRankData);
		}

		void SetReputation(TESReputation* pRep)
		{
			using func_t = decltype(&StatsMenu::SetReputation);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::SetReputation };
			func(this, pRep);
		}

		StatsMenu::Page GetCurrentPage()
		{
			using func_t = decltype(&StatsMenu::GetCurrentPage);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::GetCurrentPage };
			return func(this);
		}

		StatsMenu::StatusPage GetStatusPage()
		{
			using func_t = decltype(&StatsMenu::GetStatusPage);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::GetStatusPage };
			return func(this);
		}

		void UpdateAll()
		{
			using func_t = decltype(&StatsMenu::UpdateAll);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::UpdateAll };
			func(this);
		}

		void UpdateAllActorValues()
		{
			using func_t = decltype(&StatsMenu::UpdateAllActorValues);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::UpdateAllActorValues };
			func(this);
		}

		void UpdateActorValue(ActorValue_Index aeWhich)
		{
			using func_t = decltype(&StatsMenu::UpdateActorValue);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::UpdateActorValue };
			func(this, aeWhich);
		}

		static void UpdatePerks()
		{
			using func_t = decltype(&StatsMenu::UpdatePerks);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::UpdatePerks };
			func();
		}

		void UpdateReputations()
		{
			using func_t = decltype(&StatsMenu::UpdateReputations);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::UpdateReputations };
			func(this);
		}

		void UpdateRadLevel()
		{
			using func_t = decltype(&StatsMenu::UpdateRadLevel);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::UpdateRadLevel };
			func(this);
		}

		void UpdateH20Level()
		{
			using func_t = decltype(&StatsMenu::UpdateH20Level);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::UpdateH20Level };
			func(this);
		}

		void UpdateFODLevel()
		{
			using func_t = decltype(&StatsMenu::UpdateFODLevel);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::UpdateFODLevel };
			func(this);
		}

		void UpdateSLPLevel()
		{
			using func_t = decltype(&StatsMenu::UpdateSLPLevel);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::UpdateSLPLevel };
			func(this);
		}

		void UpdateActiveEffects()
		{
			using func_t = decltype(&StatsMenu::UpdateActiveEffects);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::UpdateActiveEffects };
			func(this);
		}

		void UpdateHealingOptions(StatsMenu::HealingOptionID aeID)
		{
			using func_t = decltype(&StatsMenu::UpdateHealingOptions);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::UpdateHealingOptions };
			func(this, aeID);
		}

		static void UpdatePlayerName()
		{
			using func_t = decltype(&StatsMenu::UpdatePlayerName);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::UpdatePlayerName };
			func();
		}

		static void UpdatePlayerTitle()
		{
			using func_t = decltype(&StatsMenu::UpdatePlayerTitle);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::UpdatePlayerTitle };
			func();
		}

		void UpdateHealingMode()
		{
			using func_t = decltype(&StatsMenu::UpdateHealingMode);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::UpdateHealingMode };
			func(this);
		}

		void TargetMostDamagedBodyPart()
		{
			using func_t = decltype(&StatsMenu::TargetMostDamagedBodyPart);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::TargetMostDamagedBodyPart };
			func(this);
		}

		static void SetKnobPosition(bool abPlaySounds)
		{
			using func_t = decltype(&StatsMenu::SetKnobPosition);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::SetKnobPosition };
			func(abPlaySounds);
		}

		void MoveKnob(Tile* apTarget, std::uint32_t& aiLastIndex)
		{
			using func_t = decltype(&StatsMenu::MoveKnob);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::MoveKnob };
			func(this, apTarget, aiLastIndex);
		}

		void SetCurrentPage(StatsMenu::Page aePage)
		{
			using func_t = decltype(&StatsMenu::SetCurrentPage);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::SetCurrentPage };
			func(this, aePage);
		}

		bool SetStatusPage(std::int32_t aiPage)
		{
			using func_t = decltype(&StatsMenu::SetStatusPage);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::SetStatusPage };
			return func(this, aiPage);
		}

		void ToggleHealingMode()
		{
			using func_t = decltype(&StatsMenu::ToggleHealingMode);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::ToggleHealingMode };
			func(this);
		}

		void ToggleGenRepMode()
		{
			using func_t = decltype(&StatsMenu::ToggleGenRepMode);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::ToggleGenRepMode };
			func(this);
		}

		static std::int32_t NamedEffectSortFn(EffectSetting* apItem1, EffectSetting* apItem2)
		{
			using func_t = decltype(&StatsMenu::NamedEffectSortFn);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::NamedEffectSortFn };
			return func(apItem1, apItem2);
		}

		static bool StimpakTargetConditionCallback(StatsMenu::HealingOption& aHO)
		{
			using func_t = decltype(&StatsMenu::StimpakTargetConditionCallback);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::StimpakTargetConditionCallback };
			return func(aHO);
		}

		static bool DrBagTargetConditionCallback(StatsMenu::HealingOption& aHO)
		{
			using func_t = decltype(&StatsMenu::DrBagTargetConditionCallback);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::DrBagTargetConditionCallback };
			return func(aHO);
		}

	protected:
		StatsMenu* ctor()
		{
			using func_t = StatsMenu*(__thiscall*)(StatsMenu*);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::ctor };
			return func(this);
		}

		static void SPECIALUpdateFn(Tile* apTile, ActorValue_Index aeIndex)
		{
			using func_t = decltype(&StatsMenu::SPECIALUpdateFn);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::SPECIALUpdateFn };
			func(apTile, aeIndex);
		}

		static void SkillsUpdateFn(Tile* apTile, ActorValue_Index aeIndex)
		{
			using func_t = decltype(&StatsMenu::SkillsUpdateFn);
			static REL::Relocation<func_t> func{ Offsets::StatsMenu::SkillsUpdateFn };
			func(apTile, aeIndex);
		}

	public:
		// members
		StatsMenu::HealingOption            pHealingOptionsA[4];             // 28
		StatsMenu_NamedEffectsList          xNamedEffects;                   // 68
		StatsMenu_StatusEffect*             pRadiationEffect;                // 74
		StatsMenu_StatusEffect*             pDehydrationEffect;              // 78
		StatsMenu_StatusEffect*             pHungerEffect;                   // 7C
		StatsMenu_StatusEffect*             pSleepEffect;                    // 80
		StatsMenu_StatusEffectList          xStatusEffects;                  // 84
		Tile*                               pTiles[60];                      // 90
		ListBox<ActorValue_Index>           lbSpecial;                       // 180
		ListBox<ActorValue_Index>           lbSkills;                        // 1B0
		ListBox<PerkRankData*>              lbPerks;                         // 1E0
		ListBox<MiscStatManager_MiscStatID> lbGeneral;                       // 210
		ListBox<StatsMenu_StatusEffect*>    lbStatusEffects;                 // 240
		ListBox<TESReputation*>             lbReputation;                    // 270
		bool                                bLimbMode;                       // 2A0
		bool                                bActiveEffectsUpdatedThisFrame;  // 2A1
		std::uint16_t                       pad2A2;                          // 2A2
	};
}
