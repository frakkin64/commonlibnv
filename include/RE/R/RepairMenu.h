#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/L/ListBox.h"
#include "RE/L/ListBoxItem.h"
#include "RE/M/Menu.h"

namespace RE
{
	class ItemChange;
	class Tile;

	class RepairMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::RepairMenu };
		static constexpr auto VTABLE{ VTABLE::RepairMenu };

		// override (Menu)
		virtual ~RepairMenu() = default;                                               // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;         // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;              // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;              // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;              // 05
		virtual std::int32_t GetClass() override;                                      // 0D
		virtual bool DoGamepadUpEvent(std::int32_t aiButton, float afValue) override;  // 0F

		RepairMenu* ctor()
		{
			using func_t = RepairMenu*(__thiscall*)(RepairMenu*);
			static REL::Relocation<func_t> func{ Offsets::RepairMenu::ctor };
			return func(this);
		}

		static Tile* Create()
		{
			using func_t = decltype(&RepairMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::RepairMenu::Create };
			return func();
		}

		static void Update()
		{
			using func_t = decltype(&RepairMenu::Update);
			static REL::Relocation<func_t> func{ Offsets::RepairMenu::Update };
			func();
		}

		static void ResetMenu()
		{
			using func_t = decltype(&RepairMenu::ResetMenu);
			static REL::Relocation<func_t> func{ Offsets::RepairMenu::ResetMenu };
			func();
		}

		static void InitRepairMenu(ItemChange* apBrokenItem)
		{
			using func_t = decltype(&RepairMenu::InitRepairMenu);
			static REL::Relocation<func_t> func{ Offsets::RepairMenu::InitRepairMenu };
			func(apBrokenItem);
		}

	private:
		static void InitFunc(Tile* apTile, ItemChange* apItem)
		{
			using func_t = decltype(&RepairMenu::InitFunc);
			static REL::Relocation<func_t> func{ Offsets::RepairMenu::InitFunc };
			func(apTile, apItem);
		}

		static std::int32_t SortFunc(ListBoxItem<ItemChange*>* apItem1, ListBoxItem<ItemChange*>* apItem2)
		{
			using func_t = decltype(&RepairMenu::SortFunc);
			static REL::Relocation<func_t> func{ Offsets::RepairMenu::SortFunc };
			return func(apItem1, apItem2);
		}

		void RepairItem(ItemChange* apSparePart)
		{
			using func_t = decltype(&RepairMenu::RepairItem);
			static REL::Relocation<func_t> func{ Offsets::RepairMenu::RepairItem };
			func(this, apSparePart);
		}

		void ShowErrorMessage(char const* astrMessage)
		{
			using func_t = decltype(&RepairMenu::ShowErrorMessage);
			static REL::Relocation<func_t> func{ Offsets::RepairMenu::ShowErrorMessage };
			func(this, astrMessage);
		}

	public:
		// members
		Tile*                pTiles[13];    // 28
		ListBox<ItemChange*> lbRepairList;  // 5C
	};
	static_assert(sizeof(RepairMenu) == 0x8C);
}
