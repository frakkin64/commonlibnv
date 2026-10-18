#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpLinearCastInput
	{
	public:
		hkpLinearCastInput* ctor()
		{
			using func_t = hkpLinearCastInput*(__thiscall*)(hkpLinearCastInput*);
			static REL::Relocation<func_t> func{ Offsets::hkpLinearCastInput::ctor };
			return func(this);
		}

	public:
		// members
		hkVector4    m_to;                   // 00
		float        m_maxExtraPenetration;  // 10
		float        m_startPointTolerance;  // 14
		std::uint8_t pad18[0x8];             // 18
	};
}
