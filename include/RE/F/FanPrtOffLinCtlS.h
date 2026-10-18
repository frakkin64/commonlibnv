#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FR2MatrixVTC.h"

namespace RE
{
	class FanPrtOffLinCtlS
	{
	public:
		// members
		FR2MatrixVTC<float> ctl;    // 00?
		float               scale;  // 20?
		float               off;    // 24?
	};
}
