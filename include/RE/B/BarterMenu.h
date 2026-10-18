#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/L/ListBox.h"
#include "RE/L/ListBoxItem.h"
#include "RE/M/MENU_SOUNDS.h"
#include "RE/M/Menu.h"

namespace RE
{
	class ItemChange;
	class TESBoundObject;
	class TESObjectREFR;
	class Tile;

	class BarterMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BarterMenu };
		static constexpr auto VTABLE{ VTABLE::BarterMenu };

		enum class FILTER_MODE : std::int32_t
		{
			kFM_ALL = 0x0,
			kFM_WEAPONS = 0x1,
			kFM_APPAREL = 0x2,
			kFM_AID = 0x3,
			kFM_MISC = 0x4,
			kFM_AMMO = 0x5,
			kFM_COUNT = 0x6,
		};

		// override (Menu)
		virtual ~BarterMenu() = default;                                        // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;       // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;       // 05
		virtual void DoWheelMove(std::int32_t aiID, Tile* apTarget) override;   // 0A
		virtual void DoIdle() override;                                         // 0B
		virtual std::int32_t GetClass() override;                               // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;  // 0E

		BarterMenu* ctor()
		{
			using func_t = BarterMenu*(__thiscall*)(BarterMenu*);
			static REL::Relocation<func_t> func{ Offsets::BarterMenu::ctor };
			return func(this);
		}

		static Tile* Create(TESObjectREFR* apVendor, std::int32_t aiDiscount)
		{
			using func_t = decltype(&BarterMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::BarterMenu::Create };
			return func(apVendor, aiDiscount);
		}

		static void Close()
		{
			using func_t = decltype(&BarterMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::BarterMenu::Close };
			func();
		}

		static void ForceBarterUpdate(bool abNow)
		{
			using func_t = decltype(&BarterMenu::ForceBarterUpdate);
			static REL::Relocation<func_t> func{ Offsets::BarterMenu::ForceBarterUpdate };
			func(abNow);
		}

	private:
		void UpdateCapsLabels()
		{
			using func_t = decltype(&BarterMenu::UpdateCapsLabels);
			static REL::Relocation<func_t> func{ Offsets::BarterMenu::UpdateCapsLabels };
			func(this);
		}

		void UpdateLists(TESBoundObject* apUpdateObj)
		{
			using func_t = decltype(&BarterMenu::UpdateLists);
			static REL::Relocation<func_t> func{ Offsets::BarterMenu::UpdateLists };
			func(this, apUpdateObj);
		}

		static bool PlayerFirstPassFilterFunc(ItemChange* apItem)
		{
			using func_t = decltype(&BarterMenu::PlayerFirstPassFilterFunc);
			static REL::Relocation<func_t> func{ Offsets::BarterMenu::PlayerFirstPassFilterFunc };
			return func(apItem);
		}

		static bool VendorFirstPassFilterFunc(ItemChange* apItem)
		{
			using func_t = decltype(&BarterMenu::VendorFirstPassFilterFunc);
			static REL::Relocation<func_t> func{ Offsets::BarterMenu::VendorFirstPassFilterFunc };
			return func(apItem);
		}

		static void RemoveStolenItems(Tile* apTile, ItemChange* apItem)
		{
			using func_t = decltype(&BarterMenu::RemoveStolenItems);
			static REL::Relocation<func_t> func{ Offsets::BarterMenu::RemoveStolenItems };
			func(apTile, apItem);
		}

		static float GetSortValue(Tile* apTile, ItemChange* apItem)
		{
			using func_t = decltype(&BarterMenu::GetSortValue);
			static REL::Relocation<func_t> func{ Offsets::BarterMenu::GetSortValue };
			return func(apTile, apItem);
		}

		static std::int32_t SortFunc(ListBoxItem<ItemChange*>* apItem1, ListBoxItem<ItemChange*>* apItem2)
		{
			using func_t = decltype(&BarterMenu::SortFunc);
			static REL::Relocation<func_t> func{ Offsets::BarterMenu::SortFunc };
			return func(apItem1, apItem2);
		}

		static void InitFunc(Tile* apTile, ItemChange* apItem)
		{
			using func_t = decltype(&BarterMenu::InitFunc);
			static REL::Relocation<func_t> func{ Offsets::BarterMenu::InitFunc };
			func(apTile, apItem);
		}

		static void ItemSelectCallback(std::int32_t aiAmountSelected)
		{
			using func_t = decltype(&BarterMenu::ItemSelectCallback);
			static REL::Relocation<func_t> func{ Offsets::BarterMenu::ItemSelectCallback };
			func(aiAmountSelected);
		}

		void CompleteTransaction()
		{
			using func_t = decltype(&BarterMenu::CompleteTransaction);
			static REL::Relocation<func_t> func{ Offsets::BarterMenu::CompleteTransaction };
			func(this);
		}

		void SetFilterModeTitle(Tile* apTitleTile)
		{
			using func_t = decltype(&BarterMenu::SetFilterModeTitle);
			static REL::Relocation<func_t> func{ Offsets::BarterMenu::SetFilterModeTitle };
			func(this, apTitleTile);
		}

		static bool FilterModeFunc(ItemChange* apItem)
		{
			using func_t = decltype(&BarterMenu::FilterModeFunc);
			static REL::Relocation<func_t> func{ Offsets::BarterMenu::FilterModeFunc };
			return func(apItem);
		}

	public:
		// members
		Tile*                     pTiles[22];          // 28
		TESObjectREFR*            pVendorRef;          // 80
		float                     fTransactionAmount;  // 84
		std::int32_t              iDiscount;           // 88
		std::int32_t              iPlayerCaps;         // 8C
		std::int32_t              iVendorCaps;         // 90
		float                     fBuyMult;            // 94
		float                     fSellMult;           // 98
		BarterMenu::FILTER_MODE   ePlayerFilterMode;   // 9C
		BarterMenu::FILTER_MODE   eVendorFilterMode;   // A0
		MENU_SOUNDS               eFilterSound;        // A4
		ListBox<ItemChange*>      lbPlayerItems;       // A8
		ListBox<ItemChange*>      lbVendorItems;       // D8
		ListBox<ItemChange*>*     plbCurrListbox;      // 108
		BSSimpleList<ItemChange*> ItemsToBuy;          // 10C
		BSSimpleList<ItemChange*> ItemsToSell;         // 114
		bool                      bItemsTraded;        // 11C
		std::uint8_t              pad11D[0x3];         // 11D
	};
	static_assert(sizeof(BarterMenu) == 0x120);
}
