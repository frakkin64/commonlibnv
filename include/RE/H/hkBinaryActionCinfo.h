#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkActionCinfo.h"

namespace RE
{
	class hkpRigidBody;

	class hkBinaryActionCinfo :
		public hkActionCinfo  // 00
	{
	public:
		// members
		hkpRigidBody* m_bodyA;  // 04?
		hkpRigidBody* m_bodyB;  // 08?
	};
}
