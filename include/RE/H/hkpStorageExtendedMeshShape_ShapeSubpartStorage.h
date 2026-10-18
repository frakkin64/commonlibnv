#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpStorageExtendedMeshShape_Material.h"

namespace RE
{
	class hkpStorageExtendedMeshShape_ShapeSubpartStorage :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpStorageExtendedMeshShape_ShapeSubpartStorage };
		static constexpr auto VTABLE{ VTABLE::hkpStorageExtendedMeshShape_ShapeSubpartStorage };

		// override (hkReferencedObject)
		virtual ~hkpStorageExtendedMeshShape_ShapeSubpartStorage() = default;  // 00

		// members
		hkArray<std::uint8_t, hkContainerHeapAllocator>                         m_materialIndices;    // 08?
		hkArray<hkpStorageExtendedMeshShape_Material, hkContainerHeapAllocator> m_materials;          // 14?
		hkArray<std::uint16_t, hkContainerHeapAllocator>                        m_materialIndices16;  // 20?
	};
}
