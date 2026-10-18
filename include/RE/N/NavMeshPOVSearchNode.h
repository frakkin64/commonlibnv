#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ANGLE_DIRECTION.h"

namespace RE
{
	class NavMeshPOV;

	// not confirmed: no named code in the executable refers to this type
	class NavMeshPOVSearchNode
	{
	public:
		// members
		NavMeshPOV*     pPOV;          // 00?
		ANGLE_DIRECTION Direction;     // 04?
		std::uint32_t   iMasterIndex;  // 08?
	};
}
