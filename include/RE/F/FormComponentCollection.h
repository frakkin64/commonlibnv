#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BaseFormComponent;
	class TESForm;

	class FormComponentCollection
	{
	public:
		FormComponentCollection* ctor()
		{
			using func_t = FormComponentCollection*(__thiscall*)(FormComponentCollection*);
			static REL::Relocation<func_t> func{ Offsets::FormComponentCollection::ctor };
			return func(this);
		}

		void InitFormComponentArray(TESForm* apForm)
		{
			using func_t = decltype(&FormComponentCollection::InitFormComponentArray);
			static REL::Relocation<func_t> func{ Offsets::FormComponentCollection::InitFormComponentArray };
			func(this, apForm);
		}

		void ClearFormComponentArray()
		{
			using func_t = decltype(&FormComponentCollection::ClearFormComponentArray);
			static REL::Relocation<func_t> func{ Offsets::FormComponentCollection::ClearFormComponentArray };
			func(this);
		}

	public:
		// members
		BaseFormComponent* pFCArray[38];  // 00
	};
	static_assert(sizeof(FormComponentCollection) == 0x98);
}
