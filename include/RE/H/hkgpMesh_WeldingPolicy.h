#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabbTree.h"
#include "RE/H/hkAabbTreeData_hkAabbTreeAabb.h"
#include "RE/H/hkAabbTreeQueryUtils.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkgpMeshBase_Vertex;

	class alignas(16) hkgpMesh_WeldingPolicy :
		public hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Collector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkgpMesh_WeldingPolicy };
		static constexpr auto VTABLE{ VTABLE::hkgpMesh_WeldingPolicy };

		// override (hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Collector)
		virtual ~hkgpMesh_WeldingPolicy() = default;  // 00

		// add
		virtual float addLeaf(hkAabbTree<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Node const* leaf);  // 01

		// members
		std::uint8_t         pad04[0xC];              // 04
		hkVector4            m_position;              // 10?
		float                m_weldingRadiusSquared;  // 20?
		hkgpMeshBase_Vertex* m_match;                 // 24?
		std::uint8_t         pad28[0x8];              // 28
	};
}
