#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiParticleInfo
	{
	public:
		// members
		NiPoint3      m_kVelocity;     // 00
		float         m_fAge;          // 0C?
		float         m_fLifeSpan;     // 10?
		float         m_fLastUpdate;   // 14?
		std::uint16_t m_usGeneration;  // 18?
		std::uint16_t m_usCode;        // 1A?
	};
}
