#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class hkSimdReal;

	class alignas(16) hkMatrix3
	{
	public:
		void setIdentity()
		{
			using func_t = decltype(&hkMatrix3::setIdentity);
			static REL::Relocation<func_t> func{ Offsets::hkMatrix3::setIdentity };
			func(this);
		}

		void setZero()
		{
			using func_t = decltype(&hkMatrix3::setZero);
			static REL::Relocation<func_t> func{ Offsets::hkMatrix3::setZero };
			func(this);
		}

		void mul(hkSimdReal const& scale)
		{
			using func_t = decltype(&hkMatrix3::mul);
			static REL::Relocation<func_t> func{ Offsets::hkMatrix3::mul };
			func(this, scale);
		}

	public:
		// members
		hkVector4 m_col0;  // 00
		hkVector4 m_col1;  // 10?
		hkVector4 m_col2;  // 20?
	};
}
