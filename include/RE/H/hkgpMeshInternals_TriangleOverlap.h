#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabbTree.h"
#include "RE/H/hkAabbTreeData_hkAabbTreeAabb.h"
#include "RE/H/hkAabbTreeQueryUtils.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkgpMeshInternals_TriangleOverlap :
		public hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Collector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkgpMeshInternals_TriangleOverlap };
		static constexpr auto VTABLE{ VTABLE::hkgpMeshInternals_TriangleOverlap };

		// override (hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Collector)
		virtual ~hkgpMeshInternals_TriangleOverlap() = default;  // 00

		// add
		virtual float addLeaf(hkAabbTree<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Node const* leaf);  // 01

		// members
		std::int32_t m_found;        // 04?
		std::uint8_t pad08[0x8];     // 08
		hkVector4    m_vertices[3];  // 10?
	};
}
