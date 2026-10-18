#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NavMeshTriHandle.h"

namespace RE
{
	class NavMeshEdgeHandle :
		public NavMeshTriHandle  // 00
	{
	public:
		// members
		std::int32_t iEdgeIndex;  // 08?
	};
}
