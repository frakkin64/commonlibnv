#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/L/ListBox.h"
#include "RE/M/Menu.h"

namespace RE
{
	class ItemChange;
	class Tile;

	class ItemModMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ItemModMenu };
		static constexpr auto VTABLE{ VTABLE::ItemModMenu };

		// override (Menu)
		virtual ~ItemModMenu() = default;                                              // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;         // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;              // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;              // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;              // 05
		virtual std::int32_t GetClass() override;                                      // 0D
		virtual bool DoGamepadUpEvent(std::int32_t aiButton, float afValue) override;  // 0F

		ItemModMenu* ctor()
		{
			using func_t = ItemModMenu*(__thiscall*)(ItemModMenu*);
			static REL::Relocation<func_t> func{ Offsets::ItemModMenu::ctor };
			return func(this);
		}

		static Tile* Create()
		{
			using func_t = decltype(&ItemModMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::ItemModMenu::Create };
			return func();
		}

		static void Update()
		{
			using func_t = decltype(&ItemModMenu::Update);
			static REL::Relocation<func_t> func{ Offsets::ItemModMenu::Update };
			func();
		}

		static void ResetMenu()
		{
			using func_t = decltype(&ItemModMenu::ResetMenu);
			static REL::Relocation<func_t> func{ Offsets::ItemModMenu::ResetMenu };
			func();
		}

		static void InitItemModMenu(ItemChange* apBrokenItem, bool bCheckEquip)
		{
			using func_t = decltype(&ItemModMenu::InitItemModMenu);
			static REL::Relocation<func_t> func{ Offsets::ItemModMenu::InitItemModMenu };
			func(apBrokenItem, bCheckEquip);
		}

	private:
		static void InitFunc(Tile* apTile, ItemChange* apItem)
		{
			using func_t = decltype(&ItemModMenu::InitFunc);
			static REL::Relocation<func_t> func{ Offsets::ItemModMenu::InitFunc };
			func(apTile, apItem);
		}

		bool ItemModItem(ItemChange* apSparePart)
		{
			using func_t = decltype(&ItemModMenu::ItemModItem);
			static REL::Relocation<func_t> func{ Offsets::ItemModMenu::ItemModItem };
			return func(this, apSparePart);
		}

	public:
		// members
		Tile*                pTiles[14];     // 28
		ListBox<ItemChange*> lbItemModList;  // 60
	};
	static_assert(sizeof(ItemModMenu) == 0x90);
}
