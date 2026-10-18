#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/E/EDGE_TYPE.h"
#include "RE/N/NavMeshEdgeHandle.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NavMeshObstacleVertex;
	class ObstacleData;

	class NavMeshObstacleEdge
	{
	public:
		// members
		NavMeshObstacleVertex*  pVerts[2];               // 00
		std::uint16_t           Triangles[2];            // 08
		std::uint16_t           TriangleEdges[2];        // 0C
		EDGE_TYPE               EdgeType;                // 10
		std::uint16_t           EdgeExtraInfoIndex;      // 14
		std::uint16_t           coverData;               // 16
		bool                    bLeftSide;               // 18
		bool                    bRightSide;              // 19
		std::uint16_t           pad1A;                   // 1A
		NiPointer<ObstacleData> spObstacle;              // 1C
		NavMeshEdgeHandle       hOriginalEdge;           // 20
		std::uint16_t           hOriginalEdgeExtraInfo;  // 2C
		bool                    bFromSplit;              // 2E
		std::uint8_t            pad2F;                   // 2F
	};
	static_assert(sizeof(NavMeshObstacleEdge) == 0x30);
}
