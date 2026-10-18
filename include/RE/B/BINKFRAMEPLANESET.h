#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BINKPLANE.h"

namespace RE
{
	class BINKFRAMEPLANESET
	{
	public:
		// members
		BINKPLANE YPlane;   // 00?
		BINKPLANE cRPlane;  // 0C?
		BINKPLANE cBPlane;  // 18?
		BINKPLANE APlane;   // 24?
	};
}
