#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NavMeshEdgeHandle.h"

namespace RE
{
	class PortalEdgeSwap
	{
	public:
		// members
		NavMeshEdgeHandle hOldEdge;       // 00
		NavMeshEdgeHandle hNewEdge;       // 0C
		bool              bFromAddition;  // 18
		std::uint8_t      pad19[0x3];     // 19
	};
	static_assert(sizeof(PortalEdgeSwap) == 0x1C);
}
