#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpAgentEntry
	{
	public:
		// members
		std::uint8_t m_streamCommand;     // 00?
		std::uint8_t m_agentType;         // 01?
		std::uint8_t m_numContactPoints;  // 02?
		std::uint8_t m_size;              // 03?
	};
}
