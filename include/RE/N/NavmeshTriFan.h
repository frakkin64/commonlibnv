#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FastNavMeshTriHandle.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NavmeshTriFan
	{
	public:
		// members
		FastNavMeshTriHandle hTri;          // 00?
		bool                 bInradius[3];  // 08?
		std::uint8_t         pad0B;         // 0B
	};
}
