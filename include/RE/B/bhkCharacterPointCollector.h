#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpAllCdPointCollector.h"
#include "RE/H/hkpRootCdPoint.h"

namespace RE
{
	class hkpWorldObject;

	class alignas(16) bhkCharacterPointCollector :
		public hkpAllCdPointCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkCharacterPointCollector };
		static constexpr auto VTABLE{ VTABLE::bhkCharacterPointCollector };

		enum class bhkCollisionObjectState : std::int32_t
		{
			kCOLLISION_OBJECT_NEW = 0x0,
			kCOLLISION_OBJECT_REMOVED = 0x1,
			kCOLLISION_OBJECT_UNTOUCHED = 0x2,
		};

		// members
		const bhkCharacterPointCollector*                                                      pStartCollector;     // 3A0?
		hkArray<hkpWorldObject*, hkContainerHeapAllocator>                                     m_collidingObjects;  // 3A4?
		hkArray<bhkCharacterPointCollector::bhkCollisionObjectState, hkContainerHeapAllocator> m_collisionStates;   // 3B0?
		hkArray<hkpRootCdPoint, hkContainerHeapAllocator>                                      m_collisionPoints;   // 3BC?
		std::uint8_t                                                                           pad3C8[0x8];         // 3C8
	};
}
