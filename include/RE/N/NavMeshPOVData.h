#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NavMeshPOVEdge.h"

namespace RE
{
	class NavMeshPOVData
	{
	public:
		// members
		NavMeshPOVEdge Edge1;  // 00?
		NavMeshPOVEdge Edge2;  // 02?
	};
}
