#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkPadSpu.h"

namespace RE
{
	class hkStepInfo
	{
	public:
		// members
		hkPadSpu<float> m_startTime;     // 00?
		hkPadSpu<float> m_endTime;       // 04?
		hkPadSpu<float> m_deltaTime;     // 08?
		hkPadSpu<float> m_invDeltaTime;  // 0C?
	};
}
