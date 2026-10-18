#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class DecalVertex
	{
	public:
		// members
		NiPoint3      fVert;   // 00?
		std::int16_t  iIndex;  // 0C?
		std::uint16_t pad0E;   // 0E
	};
}
