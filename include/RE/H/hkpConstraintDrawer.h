#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkRotation.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpPrimitiveDrawer.h"

namespace RE
{
	class alignas(16) hkpConstraintDrawer
	{
	public:
		// members
		float              m_lineLength;       // 00
		float              m_arcRadius;        // 04
		float              m_pivotSize;        // 08
		float              m_arrowSize;        // 0C
		float              m_coneSize;         // 10
		float              m_planeSize;        // 14
		std::int32_t       m_numArcSegments;   // 18
		float              m_scale;            // 1C
		hkVector4          m_bodyAWPos;        // 20
		hkVector4          m_bodyBWPos;        // 30
		hkVector4          m_bodyAWPivot;      // 40
		hkVector4          m_bodyBWPivot;      // 50
		hkRotation         m_RA;               // 60
		hkRotation         m_RB;               // 90
		hkpPrimitiveDrawer m_primitiveDrawer;  // C0
		std::uint8_t       padC4[0xC];         // C4
	};
	static_assert(sizeof(hkpConstraintDrawer) == 0xD0);
}
