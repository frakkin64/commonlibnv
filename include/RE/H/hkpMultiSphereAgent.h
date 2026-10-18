#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkInplaceArray.h"
#include "RE/H/hkpCollisionAgent.h"

namespace RE
{
	class hkpCdBody;
	class hkpCdBodyPairCollector;
	class hkpCdPointCollector;
	class hkpCollisionInput;
	class hkpConstraintOwner;
	class hkpLinearCastCollisionInput;
	class hkpProcessCollisionInput;
	class hkpProcessCollisionOutput;

	class hkpMultiSphereAgent :
		public hkpCollisionAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMultiSphereAgent };
		static constexpr auto VTABLE{ VTABLE::hkpMultiSphereAgent };

		class KeyAgentPair;

		class KeyAgentPair
		{
		public:
			// members
			std::uint32_t      m_key;    // 00?
			hkpCollisionAgent* m_agent;  // 04?
		};

		// override (hkpCollisionAgent)
		virtual ~hkpMultiSphereAgent() = default;  // 00

		// add
		virtual void getPenetrations(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector);                                         // 03
		virtual void getClosestPoints(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdPointCollector& collector);                                           // 04
		virtual void linearCast(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& collector, hkpCdPointCollector* startCollector);  // 05
		virtual void processCollision(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& result);                                 // 06
		virtual void cleanup(hkpConstraintOwner& info);                                                                                                                                          // 07
		virtual void Unk_08();                                                                                                                                                                   // 08
		virtual void Unk_09();                                                                                                                                                                   // 09
		virtual void Unk_0A();                                                                                                                                                                   // 0A
		virtual void Unk_0B();                                                                                                                                                                   // 0B
		virtual void Unk_0C();                                                                                                                                                                   // 0C
		virtual void Unk_0D();                                                                                                                                                                   // 0D

		// members
		hkInplaceArray<hkpMultiSphereAgent::KeyAgentPair, 4, hkContainerHeapAllocator> m_agents;  // 0C?
	};
}
