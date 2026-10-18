#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkActionCinfo.h"

namespace RE
{
	class hkpRigidBody;

	class hkUnaryActionCinfo :
		public hkActionCinfo  // 00
	{
	public:
		// members
		hkpRigidBody* m_body;  // 04?
	};
}
