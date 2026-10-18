#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpAgentEntry.h"

namespace RE
{
	class hkpContactMgr;
	class hkpLinkedCollidable;

	class hkpAgentNnEntry :
		public hkpAgentEntry  // 00
	{
	public:
		// members
		std::uint16_t        m_agentIndexOnCollidable[2];  // 04?
		hkpContactMgr*       m_contactMgr;                 // 08?
		std::uint8_t         m_collisionQualityIndex;      // 0C?
		std::uint8_t         m_forceCollideOntoPpu;        // 0D?
		std::uint8_t         m_padding[2];                 // 0E?
		hkpLinkedCollidable* m_collidable[2];              // 10?
	};
}
