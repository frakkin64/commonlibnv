#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkJobQueueHwSetup.h"

namespace RE
{
	class hkJobQueueCinfo
	{
	public:
		// members
		hkJobQueueHwSetup m_jobQueueHwSetup;  // 00?
		std::int32_t      m_maxNumJobTypes;   // 18?
	};
}
