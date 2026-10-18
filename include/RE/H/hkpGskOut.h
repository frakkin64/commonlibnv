#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkPadSpu.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpGskOut
	{
	public:
		// members
		hkVector4       m_normalInA;  // 00?
		hkVector4       m_pointAinA;  // 10?
		hkPadSpu<float> m_distance;   // 20?
		std::uint8_t    pad24[0xC];   // 24
	};
}
