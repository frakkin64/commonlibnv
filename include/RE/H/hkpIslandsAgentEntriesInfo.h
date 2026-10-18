#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpAgentNnEntryJob;
	class hkpSimulationIsland;

	class hkpIslandsAgentEntriesInfo
	{
	public:
		// members
		hkpSimulationIsland* m_island;              // 00?
		std::int32_t         m_numEntries;          // 04?
		std::int32_t         m_firstEntryIdx;       // 08?
		std::int32_t         m_nextEntryIdx;        // 0C?
		hkpAgentNnEntryJob*  m_ppuAgentNnEntryJob;  // 10?
		hkpAgentNnEntryJob*  m_spuAgentNnEntryJob;  // 14?
	};
}
