#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabbTree.h"
#include "RE/H/hkAabbTreeData_hkAabbTreeAabb.h"
#include "RE/H/hkAabbTreeQueryUtils.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkgpMeshBase_Triangle;

	class alignas(16) hkgpMeshInternals_RayCaster :
		public hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Collector  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkgpMeshInternals_RayCaster };
		static constexpr auto VTABLE{ VTABLE::hkgpMeshInternals_RayCaster };

		// override (hkAabbTreeQueryUtils<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Collector)
		virtual ~hkgpMeshInternals_RayCaster() = default;  // 00

		// add
		virtual float addLeaf(hkAabbTree<hkAabbTreeData_hkAabbTreeAabb, std::uint32_t>::Node const* leaf);  // 01

		// members
		std::uint8_t           pad04[0xC];  // 04
		hkVector4              m_rayFrom;   // 10?
		hkVector4              m_rayDir;    // 20?
		hkgpMeshBase_Triangle* m_triangle;  // 30?
		float                  m_fraction;  // 34?
		std::uint8_t           pad38[0x8];  // 38
	};
}
