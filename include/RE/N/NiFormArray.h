#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTLargePrimitiveArray.h"

namespace RE
{
	class TESForm;

	class NiFormArray :
		public NiTLargePrimitiveArray<TESForm*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiFormArray };
		static constexpr auto VTABLE{ VTABLE::NiFormArray };

		// override (NiTLargePrimitiveArray<TESForm*>)
		virtual ~NiFormArray() = default;  // 00

		std::uint32_t GetIndexForForm(TESForm* apForm)
		{
			using func_t = decltype(&NiFormArray::GetIndexForForm);
			static REL::Relocation<func_t> func{ Offsets::NiFormArray::GetIndexForForm };
			return func(this, apForm);
		}

		TESForm* GetFormAt(std::uint32_t aiIndex)
		{
			using func_t = decltype(&NiFormArray::GetFormAt);
			static REL::Relocation<func_t> func{ Offsets::NiFormArray::GetFormAt };
			return func(this, aiIndex);
		}

		NiFormArray* ctor()
		{
			using func_t = NiFormArray*(__thiscall*)(NiFormArray*);
			static REL::Relocation<func_t> func{ Offsets::NiFormArray::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(NiFormArray) == 0x18);
}
