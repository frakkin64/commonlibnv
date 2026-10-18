#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabbTree.h"
#include "RE/H/hkAabbTreeData_hkAabbTreeAabb.h"
#include "RE/H/hkAabbTreeQueryUtils.h"

namespace RE
{
	class hkgpMesh_IConvexOverlap;
	class hkgpMesh_IConvexOverlap_IConvexShape;

	class hkgpMesh_CollideShapeTriangle :
		public hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Collector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkgpMesh_CollideShapeTriangle };
		static constexpr auto VTABLE{ VTABLE::hkgpMesh_CollideShapeTriangle };

		// override (hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Collector)
		virtual ~hkgpMesh_CollideShapeTriangle() = default;  // 00

		// add
		virtual float addLeaf(hkAabbTree<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Node const* leaf);  // 01

		// members
		float                                 m_minDist;           // 04?
		const hkgpMesh_IConvexOverlap*        m_ioverlap;          // 08?
		hkgpMesh_IConvexOverlap_IConvexShape* m_shape;             // 0C?
		bool                                  m_overlapping;       // 10?
		bool                                  m_allowPenetration;  // 11?
		std::uint16_t                         pad12;               // 12
	};
}
