#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpCollisionAgent.h"
#include "RE/H/hkpShapeType.h"

namespace RE
{
	class hkpCdBody;
	class hkpCdBodyPairCollector;
	class hkpCdPointCollector;
	class hkpCollidable;
	class hkpCollisionInput;
	class hkpConstraintOwner;
	class hkpContactMgr;
	class hkpLinearCastCollisionInput;
	class hkpPhantomCallbackShape;
	class hkpProcessCollisionInput;
	class hkpProcessCollisionOutput;

	class hkpPhantomAgent :
		public hkpCollisionAgent  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPhantomAgent };
		static constexpr auto VTABLE{ VTABLE::hkpPhantomAgent };

		// override (hkpCollisionAgent)
		virtual ~hkpPhantomAgent() = default;  // 00

		// add
		virtual void getPenetrations(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdBodyPairCollector& collector);                                         // 03
		virtual void getClosestPoints(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpCollisionInput const& input, hkpCdPointCollector& pointDetails);                                        // 04
		virtual void linearCast(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpLinearCastCollisionInput const& input, hkpCdPointCollector& collector, hkpCdPointCollector* startCollector);  // 05
		virtual void processCollision(hkpCdBody const& bodyAin, hkpCdBody const& bodyB, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& result);                               // 06
		virtual void cleanup(hkpConstraintOwner& constraintOwner);                                                                                                                               // 07
		virtual void Unk_08();                                                                                                                                                                   // 08
		virtual void Unk_09();                                                                                                                                                                   // 09
		virtual void Unk_0A();                                                                                                                                                                   // 0A
		virtual void Unk_0B();                                                                                                                                                                   // 0B
		virtual void Unk_0C();                                                                                                                                                                   // 0C
		virtual void Unk_0D();                                                                                                                                                                   // 0D

	protected:
		hkpPhantomAgent* ctor(hkpCdBody const& bodyA, hkpCdBody const& bodyB, hkpContactMgr* contactMgr)
		{
			using func_t = hkpPhantomAgent*(__thiscall*)(hkpPhantomAgent*, hkpCdBody const&, hkpCdBody const&, hkpContactMgr*);
			static REL::Relocation<func_t> func{ Offsets::hkpPhantomAgent::ctor };
			return func(this, bodyA, bodyB, contactMgr);
		}

	public:
		// members
		const hkpCollidable*     m_collidableA;  // 0C?
		const hkpCollidable*     m_collidableB;  // 10?
		hkpPhantomCallbackShape* m_shapeA;       // 14?
		hkpPhantomCallbackShape* m_shapeB;       // 18?
		hkpShapeType             m_bodyTypeA;    // 1C?
		hkpShapeType             m_bodyTypeB;    // 20?
	};
}
