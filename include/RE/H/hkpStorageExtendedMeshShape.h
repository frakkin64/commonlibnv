#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpExtendedMeshShape.h"
#include "RE/H/hkpStorageExtendedMeshShape_Material.h"
#include "RE/H/hkpStorageExtendedMeshShape_MeshSubpartStorage.h"
#include "RE/H/hkpStorageExtendedMeshShape_ShapeSubpartStorage.h"

namespace RE
{
	class alignas(16) hkpStorageExtendedMeshShape :
		public hkpExtendedMeshShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpStorageExtendedMeshShape };
		static constexpr auto VTABLE{ VTABLE::hkpStorageExtendedMeshShape };

		using Material = hkpStorageExtendedMeshShape_Material;
		using MeshSubpartStorage = hkpStorageExtendedMeshShape_MeshSubpartStorage;
		using ShapeSubpartStorage = hkpStorageExtendedMeshShape_ShapeSubpartStorage;

		// override (hkpExtendedMeshShape)
		virtual ~hkpStorageExtendedMeshShape() = default;                                                 // 00
		virtual void addTrianglesSubpart(hkpExtendedMeshShape::TrianglesSubpart const& part) override;    // 0D
		virtual std::int32_t addShapesSubpart(hkpExtendedMeshShape::ShapesSubpart const& part) override;  // 0E

		// members
		hkArray<hkpStorageExtendedMeshShape_MeshSubpartStorage*, hkContainerHeapAllocator>  m_meshstorage;   // F0?
		hkArray<hkpStorageExtendedMeshShape_ShapeSubpartStorage*, hkContainerHeapAllocator> m_shapestorage;  // FC?
		std::uint8_t                                                                        pad108[0x8];     // 108
	};
}
