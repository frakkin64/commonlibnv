#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpBroadPhaseHandle;

	class hkpBroadPhaseHandlePair
	{
	public:
		// members
		hkpBroadPhaseHandle* m_a;  // 00?
		hkpBroadPhaseHandle* m_b;  // 04?
	};
}
