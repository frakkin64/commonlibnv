#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContactPoint.h"
#include "RE/H/hkContactPointPropertiesWithExtendedUserData16.h"
#include "RE/H/hkGskCache16.h"
#include "RE/H/hkPadSpu.h"

namespace RE
{
	class alignas(16) hkpProcessCollisionData_ToiInfo
	{
	public:
		// members
		hkContactPoint                                 m_contactPoint;        // 00?
		hkPadSpu<float>                                m_time;                // 20?
		hkPadSpu<float>                                m_seperatingVelocity;  // 24?
		hkGskCache16                                   m_gskCache;            // 28?
		hkContactPointPropertiesWithExtendedUserData16 m_properties;          // 38?
		std::uint8_t                                   pad68[0x8];            // 68
	};
}
