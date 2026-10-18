#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpShapeRayCastInput.h"

namespace RE
{
	class alignas(16) hkpHeightFieldShape_hkpSphereCastInput :
		public hkpShapeRayCastInput  // 00
	{
	public:
		// members
		// not placed: m_radius(absent)
		float        m_maxExtraPenetration;  // 30
		std::uint8_t pad34[0xC];             // 34
	};
}
