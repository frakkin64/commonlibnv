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
	class hkClass;
	class hkpMeshMaterial;

	class alignas(16) hkpExtendedMeshShape :
		public hkpShapeCollection  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpExtendedMeshShape };
		static constexpr auto VTABLE{ VTABLE::hkpExtendedMeshShape };

		class ShapesSubpart;
		class Subpart;
		class TrianglesSubpart;

		enum class IndexStridingType : std::int32_t
		{
			kINDICES_INVALID = 0x0,
			kINDICES_INT8 = 0x1,
			kINDICES_INT16 = 0x2,
			kINDICES_INT32 = 0x3,
			kINDICES_MAX_ID = 0x4,
		};

		enum class MaterialIndexStridingType : std::int32_t
		{
			kMATERIAL_INDICES_INVALID = 0x0,
			kMATERIAL_INDICES_INT8 = 0x1,
			kMATERIAL_INDICES_INT16 = 0x2,
			kMATERIAL_INDICES_MAX_ID = 0x3,
		};

		enum class SubpartType : std::int32_t
		{
			kSUBPART_TRIANGLES = 0x0,
			kSUBPART_SHAPE = 0x1,
		};

		class Subpart
		{
		public:
			// members
			hkEnum<hkpExtendedMeshShape::SubpartType, std::int8_t>               m_type;                       // 00?
			std::uint8_t                                                         pad01[0x3];                   // 01
			hkEnum<hkpExtendedMeshShape::MaterialIndexStridingType, std::int8_t> m_materialIndexStridingType;  // 04?
			std::uint8_t                                                         pad05;                        // 05
			std::int16_t                                                         m_materialStriding;           // 06?
			const void*                                                          m_materialIndexBase;          // 08?
			std::uint16_t                                                        m_materialIndexStriding;      // 0C?
			std::uint16_t                                                        m_numMaterials;               // 0E?
			const hkpMeshMaterial*                                               m_materialBase;               // 10?
			const hkClass*                                                       m_materialClass;              // 14?
		};

		class alignas(16) ShapesSubpart :
			public hkpExtendedMeshShape::Subpart  // 00
		{
		public:
			// members
			// not placed: m_childShapes, m_rotation, m_translation
			std::uint8_t pad18[0x8];  // 18
		};

		class alignas(16) TrianglesSubpart :
			public hkpExtendedMeshShape::Subpart  // 00
		{
		public:
			// members
			// not placed: m_numTriangleShapes, m_vertexBase, m_vertexStriding, m_numVertices, m_extrusion, m_indexBase, m_indexStriding, m_stridingType, m_flipAlternateTriangles, m_triangleOffset, m_userData
			std::uint8_t pad18[0x8];  // 18
		};

		// override (hkpShapeCollection)
		virtual ~hkpExtendedMeshShape() = default;                                          // 00
		virtual void initWeldingInfo(hkpWeldingUtility_WeldingType weldingType) override;   // 0B
		virtual void setWeldingInfo(std::uint32_t key, std::int16_t weldingInfo) override;  // 0C

		// add
		virtual void addTrianglesSubpart(hkpExtendedMeshShape::TrianglesSubpart const& part);    // 0D
		virtual std::int32_t addShapesSubpart(hkpExtendedMeshShape::ShapesSubpart const& part);  // 0E

		// members
		std::uint8_t                                                              pad18[0x8];                    // 18
		hkpExtendedMeshShape::TrianglesSubpart                                    m_embeddedTrianglesSubpart;    // 20
		std::uint8_t                                                              pad40[0x40];                   // 40
		hkVector4                                                                 m_scaling;                     // 80
		hkVector4                                                                 m_aabbHalfExtents;             // 90
		hkVector4                                                                 m_aabbCenter;                  // A0
		std::int32_t                                                              m_numBitsForSubpartIndex;      // B0?
		hkArray<hkpExtendedMeshShape::TrianglesSubpart, hkContainerHeapAllocator> m_trianglesSubparts;           // B4?
		hkArray<hkpExtendedMeshShape::ShapesSubpart, hkContainerHeapAllocator>    m_shapesSubparts;              // C0?
		hkArray<std::uint16_t, hkContainerHeapAllocator>                          m_weldingInfo;                 // CC?
		hkEnum<hkpWeldingUtility_WeldingType, std::uint8_t>                       m_weldingType;                 // D8?
		std::uint8_t                                                              padD9[0x3];                    // D9
		std::uint32_t                                                             m_defaultCollisionFilterInfo;  // DC?
		std::int32_t                                                              m_cachedNumChildShapes;        // E0?
		float                                                                     m_triangleRadius;              // E4?
		std::int32_t                                                              m_padding[2];                  // E8?
	};
}
