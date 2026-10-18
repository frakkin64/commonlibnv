#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpAgentSectorHeader
	{
	public:
		// members
		std::int32_t m_numTotalTasks;  // 00?
		std::int32_t m_openJobs;       // 04?
		std::int32_t m_sizeOfJobInfo;  // 08?
	};
}
