#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class NavMeshVertex
	{
	public:
		// members
		NiPoint3 Location;  // 00
	};
	static_assert(sizeof(NavMeshVertex) == 0xC);
}
