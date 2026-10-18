#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FR2Vect3TC.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class FffModeGS
	{
	public:
		// members
		float                                 scale;    // 00?
		stl::vector<FR2Vect3TC<std::int16_t>> vertPos;  // 04?
	};
}
