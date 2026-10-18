#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpMeshShape.h"
#include "RE/H/hkpStorageMeshShape_SubpartStorage.h"

namespace RE
{
	class alignas(16) hkpStorageMeshShape :
		public hkpMeshShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpStorageMeshShape };
		static constexpr auto VTABLE{ VTABLE::hkpStorageMeshShape };

		using SubpartStorage = hkpStorageMeshShape_SubpartStorage;

		// override (hkpMeshShape)
		virtual ~hkpStorageMeshShape() = default;  // 00

		// add
		virtual void addSubpart(hkpMeshShape::Subpart const& partIn);  // 0D

		// members
		hkArray<hkpStorageMeshShape_SubpartStorage*, hkContainerHeapAllocator> m_storage;  // 60?
		std::uint32_t                                                          pad6C;      // 6C
	};
}
