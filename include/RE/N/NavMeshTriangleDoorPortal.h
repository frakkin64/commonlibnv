#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESObjectREFR;

	// not confirmed: no named code in the executable refers to this type
	class NavMeshTriangleDoorPortal
	{
	public:
		// members
		TESObjectREFR* pDoorForm;             // 00?
		std::uint16_t  iOwningTriangleIndex;  // 04?
		std::uint16_t  pad06;                 // 06
	};
}
