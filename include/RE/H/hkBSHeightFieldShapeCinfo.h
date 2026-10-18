#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpSampledHeightFieldBaseCinfo.h"

namespace RE
{
	class NiPoint3;

	class alignas(16) hkBSHeightFieldShapeCinfo :
		public hkpSampledHeightFieldBaseCinfo  // 00
	{
	public:
		// members
		NiPoint3*    pData;       // 30?
		float        fOffset;     // 34?
		std::uint8_t pad38[0x8];  // 38
	};
}
