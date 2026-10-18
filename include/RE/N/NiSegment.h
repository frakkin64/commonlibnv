#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiSegment
	{
	public:
		// members
		NiPoint3 m_kOrigin;     // 00?
		NiPoint3 m_kDirection;  // 0C?
	};
}
