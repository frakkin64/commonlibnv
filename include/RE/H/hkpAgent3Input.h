#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkPadSpu.h"
#include "RE/H/hkTransform.h"

namespace RE
{
	class hkpCdBody;
	class hkpContactMgr;
	class hkpProcessCollisionInput;

	class alignas(16) hkpAgent3Input
	{
	public:
		// members
		hkPadSpu<hkpCdBody const*>                m_bodyA;          // 00?
		hkPadSpu<hkpCdBody const*>                m_bodyB;          // 04?
		hkPadSpu<hkpCdBody const*>                m_overrideBodyA;  // 08?
		hkPadSpu<hkpProcessCollisionInput const*> m_input;          // 0C?
		hkPadSpu<hkpContactMgr*>                  m_contactMgr;     // 10?
		std::uint8_t                              pad14[0xC];       // 14
		hkTransform                               m_aTb;            // 20?
	};
}
