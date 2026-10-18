#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FR2MatrixVTC.h"
#include "RE/F/FanFgResidualS.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class FanFgFileDataS
	{
	public:
		// members
		std::uint32_t               egmKey;         // 00?
		std::uint32_t               egtKey;         // 04?
		FR2MatrixVTC<float>         coord[2][2];    // 08
		stl::vector<FanFgResidualS> residualCtrls;  // 88?
		stl::vector<std::uint8_t>   detailTexJpeg;  // A0?
	};
}
