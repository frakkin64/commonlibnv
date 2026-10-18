#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BaseFormComponent.h"

namespace RE
{
	class TESForm;
	class TESImageSpaceModifier;

	class TESImageSpaceModifiableForm :
		public BaseFormComponent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESImageSpaceModifiableForm };
		static constexpr auto VTABLE{ VTABLE::TESImageSpaceModifiableForm };

		// override (BaseFormComponent)
		virtual void InitializeDataComponent() override;                    // 00
		virtual void ClearDataComponent() override;                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1) override;     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1) override;  // 03

		TESImageSpaceModifiableForm* ctor()
		{
			using func_t = TESImageSpaceModifiableForm*(__thiscall*)(TESImageSpaceModifiableForm*);
			static REL::Relocation<func_t> func{ Offsets::TESImageSpaceModifiableForm::ctor };
			return func(this);
		}

		void Save()
		{
			using func_t = decltype(&TESImageSpaceModifiableForm::Save);
			static REL::Relocation<func_t> func{ Offsets::TESImageSpaceModifiableForm::Save };
			func(this);
		}

		void InitItem(TESForm* apOwner)
		{
			using func_t = decltype(&TESImageSpaceModifiableForm::InitItem);
			static REL::Relocation<func_t> func{ Offsets::TESImageSpaceModifiableForm::InitItem };
			func(this, apOwner);
		}

	public:
		// members
		TESImageSpaceModifier* pFormImageSpaceModifying;  // 04
	};
}
