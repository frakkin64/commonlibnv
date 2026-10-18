#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkPadSpu.h"

namespace RE
{
	class hkStackMemory
	{
	public:
		void initMemory(void* p, std::int32_t size)
		{
			using func_t = decltype(&hkStackMemory::initMemory);
			static REL::Relocation<func_t> func{ Offsets::hkStackMemory::initMemory };
			func(this, p, size);
		}

	public:
		// members
		hkPadSpu<void*> m_next;   // 00?
		hkPadSpu<void*> m_start;  // 04?
		hkPadSpu<void*> m_end;    // 08?
	};
}
