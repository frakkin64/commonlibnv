#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NavMeshVertex;

	// not confirmed: no named code in the executable refers to this type
	class NavMeshEdgeVertices
	{
	public:
		// members
		NavMeshVertex* Vertices[2];  // 00?
	};
}
