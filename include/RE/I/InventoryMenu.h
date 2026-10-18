#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/H/HotKeysWheel.h"
#include "RE/L/ListBox.h"
#include "RE/L/ListBoxItem.h"
#include "RE/M/Menu.h"

namespace RE
{
	class ItemChange;
	class TESBoundObject;
	class Tile;

	class InventoryMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::InventoryMenu };
		static constexpr auto VTABLE{ VTABLE::InventoryMenu };

		class sPageState;

		class sPageState
		{
		public:
			// members
			std::int32_t iHighlightIndex;  // 00?
			std::int32_t iScrollIndex;     // 04?
		};

		// override (Menu)
		virtual ~InventoryMenu() = default;                                            // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;         // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;              // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;              // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;              // 05
		virtual void DoIdle() override;                                                // 0B
		virtual std::int32_t GetClass() override;                                      // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;         // 0E
		virtual bool DoGamepadUpEvent(std::int32_t aiButton, float afValue) override;  // 0F

		static void SetCurrentTab(std::int32_t aiTab)
		{
			using func_t = decltype(&InventoryMenu::SetCurrentTab);
			static REL::Relocation<func_t> func{ Offsets::InventoryMenu::SetCurrentTab };
			func(aiTab);
		}

		static bool IsKeyringOpen()
		{
			using func_t = decltype(&InventoryMenu::IsKeyringOpen);
			static REL::Relocation<func_t> func{ Offsets::InventoryMenu::IsKeyringOpen };
			return func();
		}

		InventoryMenu* ctor()
		{
			using func_t = InventoryMenu*(__thiscall*)(InventoryMenu*);
			static REL::Relocation<func_t> func{ Offsets::InventoryMenu::ctor };
			return func(this);
		}

		static Tile* Create()
		{
			using func_t = decltype(&InventoryMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::InventoryMenu::Create };
			return func();
		}

		static void SavePageState()
		{
			using func_t = decltype(&InventoryMenu::SavePageState);
			static REL::Relocation<func_t> func{ Offsets::InventoryMenu::SavePageState };
			func();
		}

		static void LoadPageState()
		{
			using func_t = decltype(&InventoryMenu::LoadPageState);
			static REL::Relocation<func_t> func{ Offsets::InventoryMenu::LoadPageState };
			func();
		}

		static void SetKnobPosition(bool abPlaySounds)
		{
			using func_t = decltype(&InventoryMenu::SetKnobPosition);
			static REL::Relocation<func_t> func{ Offsets::InventoryMenu::SetKnobPosition };
			func(abPlaySounds);
		}

		static void UpdateInventoryMenu()
		{
			using func_t = decltype(&InventoryMenu::UpdateInventoryMenu);
			static REL::Relocation<func_t> func{ Offsets::InventoryMenu::UpdateInventoryMenu };
			func();
		}

	private:
		static void DropCurrentItem(std::int32_t aiAmountChosen)
		{
			using func_t = decltype(&InventoryMenu::DropCurrentItem);
			static REL::Relocation<func_t> func{ Offsets::InventoryMenu::DropCurrentItem };
			func(aiAmountChosen);
		}

		void SelectCurrentItem()
		{
			using func_t = decltype(&InventoryMenu::SelectCurrentItem);
			static REL::Relocation<func_t> func{ Offsets::InventoryMenu::SelectCurrentItem };
			func(this);
		}

		void UpdateButtons()
		{
			using func_t = decltype(&InventoryMenu::UpdateButtons);
			static REL::Relocation<func_t> func{ Offsets::InventoryMenu::UpdateButtons };
			func(this);
		}

		bool IsItemRepairable(ItemChange* apItem)
		{
			using func_t = decltype(&InventoryMenu::IsItemRepairable);
			static REL::Relocation<func_t> func{ Offsets::InventoryMenu::IsItemRepairable };
			return func(this, apItem);
		}

		void ClearCurrentItem()
		{
			using func_t = decltype(&InventoryMenu::ClearCurrentItem);
			static REL::Relocation<func_t> func{ Offsets::InventoryMenu::ClearCurrentItem };
			func(this);
		}

		static std::int32_t SortFunc(ListBoxItem<ItemChange*>* apItem1, ListBoxItem<ItemChange*>* apItem2)
		{
			using func_t = decltype(&InventoryMenu::SortFunc);
			static REL::Relocation<func_t> func{ Offsets::InventoryMenu::SortFunc };
			return func(apItem1, apItem2);
		}

		static bool FilterFunc(ItemChange* apItem)
		{
			using func_t = decltype(&InventoryMenu::FilterFunc);
			static REL::Relocation<func_t> func{ Offsets::InventoryMenu::FilterFunc };
			return func(apItem);
		}

		static void InitFunc(Tile* apTile, ItemChange* apItem)
		{
			using func_t = decltype(&InventoryMenu::InitFunc);
			static REL::Relocation<func_t> func{ Offsets::InventoryMenu::InitFunc };
			func(apTile, apItem);
		}

	public:
		// members
		Tile*                         pTiles[23];       // 28
		std::int32_t                  iCurrTab;         // 84
		InventoryMenu::sPageState     pPageStatesA[6];  // 88
		ListBox<ItemChange*>          lbInventoryList;  // B8
		HotKeysWheel                  HKWheel;          // E8
		BSSimpleList<TESBoundObject*> ItemUpdateList;   // 11C
	};
	static_assert(sizeof(InventoryMenu) == 0x124);
}
