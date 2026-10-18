#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/L/ListBox.h"
#include "RE/M/MENU_SOUNDS.h"
#include "RE/M/Menu.h"

namespace RE
{
	class TESBoundObject;
	class TESConditionItem;
	class TESForm;
	class TESObjectREFR;
	class TESRecipe;
	class TESRecipeCategory;
	class TESRecipeComponent;
	class Tile;

	class RecipeMenu :
		public Menu  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::RecipeMenu };
		static constexpr auto VTABLE{ VTABLE::RecipeMenu };

		// override (Menu)
		virtual ~RecipeMenu() = default;                                        // 00
		virtual void AttachTileByID(std::int32_t aiID, Tile* apTile) override;  // 01
		virtual void DoClick(std::int32_t aiID, Tile* apTarget) override;       // 03
		virtual void DoEnter(std::int32_t aiID, Tile* apTarget) override;       // 04
		virtual void DoLeave(std::int32_t aiID, Tile* apTarget) override;       // 05
		virtual void DoWheelMove(std::int32_t aiID, Tile* apTarget) override;   // 0A
		virtual void DoIdle() override;                                         // 0B
		virtual std::int32_t GetClass() override;                               // 0D
		virtual bool DoGamepad(std::int32_t aiButton, float afValue) override;  // 0E

		RecipeMenu* ctor()
		{
			using func_t = RecipeMenu*(__thiscall*)(RecipeMenu*);
			static REL::Relocation<func_t> func{ Offsets::RecipeMenu::ctor };
			return func(this);
		}

		static BSSimpleArray<TESRecipeCategory*, 1024>* GetFilterList()
		{
			using func_t = decltype(&RecipeMenu::GetFilterList);
			static REL::Relocation<func_t> func{ Offsets::RecipeMenu::GetFilterList };
			return func();
		}

		static Tile* Create(TESObjectREFR* apVendor, TESForm* apCategory)
		{
			using func_t = decltype(&RecipeMenu::Create);
			static REL::Relocation<func_t> func{ Offsets::RecipeMenu::Create };
			return func(apVendor, apCategory);
		}

		static void Close()
		{
			using func_t = decltype(&RecipeMenu::Close);
			static REL::Relocation<func_t> func{ Offsets::RecipeMenu::Close };
			func();
		}

		static std::int32_t CanMakeRecipe(TESRecipe* apRecipe)
		{
			using func_t = decltype(&RecipeMenu::CanMakeRecipe);
			static REL::Relocation<func_t> func{ Offsets::RecipeMenu::CanMakeRecipe };
			return func(apRecipe);
		}

		static void ForceRecipeUpdate(bool abNow)
		{
			using func_t = decltype(&RecipeMenu::ForceRecipeUpdate);
			static REL::Relocation<func_t> func{ Offsets::RecipeMenu::ForceRecipeUpdate };
			func(abNow);
		}

		void PopulateItemStatsDisplay(TESForm* apCurrItem, Tile* apDisplayTile)
		{
			using func_t = decltype(&RecipeMenu::PopulateItemStatsDisplay);
			static REL::Relocation<func_t> func{ Offsets::RecipeMenu::PopulateItemStatsDisplay };
			func(this, apCurrItem, apDisplayTile);
		}

	private:
		void UpdateLists(TESBoundObject* apUpdateObj, TESForm* apCategory)
		{
			using func_t = decltype(&RecipeMenu::UpdateLists);
			static REL::Relocation<func_t> func{ Offsets::RecipeMenu::UpdateLists };
			func(this, apUpdateObj, apCategory);
		}

		static void ItemSelectCallback(std::int32_t aiAmountSelected)
		{
			using func_t = decltype(&RecipeMenu::ItemSelectCallback);
			static REL::Relocation<func_t> func{ Offsets::RecipeMenu::ItemSelectCallback };
			func(aiAmountSelected);
		}

	public:
		// members
		Tile*                        pTiles[14];         // 28
		TESObjectREFR*               pCrafterRef;        // 60
		TESForm*                     pCategory;          // 64
		MENU_SOUNDS                  eFilterSound;       // 68
		ListBox<TESRecipe*>          lbRecipeList;       // 6C
		ListBox<TESRecipe*>*         plbCurrListbox;     // 9C
		ListBox<TESRecipeComponent*> lbIngredientList;   // A0
		ListBox<TESConditionItem*>   lbConditionalList;  // D0
		bool                         bTutorial;          // 100
		std::uint8_t                 pad101[0x3];        // 101
	};
	static_assert(sizeof(RecipeMenu) == 0x104);
}
