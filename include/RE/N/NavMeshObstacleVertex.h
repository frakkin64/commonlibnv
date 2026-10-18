#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NavMeshObstacleVertex
	{
	public:
		// members
		std::uint16_t usVertexIndex;      // 00
		bool          bOnObstacle;        // 02
		bool          bOnBounds;          // 03
		bool          bOnOpenEdge;        // 04
		bool          bInOverlappedArea;  // 05
		bool          bInObstacleArea;    // 06
		std::uint8_t  pad07;              // 07
	};
	static_assert(sizeof(NavMeshObstacleVertex) == 0x8);
}
