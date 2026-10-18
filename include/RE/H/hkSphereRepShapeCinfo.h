#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkShapeCinfo.h"

namespace RE
{
	class hkSphereRepShapeCinfo :
		public hkShapeCinfo  // 00
	{
	public:
	};
	static_assert(sizeof(hkSphereRepShapeCinfo) == 0x4);
}
