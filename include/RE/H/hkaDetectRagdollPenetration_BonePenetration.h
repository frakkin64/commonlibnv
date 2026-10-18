#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkaDetectRagdollPenetration_BonePenetration
	{
	public:
		// members
		std::int16_t m_boneBeginIndex;     // 00?
		std::int16_t m_boneEndIndex;       // 02?
		std::uint8_t pad04[0xC];           // 04
		hkVector4    m_penetrationPoint;   // 10?
		hkVector4    m_penetrationNormal;  // 20?
	};
}
