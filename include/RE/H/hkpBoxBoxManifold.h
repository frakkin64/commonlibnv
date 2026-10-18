#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpFeatureContactPoint.h"

namespace RE
{
	class alignas(16) hkpBoxBoxManifold
	{
	public:
		// members
		hkpFeatureContactPoint m_contactPoints[8];           // 00?
		std::uint8_t           m_faceVertexFeatureCount;     // 20?
		std::uint8_t           m_numPoints;                  // 21?
		hkBool                 m_isComplete;                 // 22?
		hkBool                 m_manifoldNormalInitialized;  // 23?
		std::uint32_t          m_manifoldNormalB;            // 24?
		std::uint8_t           pad28[0x8];                   // 28
		hkVector4              m_manifoldNormalA;            // 30?
	};
}
