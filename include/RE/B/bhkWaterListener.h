#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkEntityListener.h"

namespace RE
{
	class bhkWaterListener :
		public bhkEntityListener  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkWaterListener };
		static constexpr auto VTABLE{ VTABLE::bhkWaterListener };

		// add
		virtual float GetRandom(float afSize);  // 0A
	};
	static_assert(sizeof(bhkWaterListener) == 0x14);
}
