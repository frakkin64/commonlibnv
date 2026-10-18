#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"
#include "RE/H/hkgpAbstractMeshDefinitions_Triangle.h"
#include "RE/H/hkgpMeshBase_BaseTriangle.h"

namespace RE
{
	class hkgpMeshBase_Vertex;

	class alignas(16) hkgpMeshBase_Triangle :
		public hkgpAbstractMeshDefinitions_Triangle<hkgpMeshBase_Triangle, hkgpMeshBase_BaseTriangle, hkgpMeshBase_Vertex*>  // 00
	{
	public:
		// members
		hkVector4     m_plane;     // 20?
		std::int32_t  m_partId;    // 30?
		std::int32_t  m_planeId;   // 34?
		std::int32_t  m_material;  // 38?
		std::int32_t  m_tag;       // 3C?
		std::uint32_t m_leafIdx;   // 40?
		std::uint8_t  pad44[0xC];  // 44
	};
}
