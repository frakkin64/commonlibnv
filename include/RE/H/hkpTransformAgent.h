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

	class hkpTransformAgent :
		public hkpCollisionAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpTransformAgent };
		static constexpr auto VTABLE{ VTABLE::hkpTransformAgent };

		// override (hkpCollisionAgent)
		virtual ~hkpTransformAgent() = default;  // 00

		// add
		virtual void getPenetrations(hkpCdBody const& bodyAin, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector);                                         // 03
		virtual void getClosestPoints(hkpCdBody const& bodyAin, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdPointCollector& pointDetails);                                        // 04
		virtual void linearCast(hkpCdBody const& bodyAin, hkpCdBody const& bodyB, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& collector, hkpCdPointCollector* startCollector);  // 05
		virtual void processCollision(hkpCdBody const& bodyAin, hkpCdBody const& bodyB, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& result);                                 // 06
		virtual void cleanup(hkpConstraintOwner& constraintOwner);                                                                                                                                 // 07
		virtual void updateShapeCollectionFilter(hkpCdBody const& bodyAin, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpConstraintOwner& constraintOwner);                           // 08
		virtual void invalidateTim(hkpCollisionInput const& input);                                                                                                                                // 09
		virtual void warpTime(float a_arg1, float a_arg2, hkpCollisionInput const& a_arg3);                                                                                                        // 0A
		virtual void removePoint(std::uint16_t idToRemove);                                                                                                                                        // 0B
		virtual void commitPotential(std::uint16_t newId);                                                                                                                                         // 0C
		virtual void createZombie(std::uint16_t idTobecomeZombie);                                                                                                                                 // 0D

		// members
		hkpCollisionAgent* m_childAgent;  // 0C
	};
}
