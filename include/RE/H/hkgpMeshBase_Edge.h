#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkgpMeshBase_Triangle.h"
#include "RE/H/hkgpMeshBase_Vertex.h"
#include "RE/H/hkgpTopology_Edge.h"

namespace RE
{
	class hkgpMeshBase_Edge :
		public hkgpTopology_Edge<hkgpMeshBase_Edge, hkgpMeshBase_Vertex, hkgpMeshBase_Triangle, hkgpMeshBase_Vertex*>  // 00
	{
	public:
	};
}
