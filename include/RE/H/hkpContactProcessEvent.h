#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpCollidable;
	class hkpContactPointProperties;
	class hkpDynamicsContactMgr;
	class hkpEntity;
	class hkpProcessCollisionData;

	class hkpContactProcessEvent
	{
	public:
		// members
		const hkpCollidable*       m_collidableA;                  // 00?
		const hkpCollidable*       m_collidableB;                  // 04?
		hkpEntity*                 m_callbackFiredFrom;            // 08?
		hkpProcessCollisionData*   m_collisionData;                // 0C?
		hkpContactPointProperties* m_contactPointProperties[256];  // 10?
		hkpDynamicsContactMgr*     m_internalContactMgr;           // 410?
	};
}
