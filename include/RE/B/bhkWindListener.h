#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkEntityListener.h"

namespace RE
{
	class bhkWindListener :
		public bhkEntityListener  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkWindListener };
		static constexpr auto VTABLE{ VTABLE::bhkWindListener };

		// add
		virtual float GetRandom(float afSize);  // 0A
	};
}
