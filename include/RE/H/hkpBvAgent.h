#pragma once

#include "NVSE/Impl/Windows.h"

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

	class hkpBvAgent :
		public hkpCollisionAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpBvAgent };
		static constexpr auto VTABLE{ VTABLE::hkpBvAgent };

		// override (hkpCollisionAgent)
		virtual ~hkpBvAgent() = default;  // 00

		// add
		virtual void getPenetrations(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector);                                            // 03
		virtual void getClosestPoints(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdPointCollector& collector);                                              // 04
		virtual void linearCast(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& pointDetails, hkpCdPointCollector* startCollector);  // 05
		virtual void processCollision(hkpCdBody const& bodyAin, hkpCdBody const& bodyB, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& result);                                  // 06
		virtual void cleanup(hkpConstraintOwner& constraintOwner);                                                                                                                                  // 07
		virtual void updateShapeCollectionFilter(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpConstraintOwner& constraintOwner);                              // 08
		virtual void invalidateTim(hkpCollisionInput const& input);                                                                                                                                 // 09
		virtual void warpTime(float a_arg1, float a_arg2, hkpCollisionInput const& a_arg3);                                                                                                         // 0A
		virtual void removePoint(std::uint16_t idToRemove);                                                                                                                                         // 0B
		virtual void commitPotential(std::uint16_t newId);                                                                                                                                          // 0C
		virtual void createZombie(std::uint16_t idTobecomeZombie);                                                                                                                                  // 0D

		static void staticLinearCast(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& pointDetails, hkpCdPointCollector* startCollector)
		{
			using func_t = decltype(&hkpBvAgent::staticLinearCast);
			static REL::Relocation<func_t> func{ Offsets::hkpBvAgent::staticLinearCast };
			func(bodyA, bodyB, input, pointDetails, startCollector);
		}

		static void staticGetClosestPoints(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdPointCollector& collector)
		{
			using func_t = decltype(&hkpBvAgent::staticGetClosestPoints);
			static REL::Relocation<func_t> func{ Offsets::hkpBvAgent::staticGetClosestPoints };
			func(bodyA, bodyB, input, collector);
		}

		static void staticGetPenetrations(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector)
		{
			using func_t = decltype(&hkpBvAgent::staticGetPenetrations);
			static REL::Relocation<func_t> func{ Offsets::hkpBvAgent::staticGetPenetrations };
			func(bodyA, bodyB, input, collector);
		}

	public:
		// members
		hkpCollisionAgent* m_boundingVolumeAgent;  // 0C
		hkpCollisionAgent* m_childAgent;           // 10
	};
}
