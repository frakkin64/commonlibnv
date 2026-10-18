#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpShape_CalcSizeForSpuInput
	{
	public:
		// members
		bool m_midphaseAgent3Registered;  // 00?
		bool m_isFixedOrKeyframed;        // 01?
		bool m_hasDynamicMotionSaved;     // 02?
	};
}
