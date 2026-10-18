#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NavMeshEdgeHandle.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NavMeshEdgeLocation :
		public NavMeshEdgeHandle  // 00
	{
	public:
		// members
		NiPoint3 Location;  // 0C
	};
	static_assert(sizeof(NavMeshEdgeLocation) == 0x18);
}
