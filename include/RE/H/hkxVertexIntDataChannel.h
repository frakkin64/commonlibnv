#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkxVertexIntDataChannel :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxVertexIntDataChannel };
		static constexpr auto VTABLE{ VTABLE::hkxVertexIntDataChannel };

		// override (hkReferencedObject)
		virtual ~hkxVertexIntDataChannel() = default;  // 00

		// members
		hkArray<std::int32_t, hkContainerHeapAllocator> m_perVertexInts;  // 08?
	};
}
