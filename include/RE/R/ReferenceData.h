#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class ReferenceData
	{
	public:
		// members
		std::uint32_t iLocationID;  // 00?
		NiPoint3      Loc;          // 04?
		NiPoint3      Angle;        // 10?
	};
}
