#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkpContactMgr_ToiAccept.h"
#include "RE/H/hkpContactMgr_Type.h"
#include "RE/H/hkpDynamicsContactMgr.h"
#include "RE/H/hkpReportContactMgr_Factory.h"

namespace RE
{
	class hkContactPoint;
	class hkpCdBody;
	class hkpCollidable;
	class hkpConstraintOwner;
	class hkpContactPointProperties;
	class hkpEntity;
	class hkpGskCache;
	class hkpProcessCollisionData;
	class hkpProcessCollisionInput;
	class hkpProcessCollisionOutput;
	class hkpRigidBody;
	class hkpToiEvent;

	class hkpReportContactMgr :
		public hkpDynamicsContactMgr  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpReportContactMgr };
		static constexpr auto VTABLE{ VTABLE::hkpReportContactMgr };

		using Factory = hkpReportContactMgr_Factory;

		// override (hkpDynamicsContactMgr)
		virtual ~hkpReportContactMgr() = default;  // 00

		// add
		virtual std::uint16_t addContactPointImpl(hkpCdBody const& a, hkpCdBody const& b, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& output, hkpGskCache const* contactCache, hkContactPoint& pcp);                                                                          // 03
		virtual hkResult reserveContactPointsImpl(std::int32_t numPoints);                                                                                                                                                                                                                          // 04
		virtual void removeContactPointImpl(std::uint16_t cpId, hkpConstraintOwner& info);                                                                                                                                                                                                          // 05
		virtual void processContactImpl(hkpCollidable const& a, hkpCollidable const& b, hkpProcessCollisionInput const& input, hkpProcessCollisionData& collisionData);                                                                                                                             // 06
		virtual hkpContactMgr_ToiAccept addToiImpl(hkpCdBody const& a, hkpCdBody const& b, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& output, float toi, hkContactPoint& cp, hkpGskCache const* gskCache, float& projectedVelocity, hkpContactPointProperties& properties);  // 07
		virtual void removeToiImpl(hkpConstraintOwner& constraintOwner, hkpContactPointProperties& properties);                                                                                                                                                                                     // 08
		virtual void cleanup();                                                                                                                                                                                                                                                                     // 09
		virtual void Unk_0A();                                                                                                                                                                                                                                                                      // 0A
		virtual void Unk_0B();                                                                                                                                                                                                                                                                      // 0B
		virtual void getAllContactPointIds(hkArray<std::uint16_t, hkContainerHeapAllocator>* a_arg1);                                                                                                                                                                                               // 0C
		virtual hkpContactMgr_Type getType();                                                                                                                                                                                                                                                       // 0D
		virtual void Unk_0E();                                                                                                                                                                                                                                                                      // 0E
		virtual void Unk_0F();                                                                                                                                                                                                                                                                      // 0F
		virtual void Unk_10();                                                                                                                                                                                                                                                                      // 10
		virtual void Unk_11();                                                                                                                                                                                                                                                                      // 11
		virtual void confirmToi(hkpToiEvent& event, float rotateNormal, hkArray<hkpEntity*, hkContainerHeapAllocator>& outToBeActivated);                                                                                                                                                           // 12

		// members
		hkpRigidBody* m_bodyA;                      // 10
		hkpRigidBody* m_bodyB;                      // 14
		std::int16_t  m_skipNextNprocessCallbacks;  // 18
		std::uint16_t pad1A;                        // 1A
	};
}
