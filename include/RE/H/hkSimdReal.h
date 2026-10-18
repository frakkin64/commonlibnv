#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkSimdReal
	{
	public:
		void operator_float() const
		{
			using func_t = decltype(&hkSimdReal::operator_float);
			static REL::Relocation<func_t> func{ Offsets::hkSimdReal::operator_float };
			func(this);
		}

		hkSimdReal* ctor(float const& x)
		{
			using func_t = hkSimdReal*(__thiscall*)(hkSimdReal*, float const&);
			static REL::Relocation<func_t> func{ Offsets::hkSimdReal::ctor };
			return func(this, x);
		}

	public:
		// members
		float m_real0;  // 00?
		float m_real1;  // 04?
		float m_real2;  // 08?
		float m_real3;  // 0C?
	};
}
