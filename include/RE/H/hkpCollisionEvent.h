#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpCollisionEvent_CallbackSource.h"

namespace RE
{
	class hkpRigidBody;
	class hkpSimpleConstraintContactMgr;

	class hkpCollisionEvent
	{
	public:
		using CallbackSource = hkpCollisionEvent_CallbackSource;

		// members
		hkpCollisionEvent_CallbackSource m_source;      // 00?
		hkpRigidBody*                    m_bodies[2];   // 04?
		hkpSimpleConstraintContactMgr*   m_contactMgr;  // 0C?
	};
}
