#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkpConstraintInstance.h"
#include "RE/H/hkpContactMgr_ToiAccept.h"
#include "RE/H/hkpContactMgr_Type.h"
#include "RE/H/hkpDynamicsContactMgr.h"
#include "RE/H/hkpSimpleConstraintContactMgr_Factory.h"
#include "RE/H/hkpSimpleContactConstraintData.h"

namespace RE
{
	class hkContactPoint;
	class hkpBodyVelocity;
	class hkpCdBody;
	class hkpCollidable;
	class hkpConstraintOwner;
	class hkpContactPointProperties;
	class hkpEntity;
	class hkpGskCache;
	class hkpProcessCollisionData;
	class hkpProcessCollisionInput;
	class hkpProcessCollisionOutput;
	class hkpSimpleConstraintInfoInitInput;
	class hkpToiEvent;

	class hkpSimpleConstraintContactMgr :
		public hkpDynamicsContactMgr  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSimpleConstraintContactMgr };
		static constexpr auto VTABLE{ VTABLE::hkpSimpleConstraintContactMgr };

		using Factory = hkpSimpleConstraintContactMgr_Factory;

		// override (hkpDynamicsContactMgr)
		virtual ~hkpSimpleConstraintContactMgr() = default;  // 00

		// add
		virtual std::uint16_t addContactPointImpl(hkpCdBody const& a, hkpCdBody const& b, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& output, hkpGskCache const* contactCache, hkContactPoint& cp);                                                            // 03
		virtual hkResult reserveContactPointsImpl(std::int32_t numPoints);                                                                                                                                                                                                           // 04
		virtual void removeContactPointImpl(std::uint16_t cpId, hkpConstraintOwner& constraintOwner);                                                                                                                                                                                // 05
		virtual void processContactImpl(hkpCollidable const& a, hkpCollidable const& b, hkpProcessCollisionInput const& input, hkpProcessCollisionData& collisionData);                                                                                                              // 06
		virtual hkpContactMgr_ToiAccept addToiImpl(hkpCdBody const& a, hkpCdBody const& b, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& output, float a_arg5, hkContactPoint& a_arg6, hkpGskCache const* cp, float& toi, hkpContactPointProperties& gskCache);  // 07
		virtual void removeToiImpl(hkpConstraintOwner& constraintOwner, hkpContactPointProperties& properties);                                                                                                                                                                      // 08
		virtual void cleanup();                                                                                                                                                                                                                                                      // 09
		virtual hkpContactPointProperties* getContactPointProperties(std::uint16_t id);                                                                                                                                                                                              // 0A
		virtual hkContactPoint* getContactPoint(std::uint16_t id);                                                                                                                                                                                                                   // 0B
		virtual void getAllContactPointIds(hkArray<std::uint16_t, hkContainerHeapAllocator>* a_arg1) const;                                                                                                                                                                          // 0C
		virtual hkpContactMgr_Type getType();                                                                                                                                                                                                                                        // 0D
		virtual void toiCollisionResponseBeginCallback(hkContactPoint const& cp, hkpSimpleConstraintInfoInitInput& inA, hkpBodyVelocity& velA, hkpSimpleConstraintInfoInitInput& inB, hkpBodyVelocity& velB);                                                                        // 0E
		virtual void toiCollisionResponseEndCallback(hkContactPoint const& cp, float a_arg2, hkpSimpleConstraintInfoInitInput& a_arg3, hkpBodyVelocity& inA, hkpSimpleConstraintInfoInitInput& velA, hkpBodyVelocity& inB);                                                          // 0F
		virtual hkpConstraintInstance* getConstraintInstance();                                                                                                                                                                                                                      // 10
		virtual void fireCallbacksForEarliestToi(hkpToiEvent& event, float& rotateNormal);                                                                                                                                                                                           // 11
		virtual void confirmToi(hkpToiEvent& event, float rotateNormal, hkArray<hkpEntity*, hkContainerHeapAllocator>& outToBeActivated);                                                                                                                                            // 12

		// members
		std::uint16_t                  m_reservedContactPoints;      // 10
		std::uint16_t                  m_contactPointCallbackDelay;  // 12
		hkpSimpleContactConstraintData m_contactConstraintData;      // 14
		hkpConstraintInstance          m_constraint;                 // 44
		std::uint32_t                  m_pad[1];                     // 80?
	};
}
