#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkpSerializedDisplayMarker;

	class hkpSerializedDisplayMarkerList :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSerializedDisplayMarkerList };
		static constexpr auto VTABLE{ VTABLE::hkpSerializedDisplayMarkerList };

		// override (hkReferencedObject)
		virtual ~hkpSerializedDisplayMarkerList() = default;  // 00

		// members
		hkArray<hkpSerializedDisplayMarker*, hkContainerHeapAllocator> m_markers;  // 08?
	};
}
