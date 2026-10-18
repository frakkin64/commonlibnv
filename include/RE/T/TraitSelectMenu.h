#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/Menu.h"

namespace RE
{
	class Tile;

	class TraitSelectMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TraitSelectMenu };
		static constexpr auto VTABLE{ VTABLE::TraitSelectMenu };

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
		virtual ~TraitSelectMenu() = default;                                   // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;       // 04
		virtual void DoWheelMove(std::int32_t aiID, Tile* apTarget) override;   // 0A
		virtual void DoIdle() override;                                         // 0B
		virtual std::int32_t GetClass() override;                               // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;  // 0E

		static Tile* Create()
		{
			using func_t = decltype(&TraitSelectMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::TraitSelectMenu::Create };
			return func();
		}

		static void Close()
		{
			using func_t = decltype(&TraitSelectMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::TraitSelectMenu::Close };
			func();
		}

		void ScrollForm(float afDeltaY)
		{
			using func_t = decltype(&TraitSelectMenu::ScrollForm);
			static REL::Relocation<func_t> func{ Offsets::TraitSelectMenu::ScrollForm };
			func(this, afDeltaY);
		}

		void SetButtonAsHighlighted(std::int32_t aiID, bool bForceRefresh)
		{
			using func_t = decltype(&TraitSelectMenu::SetButtonAsHighlighted);
			static REL::Relocation<func_t> func{ Offsets::TraitSelectMenu::SetButtonAsHighlighted };
			func(this, aiID, bForceRefresh);
		}

		void Navigate(bool bUp)
		{
			using func_t = decltype(&TraitSelectMenu::Navigate);
			static REL::Relocation<func_t> func{ Offsets::TraitSelectMenu::Navigate };
			func(this, bUp);
		}

		void SetBoxAsChecked(std::int32_t aiID, bool bForceRefresh)
		{
			using func_t = decltype(&TraitSelectMenu::SetBoxAsChecked);
			static REL::Relocation<func_t> func{ Offsets::TraitSelectMenu::SetBoxAsChecked };
			func(this, aiID, bForceRefresh);
		}

		void ToggleCheckBox(std::int32_t aiID)
		{
			using func_t = decltype(&TraitSelectMenu::ToggleCheckBox);
			static REL::Relocation<func_t> func{ Offsets::TraitSelectMenu::ToggleCheckBox };
			func(this, aiID);
		}

	public:
		// members
		Tile*                       pTiles[18];                 // 28
		float                       mfCurrentYScroll;           // 70
		float                       m_fDesiredYScroll;          // 74
		TraitSelectMenu::TILE_INDEX m_CurrentlySelectedTile;    // 78
		TraitSelectMenu::TILE_INDEX m_CurrentlyCheckedTile;     // 7C
		std::uint32_t               m_nCheckmarkAnimStartTime;  // 80
		std::uint32_t               m_nLastMenuUpdateTime;      // 84
	};
	static_assert(sizeof(TraitSelectMenu) == 0x88);
}
