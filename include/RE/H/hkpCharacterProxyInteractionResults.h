#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpCharacterObjectInteractionResult.h"

namespace RE
{
	class hkpRigidBody;

	class alignas(16) hkpCharacterProxyInteractionResults :
		public hkpCharacterObjectInteractionResult  // 00
	{
	public:
		// members
		hkpRigidBody* m_collidingBody;  // 20?
		std::uint8_t  pad24[0xC];       // 24
	};
}
