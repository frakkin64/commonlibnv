#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiSegment.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiCapsule
	{
	public:
		// members
		NiSegment m_kSegment;  // 00?
		float     m_fRadius;   // 18?
	};
}
