#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkUFloat8.h"

namespace RE
{
	class hkContactPointMaterial
	{
	public:
		// members
		std::uint32_t m_userData;     // 00?
		hkUFloat8     m_friction;     // 04?
		std::uint8_t  m_restitution;  // 05?
		hkUFloat8     m_maxImpulse;   // 06?
		std::uint8_t  m_flags;        // 07?
	};
}
