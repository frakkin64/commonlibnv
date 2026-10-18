#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpCollidable.h"

namespace RE
{
	class hkpAgentNnEntry;

	class hkpLinkedCollidable :
		public hkpCollidable  // 00
	{
	public:
		class CollisionEntry;

		class CollisionEntry
		{
		public:
			// members
			hkpAgentNnEntry*     m_agentEntry;  // 00?
			hkpLinkedCollidable* m_partner;     // 04?
		};

		// members
		hkArray<hkpLinkedCollidable::CollisionEntry, hkContainerHeapAllocator> m_collisionEntries;  // 50?
	};
}
