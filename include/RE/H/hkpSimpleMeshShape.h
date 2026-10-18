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
	class hkpSimpleMeshShape :
		public hkpShapeCollection  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSimpleMeshShape };
		static constexpr auto VTABLE{ VTABLE::hkpSimpleMeshShape };

		class Triangle;

		class Triangle
		{
		public:
			// members
			std::int32_t  m_a;            // 00?
			std::int32_t  m_b;            // 04?
			std::int32_t  m_c;            // 08?
			std::uint16_t m_weldingInfo;  // 0C?
			std::uint16_t pad0E;          // 0E
		};

		// override (hkpShapeCollection)
		virtual ~hkpSimpleMeshShape() = default;                                            // 00
		virtual void initWeldingInfo(hkpWeldingUtility_WeldingType weldingType) override;   // 0B
		virtual void setWeldingInfo(std::uint32_t key, std::int16_t weldingInfo) override;  // 0C

		// members
		hkArray<hkVector4, hkContainerHeapAllocator>                    m_vertices;         // 18
		hkArray<hkpSimpleMeshShape::Triangle, hkContainerHeapAllocator> m_triangles;        // 24
		hkArray<std::uint8_t, hkContainerHeapAllocator>                 m_materialIndices;  // 30
		float                                                           m_radius;           // 3C
		hkEnum<hkpWeldingUtility_WeldingType, std::uint8_t>             m_weldingType;      // 40
		std::uint8_t                                                    pad41[0x3];         // 41
	};
}
