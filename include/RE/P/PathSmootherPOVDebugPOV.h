#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class PathSmootherPOVDebugPOV
	{
	public:
		// members
		NiPoint3      Center;        // 00?
		float         fRadius;       // 0C?
		std::uint16_t iVertexIndex;  // 10?
		std::uint16_t pad12;         // 12
	};
}
