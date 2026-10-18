#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkpStorageMeshShape_SubpartStorage :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpStorageMeshShape_SubpartStorage };
		static constexpr auto VTABLE{ VTABLE::hkpStorageMeshShape_SubpartStorage };

		// override (hkReferencedObject)
		virtual ~hkpStorageMeshShape_SubpartStorage() = default;  // 00

		// members
		hkArray<float, hkContainerHeapAllocator>         m_vertices;           // 08?
		hkArray<std::uint16_t, hkContainerHeapAllocator> m_indices16;          // 14?
		hkArray<std::uint32_t, hkContainerHeapAllocator> m_indices32;          // 20?
		hkArray<std::uint8_t, hkContainerHeapAllocator>  m_materialIndices;    // 2C?
		hkArray<std::uint32_t, hkContainerHeapAllocator> m_materials;          // 38?
		hkArray<std::uint16_t, hkContainerHeapAllocator> m_materialIndices16;  // 44?
	};
}
