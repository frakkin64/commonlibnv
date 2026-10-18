#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpAgent1nTrack.h"
#include "RE/H/hkpCollisionAgent.h"

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

	class hkpListAgent :
		public hkpCollisionAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpListAgent };
		static constexpr auto VTABLE{ VTABLE::hkpListAgent };

		// override (hkpCollisionAgent)
		virtual ~hkpListAgent() = default;  // 00

		// add
		virtual void getPenetrations(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector);                                         // 03
		virtual void getClosestPoints(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdPointCollector& collector);                                           // 04
		virtual void linearCast(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& collector, hkpCdPointCollector* startCollector);  // 05
		virtual void processCollision(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& output);                                 // 06
		virtual void cleanup(hkpConstraintOwner& constraintOwner);                                                                                                                               // 07
		virtual void updateShapeCollectionFilter(hkpCdBody const& bodyA, hkpCdBody const& listShapeBodyB, hkpCollisionInput const& input, hkpConstraintOwner& constraintOwner);                  // 08
		virtual void invalidateTim(hkpCollisionInput const& input);                                                                                                                              // 09
		virtual void warpTime(float oldTime, float newTime, hkpCollisionInput const& input);                                                                                                     // 0A
		virtual void Unk_0B();                                                                                                                                                                   // 0B
		virtual void Unk_0C();                                                                                                                                                                   // 0C
		virtual void Unk_0D();                                                                                                                                                                   // 0D

		// members
		hkpCollisionDispatcher* m_dispatcher;  // 0C
		hkpAgent1nTrack         m_agentTrack;  // 10
	};
}
