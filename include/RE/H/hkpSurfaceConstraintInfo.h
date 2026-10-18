#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpSurfaceConstraintInfo
	{
	public:
		// members
		hkVector4    m_plane;                    // 00?
		hkVector4    m_velocity;                 // 10?
		float        m_staticFriction;           // 20?
		float        m_extraUpStaticFriction;    // 24?
		float        m_extraDownStaticFriction;  // 28?
		float        m_dynamicFriction;          // 2C?
		std::int32_t m_priority;                 // 30?
		std::uint8_t pad34[0xC];                 // 34
	};
}
