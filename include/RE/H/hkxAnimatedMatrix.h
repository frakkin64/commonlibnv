#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkMatrix4.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkxAttribute_Hint.h"

namespace RE
{
	class hkxAnimatedMatrix :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxAnimatedMatrix };
		static constexpr auto VTABLE{ VTABLE::hkxAnimatedMatrix };

		// override (hkReferencedObject)
		virtual ~hkxAnimatedMatrix() = default;  // 00

		// members
		hkArray<hkMatrix4, hkContainerHeapAllocator> m_matrices;  // 08?
		hkEnum<hkxAttribute_Hint, std::uint8_t>      m_hint;      // 14?
		std::uint8_t                                 pad15[0x3];  // 15
	};
}
