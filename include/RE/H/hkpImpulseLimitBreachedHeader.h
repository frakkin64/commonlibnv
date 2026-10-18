#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpImpulseLimitBreachedHeader
	{
	public:
		// members
		std::int32_t                   m_numBreached;  // 00?
		hkpImpulseLimitBreachedHeader* m_next;         // 04?
	};
}
