#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkpConstraintOwner;
	class hkpContactPointProperties;
	class hkpDynamicsContactMgr;
	class hkpEntity;

	class hkpContactPointRemovedEvent
	{
	public:
		// members
		std::uint16_t              m_contactPointId;          // 00?
		std::uint16_t              pad02;                     // 02
		hkpContactPointProperties* m_contactPointProperties;  // 04?
		hkpEntity*                 m_entityA;                 // 08?
		hkpEntity*                 m_entityB;                 // 0C?
		hkpEntity*                 m_callbackFiredFrom;       // 10?
		hkpDynamicsContactMgr*     m_internalContactMgr;      // 14?
		hkpConstraintOwner*        m_constraintOwner;         // 18?
	};
}
