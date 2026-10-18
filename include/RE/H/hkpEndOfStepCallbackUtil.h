#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpCollisionEvent_CallbackSource.h"
#include "RE/H/hkpWorldPostSimulationListener.h"

namespace RE
{
	class hkpContactListener;
	class hkpSimpleConstraintContactMgr;

	class hkpEndOfStepCallbackUtil :
		public hkReferencedObject,  // 00
		public hkpWorldPostSimulationListener  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpEndOfStepCallbackUtil };
		static constexpr auto VTABLE{ VTABLE::hkpEndOfStepCallbackUtil };

		class Collision;
		class NewCollision;

		class Collision
		{
		public:
			// members
			hkpSimpleConstraintContactMgr*   m_mgr;       // 00?
			hkpContactListener*              m_listener;  // 04?
			hkpCollisionEvent_CallbackSource m_source;    // 08?
		};

		class NewCollision :
			public hkpEndOfStepCallbackUtil::Collision  // 00
		{
		public:
			// members
			std::int32_t m_sequenceNumber;  // 0C?
		};

		// override (hkReferencedObject)
		virtual ~hkpEndOfStepCallbackUtil() = default;  // 00

		hkpEndOfStepCallbackUtil* ctor()
		{
			using func_t = hkpEndOfStepCallbackUtil*(__thiscall*)(hkpEndOfStepCallbackUtil*);
			static REL::Relocation<func_t> func{ Offsets::hkpEndOfStepCallbackUtil::ctor };
			return func(this);
		}

	public:
		// members
		std::int32_t                                                              m_sequenceNumber;      // 0C?
		hkBool                                                                    m_deterministicOrder;  // 10?
		std::uint8_t                                                              pad11[0x3];            // 11
		hkArray<hkpEndOfStepCallbackUtil::Collision, hkContainerHeapAllocator>    m_collisions;          // 14?
		hkArray<hkpEndOfStepCallbackUtil::NewCollision, hkContainerHeapAllocator> m_newCollisions;       // 20?
		hkArray<hkpEndOfStepCallbackUtil::Collision, hkContainerHeapAllocator>    m_removedCollisions;   // 2C?
	};
}
