#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkpPredGskfAgent.h"

namespace RE
{
	class hkpCdBody;
	class hkpCdBodyPairCollector;
	class hkpCdPointCollector;
	class hkpCollisionDispatcher;
	class hkpCollisionInput;
	class hkpConstraintOwner;
	class hkpLinearCastCollisionInput;
	class hkpProcessCollisionInput;
	class hkpProcessCollisionOutput;

	class alignas(16) hkpConvexListAgent :
		public hkpPredGskfAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConvexListAgent };
		static constexpr auto VTABLE{ VTABLE::hkpConvexListAgent };

		// override (hkpPredGskfAgent)
		virtual ~hkpConvexListAgent() = default;                                                                                                                                                          // 00
		virtual void getPenetrations(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector) override;                                         // 03
		virtual void getClosestPoints(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdPointCollector& collector) override;                                           // 04
		virtual void linearCast(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& collector, hkpCdPointCollector* startCollector) override;  // 05
		virtual void processCollision(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& result) override;                                 // 06
		virtual void cleanup(hkpConstraintOwner& constraintOwner) override;                                                                                                                               // 07
		virtual void updateShapeCollectionFilter(hkpCdBody const& bodyA, hkpCdBody const& listShapeBodyB, hkpCollisionInput const& input, hkpConstraintOwner& constraintOwner) override;                  // 08
		virtual void invalidateTim(hkpCollisionInput const& input) override;                                                                                                                              // 09
		virtual void warpTime(float oldTime, float newTime, hkpCollisionInput const& input) override;                                                                                                     // 0A
		virtual void removePoint(std::uint16_t idToRemove) override;                                                                                                                                      // 0B
		virtual void commitPotential(std::uint16_t idToCommit) override;                                                                                                                                  // 0C
		virtual void createZombie(std::uint16_t idTobecomeZombie) override;                                                                                                                               // 0D

		static void staticGetClosestPoints(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdPointCollector& collector)
		{
			using func_t = decltype(&hkpConvexListAgent::staticGetClosestPoints);
			static REL::Relocation<func_t> func{ Offsets::hkpConvexListAgent::staticGetClosestPoints };
			func(bodyA, bodyB, input, collector);
		}

		static void staticGetPenetrations(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector)
		{
			using func_t = decltype(&hkpConvexListAgent::staticGetPenetrations);
			static REL::Relocation<func_t> func{ Offsets::hkpConvexListAgent::staticGetPenetrations };
			func(bodyA, bodyB, input, collector);
		}

		static void staticLinearCast(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& collector, hkpCdPointCollector* startCollector)
		{
			using func_t = decltype(&hkpConvexListAgent::staticLinearCast);
			static REL::Relocation<func_t> func{ Offsets::hkpConvexListAgent::staticLinearCast };
			func(bodyA, bodyB, input, collector, startCollector);
		}

		static void registerAgent(hkpCollisionDispatcher* dispatcher)
		{
			using func_t = decltype(&hkpConvexListAgent::registerAgent);
			static REL::Relocation<func_t> func{ Offsets::hkpConvexListAgent::registerAgent };
			func(dispatcher);
		}

	public:
		// members
		hkpCollisionDispatcher* m_dispatcher;             // 80
		hkBool                  m_inGskMode;              // 84
		hkBool                  m_processFunctionCalled;  // 85?
		std::int16_t            m_inStreamModeCounter;    // 86?
		std::uint8_t            pad88[0x8];               // 88
	};
}
