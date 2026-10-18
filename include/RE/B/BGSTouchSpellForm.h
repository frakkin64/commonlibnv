#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class MagicItemForm;
	class TESForm;

	class BGSTouchSpellForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSTouchSpellForm };
		static constexpr auto VTABLE{ VTABLE::BGSTouchSpellForm };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		BGSTouchSpellForm* ctor()
		{
			using func_t = BGSTouchSpellForm*(__thiscall*)(BGSTouchSpellForm*);
			static REL::Relocation<func_t> func{ Offsets::BGSTouchSpellForm::ctor };
			return func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&BGSTouchSpellForm::InitItem);
			static REL::Relocation<func_t> func{ Offsets::BGSTouchSpellForm::InitItem };
			func(this, apOwner);
		}

	public:
		// members
		MagicItemForm* pFormTouchSpell;       // 04
		std::uint16_t  iTouchSpellAnimation;  // 08
		std::uint16_t  pad0A;                 // 0A
	};
}
