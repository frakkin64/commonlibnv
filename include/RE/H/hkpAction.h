#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"

namespace RE
{
	class hkStepInfo;
	class hkpEntity;
	class hkpPhantom;
	class hkpSimulationIsland;
	class hkpWorld;

	class hkpAction :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpAction };
		static constexpr auto VTABLE{ VTABLE::hkpAction };

		// override (hkReferencedObject)
		virtual ~hkpAction() = default;  // 00

		// add
		virtual void applyAction(const hkStepInfo* a_arg1);                                                                                                   // 03
		virtual void getEntities(hkArray<hkpEntity*, hkContainerHeapAllocator>* a_arg1);                                                                      // 04
		virtual void getPhantoms(hkArray<hkpPhantom*, hkContainerHeapAllocator>& phantomsOut);                                                                // 05
		virtual void entityRemovedCallback(hkpEntity* a_arg1);                                                                                                // 06
		virtual hkpAction* clone(const hkArray<hkpEntity*, hkContainerHeapAllocator>* a_arg1, const hkArray<hkpPhantom*, hkContainerHeapAllocator>* a_arg2);  // 07

		// members
		hkpWorld*            m_world;     // 08
		hkpSimulationIsland* m_island;    // 0C
		std::uint32_t        m_userData;  // 10
		hkStringPtr          m_name;      // 14?
	};
}
