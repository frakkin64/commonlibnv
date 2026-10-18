#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabbTree.h"
#include "RE/H/hkAabbTreeData_hkAabbTreeAabb.h"
#include "RE/H/hkAabbTreeQueryUtils.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkgpMeshBase_Triangle;

	class alignas(16) hkgpMesh_NearestFeaturePolicy :
		public hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::ClosestPointCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkgpMesh_NearestFeaturePolicy };
		static constexpr auto VTABLE{ VTABLE::hkgpMesh_NearestFeaturePolicy };

		// override (hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::ClosestPointCollector)
		virtual ~hkgpMesh_NearestFeaturePolicy() = default;  // 00

		// add
		virtual float addLeaf(hkAabbTree<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Node const* leaf);  // 01

		// members
		hkVector4              m_normal;           // 30?
		hkVector4              m_coordinates;      // 40?
		hkgpMeshBase_Triangle* m_nearestTriangle;  // 50?
		std::uint8_t           pad54[0xC];         // 54
	};
}
