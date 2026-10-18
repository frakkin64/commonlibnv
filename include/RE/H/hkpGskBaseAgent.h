#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkpGskCache.h"
#include "RE/H/hkpIterativeLinearCastAgent.h"

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

	class alignas(16) hkpGskBaseAgent :
		public hkpIterativeLinearCastAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpGskBaseAgent };
		static constexpr auto VTABLE{ VTABLE::hkpGskBaseAgent };

		// override (hkpIterativeLinearCastAgent)
		virtual ~hkpGskBaseAgent() = default;  // 00

		// add
		virtual void getPenetrations(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector);                                         // 03
		virtual void getClosestPoints(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdPointCollector& collector);                                           // 04
		virtual void linearCast(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& collector, hkpCdPointCollector* startCollector);  // 05
		virtual void processCollision(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& result);                                 // 06
		virtual void cleanup(hkpConstraintOwner& constraintOwner);                                                                                                                               // 07
		virtual void updateShapeCollectionFilter(hkpCdBody const& bodyA, hkpCdBody const& listShapeBodyB, hkpCollisionInput const& input, hkpConstraintOwner& constraintOwner);                  // 08
		virtual void invalidateTim(hkpCollisionInput const& input);                                                                                                                              // 09
		virtual void warpTime(float oldTime, float newTime, hkpCollisionInput const& input);                                                                                                     // 0A
		virtual void removePoint(std::uint16_t idToRemove);                                                                                                                                      // 0B
		virtual void commitPotential(std::uint16_t idToCommit);                                                                                                                                  // 0C
		virtual void createZombie(std::uint16_t idTobecomeZombie);                                                                                                                               // 0D

		// members
		// not placed: m_timeOfSeparatingNormal(overlap)
		hkpGskCache m_cache;               // 0C
		float       m_allowedPenetration;  // 1C
		hkVector4   m_separatingNormal;    // 20
	};
	static_assert(sizeof(hkpGskBaseAgent) == 0x30);
}
