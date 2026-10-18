#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabbTree.h"
#include "RE/H/hkAabbTreeData_hkAabbTreeAabb.h"
#include "RE/H/hkAabbTreeQueryUtils.h"

namespace RE
{
	class hkgpMesh_IConvexOverlap;

	class hkgpMesh_PrismPolicy :
		public hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::TreeTreeCollector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkgpMesh_PrismPolicy };
		static constexpr auto VTABLE{ VTABLE::hkgpMesh_PrismPolicy };

		// override (hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::TreeTreeCollector)
		virtual ~hkgpMesh_PrismPolicy() = default;  // 00

		// add
		virtual bool addHit(hkAabbTree<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Node* a, hkAabbTree<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Node* b);  // 01

		// members
		std::int32_t                   m_numFalseChecks;   // 04?
		std::int32_t                   m_numConvexChecks;  // 08?
		const hkgpMesh_IConvexOverlap* m_iconvexoverlap;   // 0C?
	};
}
