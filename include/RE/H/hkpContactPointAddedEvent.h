#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkpContactPointAccept.h"
#include "RE/H/hkpContactPointAddedEvent_Type.h"

namespace RE
{
	class hkContactPoint;
	class hkpCdBody;
	class hkpContactPointProperties;
	class hkpDynamicsContactMgr;
	class hkpEntity;
	class hkpGskCache;
	class hkpProcessCollisionInput;
	class hkpProcessCollisionOutput;

	class hkpContactPointAddedEvent
	{
	public:
		using Type = hkpContactPointAddedEvent_Type;

		// members
		const hkpCdBody*                                           m_bodyA;                   // 00
		const hkpCdBody*                                           m_bodyB;                   // 04
		const hkEnum<hkpContactPointAddedEvent_Type, std::int32_t> m_type;                    // 08
		hkpEntity*                                                 m_callbackFiredFrom;       // 0C
		const hkContactPoint*                                      m_contactPoint;            // 10
		const hkpGskCache*                                         m_gskCache;                // 14
		hkpContactPointProperties*                                 m_contactPointProperties;  // 18
		float                                                      m_projectedVelocity;       // 1C
		hkpContactPointAccept                                      m_status;                  // 20?
		hkpDynamicsContactMgr*                                     m_internalContactMgr;      // 24?
		const hkpProcessCollisionInput*                            m_collisionInput;          // 28?
		hkpProcessCollisionOutput*                                 m_collisionOutput;         // 2C?
	};
}
