#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpShapeRayCastCollectorOutput
	{
	public:
		// members
		hkVector4    m_normal;       // 00?
		float        m_hitFraction;  // 10?
		std::int32_t m_extraInfo;    // 14?
		std::int32_t m_pad[2];       // 18?
	};
}
