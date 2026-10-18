#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkVector4.h"

namespace RE
{
	class hkGeometry
	{
	public:
		class Triangle;

		class Triangle
		{
		public:
			// members
			std::int32_t m_a;         // 00?
			std::int32_t m_b;         // 04?
			std::int32_t m_c;         // 08?
			std::int32_t m_material;  // 0C?
		};

		// members
		std::uint8_t                                            pad00[0x8];   // 00
		hkArray<hkVector4, hkContainerHeapAllocator>            m_vertices;   // 08
		hkArray<hkGeometry::Triangle, hkContainerHeapAllocator> m_triangles;  // 14?
	};
}
