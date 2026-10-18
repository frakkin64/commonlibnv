#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkMatrix3.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpMassProperties
	{
	public:
		// members
		float        m_volume;         // 00?
		float        m_mass;           // 04?
		std::uint8_t pad08[0x8];       // 08
		hkVector4    m_centerOfMass;   // 10?
		hkMatrix3    m_inertiaTensor;  // 20?
	};
}
