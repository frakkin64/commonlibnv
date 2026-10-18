#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpShapeCollection.h"
#include "RE/H/hkpWeldingUtility_WeldingType.h"

namespace RE
{
	class hkpMeshMaterial;

	class alignas(16) hkpMeshShape :
		public hkpShapeCollection  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMeshShape };
		static constexpr auto VTABLE{ VTABLE::hkpMeshShape };

		class Subpart;

		enum class MeshShapeIndexStridingType : std::int32_t
		{
			kINDICES_INVALID = 0x0,
			kINDICES_INT8 = 0x1,
			kINDICES_INT16 = 0x2,
			kINDICES_INT32 = 0x3,
			kINDICES_MAX_ID = 0x4,
		};

		enum class MeshShapeMaterialIndexStridingType : std::int32_t
		{
			kMATERIAL_INDICES_INVALID = 0x0,
			kMATERIAL_INDICES_INT8 = 0x1,
			kMATERIAL_INDICES_INT16 = 0x2,
			kMATERIAL_INDICES_MAX_ID = 0x3,
		};

		class Subpart
		{
		public:
			// members
			const float*                                                          m_vertexBase;                 // 00?
			std::int32_t                                                          m_vertexStriding;             // 04?
			std::int32_t                                                          m_numVertices;                // 08?
			const void*                                                           m_indexBase;                  // 0C?
			hkEnum<hkpMeshShape::MeshShapeIndexStridingType, std::int8_t>         m_stridingType;               // 10?
			std::uint8_t                                                          pad11[0x3];                   // 11
			hkEnum<hkpMeshShape::MeshShapeMaterialIndexStridingType, std::int8_t> m_materialIndexStridingType;  // 14?
			std::uint8_t                                                          pad15[0x3];                   // 15
			std::int32_t                                                          m_indexStriding;              // 18?
			std::int32_t                                                          m_flipAlternateTriangles;     // 1C?
			std::int32_t                                                          m_numTriangles;               // 20?
			const void*                                                           m_materialIndexBase;          // 24?
			std::int32_t                                                          m_materialIndexStriding;      // 28?
			const hkpMeshMaterial*                                                m_materialBase;               // 2C?
			std::int32_t                                                          m_materialStriding;           // 30?
			std::int32_t                                                          m_numMaterials;               // 34?
			std::int32_t                                                          m_triangleOffset;             // 38?
		};

		// members
		std::uint8_t                                             pad18[0x8];                // 18
		hkVector4                                                m_scaling;                 // 20
		std::int32_t                                             m_numBitsForSubpartIndex;  // 30
		hkArray<hkpMeshShape::Subpart, hkContainerHeapAllocator> m_subparts;                // 34
		hkArray<std::uint16_t, hkContainerHeapAllocator>         m_weldingInfo;             // 40?
		hkEnum<hkpWeldingUtility_WeldingType, std::uint8_t>      m_weldingType;             // 4C?
		std::uint8_t                                             pad4D[0x3];                // 4D
		float                                                    m_radius;                  // 50?
		std::int32_t                                             m_pad[3];                  // 54?
	};
}
