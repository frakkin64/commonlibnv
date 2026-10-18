#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) BaseFormComponent
	{
	public:
		static constexpr auto RTTI{ RTTI::BaseFormComponent };
		static constexpr auto VTABLE{ VTABLE::BaseFormComponent };

		// add
		virtual void InitializeDataComponent();                    // 00
		virtual void ClearDataComponent();                         // 01
		virtual void CopyComponent(BaseFormComponent* a_arg1);     // 02
		virtual bool CompareComponent(BaseFormComponent* a_arg1);  // 03

		BaseFormComponent* ctor()
		{
			using func_t = BaseFormComponent*(__thiscall*)(BaseFormComponent*);
			static REL::Relocation<func_t> func{ Offsets::BaseFormComponent::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(BaseFormComponent) == 0x4);
}
