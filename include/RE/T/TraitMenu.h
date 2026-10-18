#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/L/ListBox.h"
#include "RE/L/ListBoxItem.h"
#include "RE/M/Menu.h"

namespace RE
{
	class BGSPerk;
	class Tile;

	class TraitMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TraitMenu };
		static constexpr auto VTABLE{ VTABLE::TraitMenu };

		// override (Menu)
		virtual ~TraitMenu() = default;                                                // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;         // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;              // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;              // 04
		virtual void DoIdle() override;                                                // 0B
		virtual std::int32_t GetClass() override;                                      // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;         // 0E
		virtual bool DoGamepadUpEvent(std::int32_t aiButton, float afValue) override;  // 0F

		TraitMenu* ctor()
		{
			using func_t = TraitMenu*(__thiscall*)(TraitMenu*);
			static REL::Relocation<func_t> func{ Offsets::TraitMenu::ctor };
			return func(this);
		}

		static Tile* Create()
		{
			using func_t = decltype(&TraitMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::TraitMenu::Create };
			return func();
		}

		static void Close()
		{
			using func_t = decltype(&TraitMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::TraitMenu::Close };
			func();
		}

	private:
		void InitLists()
		{
			using func_t = decltype(&TraitMenu::InitLists);
			static REL::Relocation<func_t> func{ Offsets::TraitMenu::InitLists };
			func(this);
		}

		void UpdatePointCounter()
		{
			using func_t = decltype(&TraitMenu::UpdatePointCounter);
			static REL::Relocation<func_t> func{ Offsets::TraitMenu::UpdatePointCounter };
			func(this);
		}

		static void ResetPerksFunc(Tile* apTile, BGSPerk* apPerk)
		{
			using func_t = decltype(&TraitMenu::ResetPerksFunc);
			static REL::Relocation<func_t> func{ Offsets::TraitMenu::ResetPerksFunc };
			func(apTile, apPerk);
		}

		static void UpdatePerksFunc(Tile* apTile, BGSPerk* apPerk)
		{
			using func_t = decltype(&TraitMenu::UpdatePerksFunc);
			static REL::Relocation<func_t> func{ Offsets::TraitMenu::UpdatePerksFunc };
			func(apTile, apPerk);
		}

		static std::int32_t SortPerksFunc(ListBoxItem<BGSPerk*>* apItem1, ListBoxItem<BGSPerk*>* apItem2)
		{
			using func_t = decltype(&TraitMenu::SortPerksFunc);
			static REL::Relocation<func_t> func{ Offsets::TraitMenu::SortPerksFunc };
			return func(apItem1, apItem2);
		}

		void ApplyPerkEffects(Tile* apTile)
		{
			using func_t = decltype(&TraitMenu::ApplyPerkEffects);
			static REL::Relocation<func_t> func{ Offsets::TraitMenu::ApplyPerkEffects };
			func(this, apTile);
		}

	public:
		// members
		Tile*                  pTiles[9];       // 28
		std::int32_t           iCurrPoints;     // 4C
		std::int32_t           iMaxPoints;      // 50
		ListBox<BGSPerk*>      lbPerksList;     // 54
		BSSimpleList<BGSPerk*> AvailablePerks;  // 84
	};
	static_assert(sizeof(TraitMenu) == 0x8C);
}
