#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkpPhysicsSystem;
	class hkpWorldCinfo;

	class hkpPhysicsData :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPhysicsData };
		static constexpr auto VTABLE{ VTABLE::hkpPhysicsData };

		class SplitPhysicsSystemsOutput;

		class SplitPhysicsSystemsOutput
		{
		public:
			// members
			hkpPhysicsSystem*                                    m_unconstrainedFixedBodies;      // 00?
			hkpPhysicsSystem*                                    m_unconstrainedKeyframedBodies;  // 04?
			hkpPhysicsSystem*                                    m_unconstrainedMovingBodies;     // 08?
			hkpPhysicsSystem*                                    m_phantoms;                      // 0C?
			hkArray<hkpPhysicsSystem*, hkContainerHeapAllocator> m_constrainedSystems;            // 10?
		};

		// override (hkReferencedObject)
		virtual ~hkpPhysicsData() = default;  // 00

		static void splitPhysicsSystems(hkpPhysicsSystem const* inputSystemConst, hkpPhysicsData::SplitPhysicsSystemsOutput& output)
		{
			using func_t = decltype(&hkpPhysicsData::splitPhysicsSystems);
			static REL::Relocation<func_t> func{ Offsets::hkpPhysicsData::splitPhysicsSystems };
			func(inputSystemConst, output);
		}

	public:
		// members
		hkpWorldCinfo*                                       m_worldCinfo;  // 08?
		hkArray<hkpPhysicsSystem*, hkContainerHeapAllocator> m_systems;     // 0C?
	};
}
