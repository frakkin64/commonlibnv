#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBSHeightFieldShapeCinfo.h"
#include "RE/H/hkBvTreeShapeCinfo.h"

namespace RE
{
	class alignas(16) hkTriSampledHeightFieldBvTreeShapeCinfo :
		public hkBvTreeShapeCinfo,  // 00
		public hkBSHeightFieldShapeCinfo  // 10
	{
	public:
	};
}
