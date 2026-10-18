#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkEntityListener.h"

namespace RE
{
	class bhkArrowTargetListener :
		public bhkEntityListener  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkArrowTargetListener };
		static constexpr auto VTABLE{ VTABLE::bhkArrowTargetListener };

		// override (bhkEntityListener)
		virtual ~bhkArrowTargetListener() = default;  // 00
	};
}
