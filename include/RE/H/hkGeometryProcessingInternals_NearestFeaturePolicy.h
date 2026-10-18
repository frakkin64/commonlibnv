#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabbTree.h"
#include "RE/H/hkAabbTreeData_hkAabbTreeAabb.h"
#include "RE/H/hkAabbTreeQueryUtils.h"

namespace RE
{
	class alignas(16) hkGeometryProcessingInternals_NearestFeaturePolicy :
		public hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::ClosestPointCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkGeometryProcessingInternals_NearestFeaturePolicy };
		static constexpr auto VTABLE{ VTABLE::hkGeometryProcessingInternals_NearestFeaturePolicy };

		// override (hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::ClosestPointCollector)
		virtual ~hkGeometryProcessingInternals_NearestFeaturePolicy() = default;  // 00

		// add
		virtual float addLeaf(hkAabbTree<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Node const* leaf);  // 01

		// members
		const hkAabbTree<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Node* m_leaf;      // 30?
		std::uint8_t                                                          pad34[0xC];  // 34
	};
}
