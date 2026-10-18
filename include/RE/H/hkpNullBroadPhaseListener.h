#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpBroadPhaseListener.h"

namespace RE
{
	class hkpNullBroadPhaseListener :
		public hkReferencedObject,  // 00
		public hkpBroadPhaseListener  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpNullBroadPhaseListener };
		static constexpr auto VTABLE{ VTABLE::hkpNullBroadPhaseListener };

		// override (hkReferencedObject)
		virtual ~hkpNullBroadPhaseListener() = default;  // 00
	};
}
