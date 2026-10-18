#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FanLinCtlS.h"

namespace RE
{
	class FanLinCtlGrpS
	{
	public:
		// members
		stl::vector<FanLinCtlS> grp[2][2];  // 00
	};
}
