#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkTransform.h"
#include "RE/H/hkpMoppQueryObject.h"

namespace RE
{
	class alignas(16) hkMoppPlanesQueryObject :
		public hkpMoppQueryObject  // 00
	{
	public:
		// members
		std::int32_t m_numTransforms;     // 10?
		std::uint8_t pad14[0xC];          // 14
		hkTransform  m_rotatedPlanes[8];  // 20?
		hkTransform  m_absRotPlanes[8];   // 220?
	};
}
