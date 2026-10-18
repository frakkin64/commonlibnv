#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabbTree.h"
#include "RE/H/hkAabbTreeData_hkAabbTreeAabb.h"
#include "RE/H/hkAabbTreeQueryUtils.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"

namespace RE
{
	class hkgpMeshBase_Triangle;

	class hkgpMeshInternals_SimpleCollector :
		public hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Collector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkgpMeshInternals_SimpleCollector };
		static constexpr auto VTABLE{ VTABLE::hkgpMeshInternals_SimpleCollector };

		// override (hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Collector)
		virtual ~hkgpMeshInternals_SimpleCollector() = default;  // 00

		// add
		virtual float addLeaf(hkAabbTree<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Node const* leaf);  // 01

		// members
		hkArray<hkgpMeshBase_Triangle*, hkContainerHeapAllocator> m_triangles;  // 04?
	};
}
