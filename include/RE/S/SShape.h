#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CSpeedTreeRT_ECollisionObjectType.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class SShape
	{
	public:
		// members
		CSpeedTreeRT_ECollisionObjectType m_eType;            // 00?
		float                             m_afPosition[3];    // 04?
		float                             m_afDimensions[3];  // 10?
	};
}
