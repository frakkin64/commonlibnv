#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiFixedString
	{
	public:
		NiFixedString* ctor(char const* pcString)
		{
			using func_t = NiFixedString*(__thiscall*)(NiFixedString*, char const*);
			static REL::Relocation<func_t> func{ Offsets::NiFixedString::ctor };
			return func(this, pcString);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(NiFixedString*);
			static REL::Relocation<func_t> func{ Offsets::NiFixedString::dtor };
			func(this);
		}

		void operator_char_const() const
		{
			using func_t = decltype(&NiFixedString::operator_char_const);
			static REL::Relocation<func_t> func{ Offsets::NiFixedString::operator_char_const };
			func(this);
		}

	public:
		// members
		char* m_kHandle;  // 00
	};
	static_assert(sizeof(NiFixedString) == 0x4);
}
