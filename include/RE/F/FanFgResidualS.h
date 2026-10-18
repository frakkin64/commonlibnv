#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FR2MatrixVTC.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class FanFgResidualS
	{
	public:
		// members
		float               resOffset;      // 00?
		float               resScale;       // 04?
		FR2MatrixVTC<float> resMode[2][2];  // 08?
	};
}
