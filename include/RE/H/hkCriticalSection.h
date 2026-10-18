#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkCriticalSection
	{
	public:
		hkCriticalSection* ctor(std::int32_t spinCount)
		{
			using func_t = hkCriticalSection*(__thiscall*)(hkCriticalSection*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::hkCriticalSection::ctor };
			return func(this, spinCount);
		}

	public:
		// members
		_RTL_CRITICAL_SECTION m_section;  // 00?
	};
}
