#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpCollisionAgentConfig
	{
	public:
		// members
		float        m_iterativeLinearCastEarlyOutDistance;  // 00?
		std::int32_t m_iterativeLinearCastMaxIterations;     // 04?
	};
}
