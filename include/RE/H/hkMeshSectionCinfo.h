#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkMeshSection_MeshSectionIndexType.h"
#include "RE/H/hkMeshSection_PrimitiveType.h"

namespace RE
{
	class hkMeshMaterial;
	class hkMeshVertexBuffer;

	class hkMeshSectionCinfo
	{
	public:
		// members
		hkMeshVertexBuffer*                                      m_vertexBuffer;      // 00?
		hkMeshMaterial*                                          m_material;          // 04?
		hkEnum<hkMeshSection_PrimitiveType, std::uint8_t>        m_primitiveType;     // 08?
		std::uint8_t                                             pad09[0x3];          // 09
		std::int32_t                                             m_numPrimitives;     // 0C?
		hkEnum<hkMeshSection_MeshSectionIndexType, std::uint8_t> m_indexType;         // 10?
		std::uint8_t                                             pad11[0x3];          // 11
		const void*                                              m_indices;           // 14?
		std::int32_t                                             m_vertexStartIndex;  // 18?
		std::int32_t                                             m_transformIndex;    // 1C?
	};
}
