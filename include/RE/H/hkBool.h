#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkBool
	{
	public:
		void operator_bool() const
		{
			using func_t = decltype(&hkBool::operator_bool);
			static REL::Relocation<func_t> func{ Offsets::hkBool::operator_bool };
			func(this);
		}

		hkBool* ctor(bool b)
		{
			using func_t = hkBool*(__thiscall*)(hkBool*, bool);
			static REL::Relocation<func_t> func{ Offsets::hkBool::ctor };
			return func(this, b);
		}

	public:
		// members
		char m_bool;  // 00
	};
}
