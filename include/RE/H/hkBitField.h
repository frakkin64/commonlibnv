#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"

namespace RE
{
	class hkBitField
	{
	public:
		// members
		hkArray<std::uint32_t, hkContainerHeapAllocator> m_words;    // 00?
		std::int32_t                                     m_numBits;  // 0C?
	};
}
