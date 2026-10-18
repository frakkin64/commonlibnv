#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FR2MatrixVTC.h"

namespace RE
{
	class FanRaceDistS
	{
	public:
		// members
		FR2MatrixVTC<float> mean[2];         // 00?
		FR2MatrixVTC<float> eigBasis;        // 40?
		FR2MatrixVTC<float> invEigBasis[2];  // 60?
	};
	static_assert(sizeof(FanRaceDistS) == 0xA0);
}
