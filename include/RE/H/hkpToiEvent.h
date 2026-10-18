#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkContactPoint.h"
#include "RE/H/hkpContactPointProperties.h"

namespace RE
{
	class hkpDynamicsContactMgr;
	class hkpEntity;

	class alignas(16) hkpToiEvent
	{
	public:
		// members
		float                     m_time;                  // 00
		float                     m_seperatingVelocity;    // 04
		hkBool                    m_useSimpleHandling;     // 08
		std::uint8_t              pad09[0x3];              // 09
		hkpEntity*                m_entities[2];           // 0C
		hkpDynamicsContactMgr*    m_contactMgr;            // 14
		hkpContactPointProperties m_properties;            // 18?
		std::uint32_t             m_extendedUserDatas[7];  // 2C?
		std::uint8_t              pad48[0x8];              // 48
		hkContactPoint            m_contactPoint;          // 50?
	};
}
