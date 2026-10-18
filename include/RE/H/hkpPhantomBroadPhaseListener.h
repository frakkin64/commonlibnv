#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpBroadPhaseListener.h"

namespace RE
{
	class hkpPhantomBroadPhaseListener :
		public hkReferencedObject,  // 00
		public hkpBroadPhaseListener  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPhantomBroadPhaseListener };
		static constexpr auto VTABLE{ VTABLE::hkpPhantomBroadPhaseListener };

		// override (hkReferencedObject)
		virtual ~hkpPhantomBroadPhaseListener() = default;  // 00
	};
}
