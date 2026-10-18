#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NavMeshClosedDoorInfo
	{
	public:
		// members
		std::uint32_t DoorFormID;      // 00?
		std::uint16_t iTriangleIndex;  // 04?
		std::uint16_t pad06;           // 06
	};
}
