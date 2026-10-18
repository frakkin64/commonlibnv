#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESGlobal;
	class TESWeather;

	// not confirmed: no named code in the executable refers to this type
	class WeatherEntry
	{
	public:
		// members
		TESWeather*   pWeather;    // 00?
		std::uint32_t uiChance;    // 04?
		TESGlobal*    pChanceVar;  // 08?
	};
}
