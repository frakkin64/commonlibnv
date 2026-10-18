#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class hkpRayShapeCollectionFilter;

	class alignas(16) hkpShapeRayBundleCastInput
	{
	public:
		// members
		hkVector4                          m_from[3];                   // 00?
		hkVector4                          m_to[3];                     // 30?
		std::uint32_t                      m_filterInfo;                // 60?
		const hkpRayShapeCollectionFilter* m_rayShapeCollectionFilter;  // 64?
		std::uint8_t                       pad68[0x8];                  // 68
	};
}
