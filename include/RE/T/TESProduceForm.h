#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class IngredientItem;
	class TESForm;

	class TESProduceForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESProduceForm };
		static constexpr auto VTABLE{ VTABLE::TESProduceForm };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		TESProduceForm* ctor()
		{
			using func_t = TESProduceForm*(__thiscall*)(TESProduceForm*);
			static REL::Relocation<func_t> func{ Offsets::TESProduceForm::ctor };
			return func(this);
		}

		void Save()
		{
			using func_t = decltype(&TESProduceForm::Save);
			static REL::Relocation<func_t> func{ Offsets::TESProduceForm::Save };
			func(this);
		}

		void SetAllProductionChances(std::uint8_t* apiChances)
		{
			using func_t = decltype(&TESProduceForm::SetAllProductionChances);
			static REL::Relocation<func_t> func{ Offsets::TESProduceForm::SetAllProductionChances };
			func(this, apiChances);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&TESProduceForm::InitItem);
			static REL::Relocation<func_t> func{ Offsets::TESProduceForm::InitItem };
			func(this, apOwner);
		}

	public:
		// members
		IngredientItem* pFormIngredient;    // 04
		std::uint8_t    iProduceChance[4];  // 08
	};
	static_assert(sizeof(TESProduceForm) == 0xC);
}
