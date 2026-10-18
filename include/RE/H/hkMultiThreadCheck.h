#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkMultiThreadCheck
	{
	public:
		// members
		std::uint32_t m_threadId;      // 00?
		std::uint16_t m_markCount;     // 04?
		std::uint16_t m_markBitStack;  // 06?
	};
}
