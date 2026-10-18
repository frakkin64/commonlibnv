#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkAabb.h"
#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkTransform.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpCompressedMeshShape_ConvexPiece.h"
#include "RE/H/hkpNamedMeshMaterial.h"
#include "RE/H/hkpShapeCollection.h"
#include "RE/H/hkpWeldingUtility_WeldingType.h"

namespace RE
{
	class hkpMeshMaterial;

	class alignas(16) hkpCompressedMeshShape :
		public hkpShapeCollection  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpCompressedMeshShape };
		static constexpr auto VTABLE{ VTABLE::hkpCompressedMeshShape };

		using ConvexPiece = hkpCompressedMeshShape_ConvexPiece;

		class BigTriangle;
		class Chunk;

		enum class MaterialType : std::int32_t
		{
			kMATERIAL_NONE = 0x0,
			kMATERIAL_SINGLE_VALUE_PER_CHUNK = 0x1,
			kMATERIAL_ONE_BYTE_PER_TRIANGLE = 0x2,
			kMATERIAL_TWO_BYTES_PER_TRIANGLE = 0x3,
			kMATERIAL_FOUR_BYTES_PER_TRIANGLE = 0x4,
		};

		class BigTriangle
		{
		public:
			// members
			std::uint16_t m_a;            // 00?
			std::uint16_t m_b;            // 02?
			std::uint16_t m_c;            // 04?
			std::uint16_t pad06;          // 06
			std::uint32_t m_material;     // 08?
			std::uint16_t m_weldingInfo;  // 0C?
			std::uint16_t pad0E;          // 0E
		};

		class alignas(16) Chunk
		{
		public:
			// members
			hkVector4                                        m_offset;          // 00?
			hkArray<std::uint16_t, hkContainerHeapAllocator> m_vertices;        // 10?
			hkArray<std::uint16_t, hkContainerHeapAllocator> m_indices;         // 1C?
			hkArray<std::uint16_t, hkContainerHeapAllocator> m_stripLengths;    // 28?
			hkArray<std::uint16_t, hkContainerHeapAllocator> m_weldingInfo;     // 34?
			std::uint32_t                                    m_materialInfo;    // 40?
			std::uint16_t                                    m_reference;       // 44?
			std::uint16_t                                    m_transformIndex;  // 46?
			std::uint8_t                                     pad48[0x8];        // 48
		};

		// override (hkpShapeCollection)
		virtual ~hkpCompressedMeshShape() = default;                                        // 00
		virtual void initWeldingInfo(hkpWeldingUtility_WeldingType weldingType) override;   // 0B
		virtual void setWeldingInfo(std::uint32_t key, std::int16_t weldingInfo) override;  // 0C

		// members
		std::int32_t                                                           m_bitsPerIndex;      // 18
		std::int32_t                                                           m_bitsPerWIndex;     // 1C
		std::int32_t                                                           m_wIndexMask;        // 20
		std::int32_t                                                           m_indexMask;         // 24
		float                                                                  m_radius;            // 28
		hkEnum<hkpWeldingUtility_WeldingType, std::uint8_t>                    m_weldingType;       // 2C
		std::uint8_t                                                           pad2D[0x3];          // 2D
		hkEnum<hkpCompressedMeshShape::MaterialType, std::uint8_t>             m_materialType;      // 30?
		std::uint8_t                                                           pad31[0x3];          // 31
		hkArray<std::uint32_t, hkContainerHeapAllocator>                       m_materials;         // 34?
		hkArray<std::uint16_t, hkContainerHeapAllocator>                       m_materials16;       // 40?
		hkArray<std::uint8_t, hkContainerHeapAllocator>                        m_materials8;        // 4C?
		hkArray<hkTransform, hkContainerHeapAllocator>                         m_transforms;        // 58?
		hkArray<hkVector4, hkContainerHeapAllocator>                           m_bigVertices;       // 64?
		hkArray<hkpCompressedMeshShape::BigTriangle, hkContainerHeapAllocator> m_bigTriangles;      // 70?
		hkArray<hkpCompressedMeshShape::Chunk, hkContainerHeapAllocator>       m_chunks;            // 7C?
		hkArray<hkpCompressedMeshShape_ConvexPiece, hkContainerHeapAllocator>  m_convexPieces;      // 88?
		float                                                                  m_error;             // 94?
		std::uint8_t                                                           pad98[0x8];          // 98
		hkAabb                                                                 m_bounds;            // A0?
		hkpMeshMaterial*                                                       m_meshMaterials;     // C0?
		std::uint16_t                                                          m_materialStriding;  // C4?
		std::uint16_t                                                          m_numMaterials;      // C6?
		hkArray<hkpNamedMeshMaterial, hkContainerHeapAllocator>                m_namedMaterials;    // C8?
		std::uint8_t                                                           padD4[0xC];          // D4
		hkVector4                                                              m_scaling;           // E0?
	};
}
