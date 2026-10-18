#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabb.h"
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
	class hkpContactMgr;
	class hkpLinearCastCollisionInput;
	class hkpProcessCollisionInput;
	class hkpProcessCollisionOutput;

	class alignas(16) hkpBvTreeStreamAgent :
		public hkpCollisionAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpBvTreeStreamAgent };
		static constexpr auto VTABLE{ VTABLE::hkpBvTreeStreamAgent };

		// override (hkpCollisionAgent)
		virtual ~hkpBvTreeStreamAgent() = default;  // 00

		// add
		virtual void getPenetrations(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector);                                         // 03
		virtual void getClosestPoints(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdPointCollector& collector);                                           // 04
		virtual void linearCast(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& collector, hkpCdPointCollector* startCollector);  // 05
		virtual void processCollision(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& output);                                 // 06
		virtual void cleanup(hkpConstraintOwner& info);                                                                                                                                          // 07
		virtual void updateShapeCollectionFilter(hkpCdBody const& bodyA, hkpCdBody const& collectionBodyB, hkpCollisionInput const& input, hkpConstraintOwner& constraintOwner);                 // 08
		virtual void invalidateTim(hkpCollisionInput const& input);                                                                                                                              // 09
		virtual void warpTime(float oldTime, float newTime, hkpCollisionInput const& input);                                                                                                     // 0A
		virtual void Unk_0B();                                                                                                                                                                   // 0B
		virtual void Unk_0C();                                                                                                                                                                   // 0C
		virtual void Unk_0D();                                                                                                                                                                   // 0D

	protected:
		hkpBvTreeStreamAgent* ctor(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpContactMgr* mgr)
		{
			using func_t = hkpBvTreeStreamAgent*(__thiscall*)(hkpBvTreeStreamAgent*, hkpCdBody const&, hkpCdBody const&, hkpCollisionInput const&, hkpContactMgr*);
			static REL::Relocation<func_t> func{ Offsets::hkpBvTreeStreamAgent::ctor };
			return func(this, bodyA, bodyB, input, mgr);
		}

	public:
		// members
		hkpCollisionDispatcher* m_dispatcher;  // 0C
		hkAabb                  m_cachedAabb;  // 10
		hkpAgent1nTrack         m_agentTrack;  // 30
		std::uint32_t           pad3C;         // 3C
	};
}
