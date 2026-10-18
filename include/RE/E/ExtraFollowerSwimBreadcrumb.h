#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class ExtraFollowerSwimBreadcrumb
	{
	public:
		// members
		NiPoint3      StartLocation;   // 00?
		std::uint32_t StartNavMeshID;  // 0C?
		NiPoint3      EndLocation;     // 10?
		std::uint32_t EndNavMeshID;    // 1C?
		bool          bEnteringWater;  // 20?
		std::uint8_t  pad21[0x3];      // 21
	};
}
