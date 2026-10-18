#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkpConvexVerticesConnectivity :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpConvexVerticesConnectivity };
		static constexpr auto VTABLE{ VTABLE::hkpConvexVerticesConnectivity };

		// override (hkReferencedObject)
		virtual ~hkpConvexVerticesConnectivity() = default;  // 00

		// add
		virtual void clear();  // 03

		// members
		hkArray<std::uint16_t, hkContainerHeapAllocator> m_vertexIndices;       // 08
		hkArray<std::uint8_t, hkContainerHeapAllocator>  m_numVerticesPerFace;  // 14?
	};
}
