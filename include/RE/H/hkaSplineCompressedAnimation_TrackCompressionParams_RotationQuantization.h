#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkaSplineCompressedAnimation_TrackCompressionParams_RotationQuantization : std::int32_t
	{
		kPOLAR32 = 0x0,
		kTHREECOMP40 = 0x1,
		kTHREECOMP48 = 0x2,
		kTHREECOMP24 = 0x3,
		kSTRAIGHT16 = 0x4,
		kUNCOMPRESSED = 0x5,
	};
}
