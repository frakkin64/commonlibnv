#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FR2MatrixVTC.h"

namespace RE
{
	class FanOffLinCtlS
	{
	public:
		// members
		FR2MatrixVTC<float> ctl[2];  // 00?
		float               scale;   // 40
		float               off;     // 44?
	};
}
