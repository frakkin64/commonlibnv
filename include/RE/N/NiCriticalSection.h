#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiCriticalSection
	{
	public:
		// members
		_RTL_CRITICAL_SECTION m_kCriticalSection;  // 00?
		std::uint32_t         m_ulThreadOwner;     // 1C?
		std::uint32_t         m_uiLockCount;       // 20?
	};
}
