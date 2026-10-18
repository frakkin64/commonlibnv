#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSoundHandle.h"
#include "RE/B/BSStringT.h"
#include "RE/I/Interface_CONTAINER_MENU_MODE.h"
#include "RE/L/ListBox.h"
#include "RE/L/ListBoxItem.h"
#include "RE/M/MENU_SOUNDS.h"
#include "RE/M/Menu.h"

namespace RE
{
	class Actor;
	class ItemChange;
	class TESBoundObject;
	class TESObjectREFR;
	class TESTopic;
	class Tile;

	class ContainerMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ContainerMenu };
		static constexpr auto VTABLE{ VTABLE::ContainerMenu };

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
		virtual ~ContainerMenu() = default;                                            // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;         // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;              // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;              // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;              // 05
		virtual void DoWheelMove(std::int32_t aiID, Tile* apTarget) override;          // 0A
		virtual void DoIdle() override;                                                // 0B
		virtual bool DoKey(std::int32_t aiKey) override;                               // 0C
		virtual std::int32_t GetClass() override;                                      // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;         // 0E
		virtual bool DoGamepadUpEvent(std::int32_t aiButton, float afValue) override;  // 0F

		ContainerMenu* ctor()
		{
			using func_t = ContainerMenu*(__thiscall*)(ContainerMenu*);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::ctor };
			return func(this);
		}

		static Tile* Create(TESObjectREFR* apContainer, Interface_CONTAINER_MENU_MODE aeContainerMode)
		{
			using func_t = decltype(&ContainerMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::Create };
			return func(apContainer, aeContainerMode);
		}

		static void Close()
		{
			using func_t = decltype(&ContainerMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::Close };
			func();
		}

	private:
		void PlayContainerSound(TESObjectREFR* apContainer, bool abOpenSound)
		{
			using func_t = decltype(&ContainerMenu::PlayContainerSound);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::PlayContainerSound };
			func(this, apContainer, abOpenSound);
		}

		void InitContainerMode()
		{
			using func_t = decltype(&ContainerMenu::InitContainerMode);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::InitContainerMode };
			func(this);
		}

		void UpdateLists(TESBoundObject* apUpdateObj)
		{
			using func_t = decltype(&ContainerMenu::UpdateLists);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::UpdateLists };
			func(this, apUpdateObj);
		}

		static bool FirstPassFilterFunc(ItemChange* apItem)
		{
			using func_t = decltype(&ContainerMenu::FirstPassFilterFunc);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::FirstPassFilterFunc };
			return func(apItem);
		}

		static std::int32_t SortFunc(ListBoxItem<ItemChange*>* apItem1, ListBoxItem<ItemChange*>* apItem2)
		{
			using func_t = decltype(&ContainerMenu::SortFunc);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::SortFunc };
			return func(apItem1, apItem2);
		}

		static void InitFunc(Tile* apTile, ItemChange* apItem)
		{
			using func_t = decltype(&ContainerMenu::InitFunc);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::InitFunc };
			func(apTile, apItem);
		}

		bool IsPlacingMine(ItemChange* apItem, TESObjectREFR* apRefFrom, TESObjectREFR* apRefTo)
		{
			using func_t = decltype(&ContainerMenu::IsPlacingMine);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::IsPlacingMine };
			return func(this, apItem, apRefFrom, apRefTo);
		}

		void SwitchContainer(Tile* apTile, ItemChange* apItem, std::int32_t aiAmountSwitched)
		{
			using func_t = decltype(&ContainerMenu::SwitchContainer);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::SwitchContainer };
			func(this, apTile, apItem, aiAmountSwitched);
		}

		static void TakeAllFn(Tile* apTile, ItemChange* apItem)
		{
			using func_t = decltype(&ContainerMenu::TakeAllFn);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::TakeAllFn };
			func(apTile, apItem);
		}

		static void ItemSelectCallback(std::int32_t aiAmountSelected)
		{
			using func_t = decltype(&ContainerMenu::ItemSelectCallback);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::ItemSelectCallback };
			func(aiAmountSelected);
		}

		bool PickpocketCheck(Actor* apActor, std::int32_t aiStealValue)
		{
			using func_t = decltype(&ContainerMenu::PickpocketCheck);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::PickpocketCheck };
			return func(this, apActor, aiStealValue);
		}

		std::int32_t GetStolenValue(ItemChange* apItem, std::int32_t aiAmountTaken, bool abDefaultStolen)
		{
			using func_t = decltype(&ContainerMenu::GetStolenValue);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::GetStolenValue };
			return func(this, apItem, aiAmountTaken, abDefaultStolen);
		}

		void SetFilterModeTitle(Tile* apTitleTile)
		{
			using func_t = decltype(&ContainerMenu::SetFilterModeTitle);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::SetFilterModeTitle };
			func(this, apTitleTile);
		}

		static bool FilterModeFunc(ItemChange* apItem)
		{
			using func_t = decltype(&ContainerMenu::FilterModeFunc);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::FilterModeFunc };
			return func(apItem);
		}

		void SetContainerTitle(char const* astrTitle)
		{
			using func_t = decltype(&ContainerMenu::SetContainerTitle);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::SetContainerTitle };
			func(this, astrTitle);
		}

		void PlayReactivityBark(TESTopic* aRelatedTopic)
		{
			using func_t = decltype(&ContainerMenu::PlayReactivityBark);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::PlayReactivityBark };
			func(this, aRelatedTopic);
		}

		void DisplayContainerMenuSubtitle(BSStringT<char> asText, BSSoundHandle ahSound)
		{
			using func_t = decltype(&ContainerMenu::DisplayContainerMenuSubtitle);
			static REL::Relocation<func_t> func{ Offsets::ContainerMenu::DisplayContainerMenuSubtitle };
			func(this, asText, ahSound);
		}

	public:
		// members
		Tile*                         pTiles[19];                // 28
		TESObjectREFR*                pContainerRef;             // 74
		BSSimpleList<TESBoundObject*> ActiveMineList;            // 78
		Interface_CONTAINER_MENU_MODE eContainerMode;            // 80
		std::int32_t                  iValueStolen;              // 84
		bool                          bPickPocketTallied;        // 88
		bool                          bPickpocketFail;           // 89
		std::uint16_t                 pad8A;                     // 8A
		ContainerMenu::FILTER_MODE    eItemsFilterMode;          // 8C
		ContainerMenu::FILTER_MODE    eContainerFilterMode;      // 90
		MENU_SOUNDS                   eFilterSound;              // 94
		ListBox<ItemChange*>          lbItems;                   // 98
		ListBox<ItemChange*>          lbContainer;               // C8
		ListBox<ItemChange*>*         plbCurrListbox;            // F8
		std::uint32_t                 m_nTimeToClearSubtitle;    // FC
		BSSoundHandle                 m_hCurrentReactivityBark;  // 100
	};
	static_assert(sizeof(ContainerMenu) == 0x10C);
}
