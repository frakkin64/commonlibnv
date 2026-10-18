#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/R/RECIPE_DATA.h"
#include "RE/T/TESCondition.h"
#include "RE/T/TESForm.h"
#include "RE/T/TESFullName.h"

namespace RE
{
	class TESFile;
	class TESRecipeCategory;
	class TESRecipeComponent;

	class TESRecipe :
		public TESForm,  // 00
		public TESFullName  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRecipe };
		static constexpr auto VTABLE{ VTABLE::TESRecipe };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kRCPE_ID };

		// override (TESForm)
		virtual ~TESRecipe() = default;                  // 04
		virtual bool ProcessBeforeSave() override;       // 06
		virtual bool Load(TESFile* apFile) override;     // 08
		virtual void Save() override;                    // 0B
		virtual void InitItem() override;                // 22
		virtual void Copy(TESForm* apCopy) override;     // 42
		virtual bool Compare(TESForm* apCopy) override;  // 43

		TESRecipe* ctor()
		{
			using func_t = TESRecipe*(__thiscall*)(TESRecipe*);
			static REL::Relocation<func_t> func{ Offsets::TESRecipe::ctor };
			return func(this);
		}

		void SetCategory(TESRecipeCategory* apcat)
		{
			using func_t = decltype(&TESRecipe::SetCategory);
			static REL::Relocation<func_t> func{ Offsets::TESRecipe::SetCategory };
			func(this, apcat);
		}

		BSSimpleList<TESRecipeComponent*>* GetIngredientsList()
		{
			using func_t = decltype(&TESRecipe::GetIngredientsList);
			static REL::Relocation<func_t> func{ Offsets::TESRecipe::GetIngredientsList };
			return func(this);
		}

		TESRecipeCategory* GetCategory()
		{
			using func_t = decltype(&TESRecipe::GetCategory);
			static REL::Relocation<func_t> func{ Offsets::TESRecipe::GetCategory };
			return func(this);
		}

		TESCondition* GetConditions()
		{
			using func_t = decltype(&TESRecipe::GetConditions);
			static REL::Relocation<func_t> func{ Offsets::TESRecipe::GetConditions };
			return func(this);
		}

	public:
		// members
		RECIPE_DATA                       data;               // 24
		TESCondition                      RecipeConditions;   // 34
		BSSimpleList<TESRecipeComponent*> ingredientlist;     // 3C
		BSSimpleList<TESRecipeComponent*> outputlist;         // 44
		BSSimpleList<TESRecipeComponent*> garbageCollection;  // 4C
		TESRecipeCategory*                pRecipeCat;         // 54
		TESRecipeCategory*                pRecipeSubCat;      // 58
	};
	static_assert(sizeof(TESRecipe) == 0x5C);
}
