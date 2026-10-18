#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpNamedMeshMaterial.h"
#include "RE/H/hkpStorageExtendedMeshShape_Material.h"

namespace RE
{
	class hkpStorageExtendedMeshShape_MeshSubpartStorage :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpStorageExtendedMeshShape_MeshSubpartStorage };
		static constexpr auto VTABLE{ VTABLE::hkpStorageExtendedMeshShape_MeshSubpartStorage };

		// override (hkReferencedObject)
		virtual ~hkpStorageExtendedMeshShape_MeshSubpartStorage() = default;  // 00

		// members
		hkArray<hkVector4, hkContainerHeapAllocator>                            m_vertices;           // 08?
		hkArray<std::uint8_t, hkContainerHeapAllocator>                         m_indices8;           // 14?
		hkArray<std::uint16_t, hkContainerHeapAllocator>                        m_indices16;          // 20?
		hkArray<std::uint32_t, hkContainerHeapAllocator>                        m_indices32;          // 2C?
		hkArray<std::uint8_t, hkContainerHeapAllocator>                         m_materialIndices;    // 38?
		hkArray<hkpStorageExtendedMeshShape_Material, hkContainerHeapAllocator> m_materials;          // 44?
		hkArray<hkpNamedMeshMaterial, hkContainerHeapAllocator>                 m_namedMaterials;     // 50?
		hkArray<std::uint16_t, hkContainerHeapAllocator>                        m_materialIndices16;  // 5C?
	};
}
