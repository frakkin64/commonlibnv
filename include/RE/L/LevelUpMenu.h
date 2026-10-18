#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/B/BSSimpleList.h"
#include "RE/L/ListBox.h"
#include "RE/L/ListBoxItem.h"
#include "RE/M/Menu.h"

namespace RE
{
	class BGSPerk;
	class Tile;

	class LevelUpMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::LevelUpMenu };
		static constexpr auto VTABLE{ VTABLE::LevelUpMenu };

		enum class PageIndex : std::int32_t
		{
			kPI_SKILLS_PAGE = 0x0,
			kPI_PERKS_PAGE = 0x1,
			kNUM_PAGES = 0x2,
		};

		// override (Menu)
		virtual ~LevelUpMenu() = default;                                              // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;         // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;              // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;              // 04
		virtual void DoIdle() override;                                                // 0B
		virtual std::int32_t GetClass() override;                                      // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;         // 0E
		virtual bool DoGamepadUpEvent(std::int32_t aiButton, float afValue) override;  // 0F

		LevelUpMenu* ctor()
		{
			using func_t = LevelUpMenu*(__thiscall*)(LevelUpMenu*);
			static REL::Relocation<func_t> func{ Offsets::LevelUpMenu::ctor };
			return func(this);
		}

		static Tile* Create()
		{
			using func_t = decltype(&LevelUpMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::LevelUpMenu::Create };
			return func();
		}

		static void Close()
		{
			using func_t = decltype(&LevelUpMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::LevelUpMenu::Close };
			func();
		}

	private:
		void InitLists()
		{
			using func_t = decltype(&LevelUpMenu::InitLists);
			static REL::Relocation<func_t> func{ Offsets::LevelUpMenu::InitLists };
			func(this);
		}

		void SetCurrentPage(LevelUpMenu::PageIndex aePage)
		{
			using func_t = decltype(&LevelUpMenu::SetCurrentPage);
			static REL::Relocation<func_t> func{ Offsets::LevelUpMenu::SetCurrentPage };
			func(this, aePage);
		}

		void UpdatePointCounter()
		{
			using func_t = decltype(&LevelUpMenu::UpdatePointCounter);
			static REL::Relocation<func_t> func{ Offsets::LevelUpMenu::UpdatePointCounter };
			func(this);
		}

		static void ResetSkillsFunc(Tile* apTile, ActorValue_Index aeIndex)
		{
			using func_t = decltype(&LevelUpMenu::ResetSkillsFunc);
			static REL::Relocation<func_t> func{ Offsets::LevelUpMenu::ResetSkillsFunc };
			func(apTile, aeIndex);
		}

		static void ResetPerksFunc(Tile* apTile, BGSPerk* apPerk)
		{
			using func_t = decltype(&LevelUpMenu::ResetPerksFunc);
			static REL::Relocation<func_t> func{ Offsets::LevelUpMenu::ResetPerksFunc };
			func(apTile, apPerk);
		}

		static void PerkUpdateFunc(Tile* apTile, ActorValue_Index aeIndex)
		{
			using func_t = decltype(&LevelUpMenu::PerkUpdateFunc);
			static REL::Relocation<func_t> func{ Offsets::LevelUpMenu::PerkUpdateFunc };
			func(apTile, aeIndex);
		}

		static void UpdatePerksFunc(Tile* apTile, BGSPerk* apPerk)
		{
			using func_t = decltype(&LevelUpMenu::UpdatePerksFunc);
			static REL::Relocation<func_t> func{ Offsets::LevelUpMenu::UpdatePerksFunc };
			func(apTile, apPerk);
		}

		static std::int32_t SortPerksFunc(ListBoxItem<BGSPerk*>* apItem1, ListBoxItem<BGSPerk*>* apItem2)
		{
			using func_t = decltype(&LevelUpMenu::SortPerksFunc);
			static REL::Relocation<func_t> func{ Offsets::LevelUpMenu::SortPerksFunc };
			return func(apItem1, apItem2);
		}

		void SetDisplayString(Tile* apTile)
		{
			using func_t = decltype(&LevelUpMenu::SetDisplayString);
			static REL::Relocation<func_t> func{ Offsets::LevelUpMenu::SetDisplayString };
			func(this, apTile);
		}

		void ApplyPerkEffects(Tile* apTile)
		{
			using func_t = decltype(&LevelUpMenu::ApplyPerkEffects);
			static REL::Relocation<func_t> func{ Offsets::LevelUpMenu::ApplyPerkEffects };
			func(this, apTile);
		}

	public:
		// members
		LevelUpMenu::PageIndex    eCurrentPage;    // 28
		Tile*                     pTiles[10];      // 2C
		std::int32_t              iCurrPoints[2];  // 54
		std::int32_t              iMaxPoints[2];   // 5C
		ListBox<ActorValue_Index> lbSkillsList;    // 64
		ListBox<BGSPerk*>         lbPerksList;     // 94
		BSSimpleList<BGSPerk*>    AvailablePerks;  // C4
	};
	static_assert(sizeof(LevelUpMenu) == 0xCC);
}
