#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpSurfaceInfoDeprecated
	{
	public:
		// members
		hkBool       m_isSupported;      // 00?
		hkBool       m_isSliding;        // 01?
		std::uint8_t pad02[0xE];         // 02
		hkVector4    m_surfaceNormal;    // 10?
		hkVector4    m_surfaceVelocity;  // 20?
	};
}
