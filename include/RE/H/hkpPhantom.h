#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpPhantomType.h"
#include "RE/H/hkpWorldObject.h"

namespace RE
{
	class hkAabb;
	class hkBool;
	class hkpCollidable;
	class hkpPhantomListener;
	class hkpPhantomOverlapListener;

	class hkpPhantom :
		public hkpWorldObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPhantom };
		static constexpr auto VTABLE{ VTABLE::hkpPhantom };

		// override (hkpWorldObject)
		virtual ~hkpPhantom() = default;  // 00

		// add
		virtual hkpPhantomType getType();                                                           // 05
		virtual void calcAabb(hkAabb* a_arg1);                                                      // 06
		virtual void addOverlappingCollidable(hkpCollidable* a_arg1);                               // 07
		virtual hkBool* isOverlappingCollidableAdded(hkBool* a_arg1, const hkpCollidable* a_arg2);  // 08
		virtual void removeOverlappingCollidable(hkpCollidable* a_arg1);                            // 09
		virtual void ensureDeterministicOrder();                                                    // 0A
		virtual hkpPhantom* clone();                                                                // 0B
		virtual void updateShapeCollectionFilter();                                                 // 0C
		virtual void deallocateInternalArrays();                                                    // 0D

		// members
		hkArray<hkpPhantomOverlapListener*, hkContainerHeapAllocator> m_overlapListeners;  // 8C
		hkArray<hkpPhantomListener*, hkContainerHeapAllocator>        m_phantomListeners;  // 98?
	};
}
