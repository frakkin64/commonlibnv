#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpAgentEntry;
	class hkpProcessCdPoint;

	class hkpProcessCollisionOutput_ContactRef
	{
	public:
		// members
		hkpProcessCdPoint* m_contactPoint;  // 00?
		hkpAgentEntry*     m_agentEntry;    // 04?
		void*              m_agentData;     // 08?
	};
}
