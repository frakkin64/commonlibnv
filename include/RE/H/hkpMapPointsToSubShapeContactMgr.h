#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkpContactMgr.h"
#include "RE/H/hkpContactMgr_ToiAccept.h"

namespace RE
{
	class hkContactPoint;
	class hkpCdBody;
	class hkpCollidable;
	class hkpConstraintOwner;
	class hkpContactPointProperties;
	class hkpGskCache;
	class hkpProcessCollisionData;
	class hkpProcessCollisionInput;
	class hkpProcessCollisionOutput;

	class hkpMapPointsToSubShapeContactMgr :
		public hkpContactMgr  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMapPointsToSubShapeContactMgr };
		static constexpr auto VTABLE{ VTABLE::hkpMapPointsToSubShapeContactMgr };

		// override (hkpContactMgr)
		virtual ~hkpMapPointsToSubShapeContactMgr() = default;  // 00

		// add
		virtual std::uint16_t addContactPointImpl(hkpCdBody const& a, hkpCdBody const& b, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& output, hkpGskCache const* contactCache, hkContactPoint& cp);                                                            // 03
		virtual hkResult reserveContactPointsImpl(std::int32_t numPoints);                                                                                                                                                                                                           // 04
		virtual void removeContactPointImpl(std::uint16_t cpId, hkpConstraintOwner& constraintOwner);                                                                                                                                                                                // 05
		virtual void processContactImpl(hkpCollidable const& a, hkpCollidable const& b, hkpProcessCollisionInput const& input, hkpProcessCollisionData& collisionData);                                                                                                              // 06
		virtual hkpContactMgr_ToiAccept addToiImpl(hkpCdBody const& a, hkpCdBody const& b, hkpProcessCollisionInput const& input, hkpProcessCollisionOutput& output, float a_arg5, hkContactPoint& a_arg6, hkpGskCache const* cp, float& toi, hkpContactPointProperties& gskCache);  // 07
		virtual void removeToiImpl(hkpConstraintOwner& constraintOwner, hkpContactPointProperties& properties);                                                                                                                                                                      // 08
		virtual void cleanup();                                                                                                                                                                                                                                                      // 09

		// members
		hkpContactMgr* m_contactMgr;       // 0C?
		hkBool         m_invalidPointHit;  // 10?
		std::uint8_t   pad11[0x3];         // 11
	};
}
