#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkpContactPointAddedEvent_Type.h"

namespace RE
{
	class hkContactPoint;
	class hkpCollidable;
	class hkpContactPointProperties;
	class hkpEntity;
	class hkpSimpleContactConstraintData;

	class hkpContactPointConfirmedEvent
	{
	public:
		// members
		const hkpCollidable*                                       m_collidableA;             // 00?
		const hkpCollidable*                                       m_collidableB;             // 04?
		hkpEntity*                                                 m_callbackFiredFrom;       // 08?
		hkContactPoint*                                            m_contactPoint;            // 0C?
		hkpContactPointProperties*                                 m_contactPointProperties;  // 10?
		float                                                      m_rotateNormal;            // 14?
		float                                                      m_projectedVelocity;       // 18?
		const hkEnum<hkpContactPointAddedEvent_Type, std::int32_t> m_type;                    // 1C?
		const hkpSimpleContactConstraintData*                      m_contactData;             // 20?
	};
}
