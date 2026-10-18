#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpShapeRayCastOutput.h"

namespace RE
{
	class alignas(16) hkpShapeRayBundleCastOutput
	{
	public:
		// members
		hkpShapeRayCastOutput m_outputs[4];  // 00?
	};
}
