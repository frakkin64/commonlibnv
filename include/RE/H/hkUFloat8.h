#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkUFloat8
	{
	public:
		hkUFloat8& operator_call(float const& fv)
		{
			using func_t = decltype(&hkUFloat8::operator_call);
			static REL::Relocation<func_t> func{ Offsets::hkUFloat8::operator_call };
			return func(this, fv);
		}

	public:
		// members
		std::uint8_t m_value;  // 00
	};
}
