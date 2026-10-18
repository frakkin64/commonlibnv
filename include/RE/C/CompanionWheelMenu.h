#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSoundHandle.h"
#include "RE/B/BSStringT.h"
#include "RE/M/Menu.h"

namespace RE
{
	class Actor;
	class TESTopic;
	class Tile;

	class CompanionWheelMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CompanionWheelMenu };
		static constexpr auto VTABLE{ VTABLE::CompanionWheelMenu };

		enum class TILE_INDEX : std::int32_t
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

		// override (Menu)
		virtual ~CompanionWheelMenu() = default;                                // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;       // 04
		virtual void DoIdle() override;                                         // 0B
		virtual std::int32_t GetClass() override;                               // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;  // 0E

		CompanionWheelMenu* ctor()
		{
			using func_t = CompanionWheelMenu*(__thiscall*)(CompanionWheelMenu*);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::ctor };
			return func(this);
		}

		static bool CreateCompanionWheelMenu(Actor* apRelatedCompanion)
		{
			using func_t = decltype(&CompanionWheelMenu::CreateCompanionWheelMenu);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::CreateCompanionWheelMenu };
			return func(apRelatedCompanion);
		}

		static bool GetShouldCompanionWheelOpen(Actor* apCompanion)
		{
			using func_t = decltype(&CompanionWheelMenu::GetShouldCompanionWheelOpen);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::GetShouldCompanionWheelOpen };
			return func(apCompanion);
		}

		static Tile* Create(Actor* apRelatedCompanion)
		{
			using func_t = decltype(&CompanionWheelMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::Create };
			return func(apRelatedCompanion);
		}

		static void Close(bool abClearOutSpeech)
		{
			using func_t = decltype(&CompanionWheelMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::Close };
			func(abClearOutSpeech);
		}

		void SetButtonAsHighlighted(std::int32_t aiID, bool bForceRefresh)
		{
			using func_t = void (CompanionWheelMenu::*)(std::int32_t, bool);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::SetButtonAsHighlighted };
			func(this, aiID, bForceRefresh);
		}

		void SetButtonAsHighlighted(float fInputStickAngle)
		{
			using func_t = void (CompanionWheelMenu::*)(float);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::SetButtonAsHighlighted_1 };
			func(this, fInputStickAngle);
		}

		void SetButtonContextText(std::int32_t aiID)
		{
			using func_t = decltype(&CompanionWheelMenu::SetButtonContextText);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::SetButtonContextText };
			func(this, aiID);
		}

		void Do_ToggleNearFar()
		{
			using func_t = decltype(&CompanionWheelMenu::Do_ToggleNearFar);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::Do_ToggleNearFar };
			func(this);
		}

		void Do_ToggleAggressivePassive()
		{
			using func_t = decltype(&CompanionWheelMenu::Do_ToggleAggressivePassive);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::Do_ToggleAggressivePassive };
			func(this);
		}

		void Do_ToggleRangedMelee()
		{
			using func_t = decltype(&CompanionWheelMenu::Do_ToggleRangedMelee);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::Do_ToggleRangedMelee };
			func(this);
		}

		void Do_ToggleStayFollow()
		{
			using func_t = decltype(&CompanionWheelMenu::Do_ToggleStayFollow);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::Do_ToggleStayFollow };
			func(this);
		}

		void Do_UseStim()
		{
			using func_t = decltype(&CompanionWheelMenu::Do_UseStim);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::Do_UseStim };
			func(this);
		}

		void Do_Backup()
		{
			using func_t = decltype(&CompanionWheelMenu::Do_Backup);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::Do_Backup };
			func(this);
		}

		void TransitionFromCloseToTalkTo()
		{
			using func_t = decltype(&CompanionWheelMenu::TransitionFromCloseToTalkTo);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::TransitionFromCloseToTalkTo };
			func(this);
		}

		void PlayReactivityBark(TESTopic* aRelatedTopic)
		{
			using func_t = decltype(&CompanionWheelMenu::PlayReactivityBark);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::PlayReactivityBark };
			func(this, aRelatedTopic);
		}

		void RunFollowerCommandScript(TESTopic* aRelatedTopic)
		{
			using func_t = decltype(&CompanionWheelMenu::RunFollowerCommandScript);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::RunFollowerCommandScript };
			func(this, aRelatedTopic);
		}

		void DisplayCompanionWheelSubtitle(BSStringT<char> asText, BSSoundHandle ahSound)
		{
			using func_t = decltype(&CompanionWheelMenu::DisplayCompanionWheelSubtitle);
			static REL::Relocation<func_t> func{ Offsets::CompanionWheelMenu::DisplayCompanionWheelSubtitle };
			func(this, asText, ahSound);
		}

	public:
		// members
		Tile*                          pTiles[16];                // 28
		Actor*                         m_pRelatedCompanion;       // 68
		bool                           m_bFollowingLong;          // 6C
		bool                           m_bAggressiveStance;       // 6D
		bool                           m_bRangedCombat;           // 6E
		bool                           m_bFollowing;              // 6F
		CompanionWheelMenu::TILE_INDEX m_CurrentlySelectedTile;   // 70
		bool                           bTalkToOnClose;            // 74
		std::uint8_t                   pad75[0x3];                // 75
		std::uint32_t                  m_nTimeToClearSubtitle;    // 78
		BSSoundHandle                  m_hCurrentReactivityBark;  // 7C
	};
	static_assert(sizeof(CompanionWheelMenu) == 0x88);
}
