#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/L/ListBox.h"
#include "RE/L/ListBoxItem.h"
#include "RE/M/Menu.h"

namespace RE
{
	class Actor;
	class ItemChange;
	class Tile;

	class RepairServicesMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::RepairServicesMenu };
		static constexpr auto VTABLE{ VTABLE::RepairServicesMenu };

		// override (Menu)
		virtual ~RepairServicesMenu() = default;                                // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;       // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;       // 05
		virtual std::int32_t GetClass() override;                               // 0D

		RepairServicesMenu* ctor()
		{
			using func_t = RepairServicesMenu*(__thiscall*)(RepairServicesMenu*);
			static REL::Relocation<func_t> func{ Offsets::RepairServicesMenu::ctor };
			return func(this);
		}

		static Tile* Create(Actor* apVendor)
		{
			using func_t = decltype(&RepairServicesMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::RepairServicesMenu::Create };
			return func(apVendor);
		}

		static void Close()
		{
			using func_t = decltype(&RepairServicesMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::RepairServicesMenu::Close };
			func();
		}

	private:
		static void InitFunc(Tile* apTile, ItemChange* apItem)
		{
			using func_t = decltype(&RepairServicesMenu::InitFunc);
			static REL::Relocation<func_t> func{ Offsets::RepairServicesMenu::InitFunc };
			func(apTile, apItem);
		}

		static bool FilterFunc(ItemChange* apItem)
		{
			using func_t = decltype(&RepairServicesMenu::FilterFunc);
			static REL::Relocation<func_t> func{ Offsets::RepairServicesMenu::FilterFunc };
			return func(apItem);
		}

		static std::int32_t SortFunc(ListBoxItem<ItemChange*>* apItem1, ListBoxItem<ItemChange*>* apItem2)
		{
			using func_t = decltype(&RepairServicesMenu::SortFunc);
			static REL::Relocation<func_t> func{ Offsets::RepairServicesMenu::SortFunc };
			return func(apItem1, apItem2);
		}

		void RepairItem(ItemChange* apBrokenItem)
		{
			using func_t = decltype(&RepairServicesMenu::RepairItem);
			static REL::Relocation<func_t> func{ Offsets::RepairServicesMenu::RepairItem };
			func(this, apBrokenItem);
		}

		void Update()
		{
			using func_t = decltype(&RepairServicesMenu::Update);
			static REL::Relocation<func_t> func{ Offsets::RepairServicesMenu::Update };
			func(this);
		}

	public:
		// members
		Tile*                pTiles[16];          // 28
		ListBox<ItemChange*> lbRepairList;        // 68
		std::int32_t         iRepairAllCost;      // 98
		std::int32_t         iVendorRepairSkill;  // 9C
	};
	static_assert(sizeof(RepairServicesMenu) == 0xA0);
}
