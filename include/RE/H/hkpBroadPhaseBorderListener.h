#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpBroadPhaseListener.h"

namespace RE
{
	class hkpBroadPhaseBorderListener :
		public hkReferencedObject,  // 00
		public hkpBroadPhaseListener  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpBroadPhaseBorderListener };
		static constexpr auto VTABLE{ VTABLE::hkpBroadPhaseBorderListener };

		// override (hkReferencedObject)
		virtual ~hkpBroadPhaseBorderListener() = default;  // 00
	};
}
