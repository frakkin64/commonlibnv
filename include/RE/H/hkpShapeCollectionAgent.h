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

	class hkpShapeCollectionAgent :
		public hkpCollisionAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpShapeCollectionAgent };
		static constexpr auto VTABLE{ VTABLE::hkpShapeCollectionAgent };

		class KeyAgentPair;

		class KeyAgentPair
		{
		public:
			// members
			std::uint32_t      m_key;    // 00?
			hkpCollisionAgent* m_agent;  // 04?
		};

		// override (hkpCollisionAgent)
		virtual ~hkpShapeCollectionAgent() = default;  // 00

		// add
		virtual void getPenetrations(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector);                                         // 03
		virtual void getClosestPoints(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdPointCollector& collector);                                           // 04
		virtual void linearCast(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& collector, hkpCdPointCollector* startCollector);  // 05
		virtual void processCollision(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& result);                                 // 06
		virtual void cleanup(hkpConstraintOwner& info);                                                                                                                                          // 07
		virtual void updateShapeCollectionFilter(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpConstraintOwner& constraintOwner);                           // 08
		virtual void invalidateTim(hkpCollisionInput const& input);                                                                                                                              // 09
		virtual void warpTime(float a_arg1, float a_arg2, hkpCollisionInput const& a_arg3);                                                                                                      // 0A
		virtual void Unk_0B();                                                                                                                                                                   // 0B
		virtual void Unk_0C();                                                                                                                                                                   // 0C
		virtual void Unk_0D();                                                                                                                                                                   // 0D

		static void staticGetClosestPoints(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdPointCollector& collector)
		{
			using func_t = decltype(&hkpShapeCollectionAgent::staticGetClosestPoints);
			static REL::Relocation<func_t> func{ Offsets::hkpShapeCollectionAgent::staticGetClosestPoints };
			func(bodyA, bodyB, input, collector);
		}

		static void staticLinearCast(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& collector, hkpCdPointCollector* startCollector)
		{
			using func_t = decltype(&hkpShapeCollectionAgent::staticLinearCast);
			static REL::Relocation<func_t> func{ Offsets::hkpShapeCollectionAgent::staticLinearCast };
			func(bodyA, bodyB, input, collector, startCollector);
		}

		static void staticGetPenetrations(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector)
		{
			using func_t = decltype(&hkpShapeCollectionAgent::staticGetPenetrations);
			static REL::Relocation<func_t> func{ Offsets::hkpShapeCollectionAgent::staticGetPenetrations };
			func(bodyA, bodyB, input, collector);
		}

	public:
		// members
		hkInplaceArray<hkpShapeCollectionAgent::KeyAgentPair, 4, hkContainerHeapAllocator> m_agents;  // 0C?
	};
}
