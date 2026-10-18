#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkQuaternion.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkxAnimatedQuaternion :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxAnimatedQuaternion };
		static constexpr auto VTABLE{ VTABLE::hkxAnimatedQuaternion };

		// override (hkReferencedObject)
		virtual ~hkxAnimatedQuaternion() = default;  // 00

		// members
		hkArray<hkQuaternion, hkContainerHeapAllocator> m_quaternions;  // 08?
	};
}
