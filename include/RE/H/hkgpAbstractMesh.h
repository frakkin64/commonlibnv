#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkGeometryProcessing_PoolAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkgpAbstractMeshDefinitions_List.h"
#include "RE/H/hkgpConvexHull_Vertex.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T, class U, class V, class W>
	class hkgpAbstractMesh :
		public hkReferencedObject  // 00
	{
	public:
		class EdgeIterator
		{
		public:
			// members
			T m_edge;
		};

		// override (hkReferencedObject)
		virtual ~hkgpAbstractMesh() = default;  // 00

		// add
		virtual void reset();  // 03

		// members
		hkgpAbstractMeshDefinitions_List<U, typename hkgpAbstractMeshDefinitions_List<U, hkgpConvexHull_Vertex, hkGeometryProcessing_PoolAllocator<U, 32, W>>::Item, hkGeometryProcessing_PoolAllocator<U, 32, W>> m_vertices;
		hkgpAbstractMeshDefinitions_List<V, typename hkgpAbstractMeshDefinitions_List<U, hkgpConvexHull_Vertex, hkGeometryProcessing_PoolAllocator<U, 32, W>>::Item, hkGeometryProcessing_PoolAllocator<V, 32, W>> m_triangles;
	};
}
