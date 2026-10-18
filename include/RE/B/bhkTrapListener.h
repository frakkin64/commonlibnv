#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkEntityListener.h"
#include "RE/H/hkpPhantomListener.h"

namespace RE
{
	class bhkTrapListener :
		public bhkEntityListener,  // 00
		public hkpPhantomListener  // 14
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkTrapListener };
		static constexpr auto VTABLE{ VTABLE::bhkTrapListener };

		// override (bhkEntityListener)
		virtual ~bhkTrapListener() = default;  // 00
	};
}
