#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkEnum.h"
#include "RE/H/hkMeshSection_MeshSectionIndexType.h"
#include "RE/H/hkMeshSection_PrimitiveType.h"

namespace RE
{
	class hkMeshMaterial;
	class hkMeshVertexBuffer;

	class hkMeshSection
	{
	public:
		using MeshSectionIndexType = hkMeshSection_MeshSectionIndexType;
		using PrimitiveType = hkMeshSection_PrimitiveType;

		// members
		hkEnum<hkMeshSection_PrimitiveType, std::uint8_t>        m_primitiveType;     // 00?
		std::uint8_t                                             pad01[0x3];          // 01
		std::int32_t                                             m_numPrimitives;     // 04?
		std::int32_t                                             m_numIndices;        // 08?
		std::int32_t                                             m_vertexStartIndex;  // 0C?
		std::int32_t                                             m_transformIndex;    // 10?
		hkEnum<hkMeshSection_MeshSectionIndexType, std::uint8_t> m_indexType;         // 14?
		std::uint8_t                                             pad15[0x3];          // 15
		const void*                                              m_indices;           // 18?
		hkMeshVertexBuffer*                                      m_vertexBuffer;      // 1C?
		hkMeshMaterial*                                          m_material;          // 20?
		std::int32_t                                             m_sectionIndex;      // 24?
	};
}
