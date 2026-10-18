#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class ImageSpaceParameterData
	{
	public:
		// members
		float         pfHDRData[15];        // 00
		float         pfBloomData[3];       // 3C
		float         pfGetHitData[3];      // 48
		float         pfNightEyeData[4];    // 54
		float         pfCinematicData[12];  // 64
		std::uint32_t uiCinematicsEnabled;  // 94
	};
}
