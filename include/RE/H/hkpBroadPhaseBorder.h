#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpPhantomOverlapListener.h"
#include "RE/H/hkpWorldCinfo_BroadPhaseBorderBehaviour.h"
#include "RE/H/hkpWorldDeletionListener.h"
#include "RE/H/hkpWorldPostSimulationListener.h"

namespace RE
{
	class hkpEntity;
	class hkpPhantom;
	class hkpWorld;

	class hkpBroadPhaseBorder :
		public hkReferencedObject,  // 00
		public hkpWorldDeletionListener,  // 08
		public hkpPhantomOverlapListener,  // 0C
		public hkpWorldPostSimulationListener  // 10
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpBroadPhaseBorder };
		static constexpr auto VTABLE{ VTABLE::hkpBroadPhaseBorder };

		hkpBroadPhaseBorder* ctor(hkpWorld* world, hkpWorldCinfo_BroadPhaseBorderBehaviour type, hkBool postponeAndSortCallbacks)
		{
			using func_t = hkpBroadPhaseBorder*(__thiscall*)(hkpBroadPhaseBorder*, hkpWorld*, hkpWorldCinfo_BroadPhaseBorderBehaviour, hkBool);
			static REL::Relocation<func_t> func{ Offsets::hkpBroadPhaseBorder::ctor };
			return func(this, world, type, postponeAndSortCallbacks);
		}

	public:
		// members
		hkpWorld*                                     m_world;                      // 14?
		hkpPhantom*                                   m_phantoms[6];                // 18?
		hkpWorldCinfo_BroadPhaseBorderBehaviour       m_type;                       // 30?
		hkBool                                        m_postponeAndSortCallbacks;   // 34?
		std::uint8_t                                  pad35[0x3];                   // 35
		hkArray<hkpEntity*, hkContainerHeapAllocator> m_entitiesExitingBroadPhase;  // 38?
	};
}
