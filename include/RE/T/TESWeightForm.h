#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class TESForm;

	class TESWeightForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESWeightForm };
		static constexpr auto VTABLE{ VTABLE::TESWeightForm };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		TESWeightForm* ctor()
		{
			using func_t = TESWeightForm*(__thiscall*)(TESWeightForm*);
			static REL::Relocation<func_t> func{ Offsets::TESWeightForm::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TESWeightForm*);
			static REL::Relocation<func_t> func{ Offsets::TESWeightForm::dtor };
			func(this);
		}

		static float GetFormWeight(TESForm* apForm, bool abIsHardcore)
		{
			using func_t = decltype(&TESWeightForm::GetFormWeight);
			static REL::Relocation<func_t> func{ Offsets::TESWeightForm::GetFormWeight };
			return func(apForm, abIsHardcore);
		}

	public:
		// members
		float fWeight;  // 04
	};
}
