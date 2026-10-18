#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkTransform.h"

namespace RE
{
	class hkpShape;

	class alignas(16) hkpShapeInfo :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpShapeInfo };
		static constexpr auto VTABLE{ VTABLE::hkpShapeInfo };

		// override (hkReferencedObject)
		virtual ~hkpShapeInfo() = default;  // 00

		// members
		hkRefPtr<const hkpShape>                       m_shape;                   // 08?
		hkBool                                         m_isHierarchicalCompound;  // 0C?
		hkBool                                         m_hkdShapesCollected;      // 0D?
		std::uint16_t                                  pad0E;                     // 0E
		hkArray<hkStringPtr, hkContainerHeapAllocator> m_childShapeNames;         // 10?
		hkArray<hkTransform, hkContainerHeapAllocator> m_childTransforms;         // 1C?
		std::uint8_t                                   pad28[0x8];                // 28
		hkTransform                                    m_transform;               // 30?
	};
}
