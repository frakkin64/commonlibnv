#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkpWorldRayCastInput
	{
	public:
		// members
		hkVector4     m_from;                         // 00
		hkVector4     m_to;                           // 10
		hkBool        m_enableShapeCollectionFilter;  // 20
		std::uint8_t  pad21[0x3];                     // 21
		std::uint32_t m_filterInfo;                   // 24
		std::uint8_t  pad28[0x8];                     // 28
	};
	static_assert(sizeof(hkpWorldRayCastInput) == 0x30);
}
