#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkgpAbstractMeshDefinitions_Vertex.h"
#include "RE/H/hkgpMeshBase_BaseVertex.h"

namespace RE
{
	class alignas(16) hkgpMeshBase_Vertex :
		public hkgpAbstractMeshDefinitions_Vertex<hkgpMeshBase_Vertex, hkgpMeshBase_BaseVertex>  // 00
	{
	public:
		// members
		std::uint8_t pad08[0x8];  // 08
		hkVector4    m_position;  // 10?
		hkVector4    m_normal;    // 20?
		hkVector4    m_data;      // 30?
		std::int32_t m_refs;      // 40?
		std::int32_t m_tag;       // 44?
		std::uint8_t pad48[0x8];  // 48
	};
}
