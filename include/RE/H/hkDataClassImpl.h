#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDataRefCounted.h"

namespace RE
{
	class hkDataClassImpl :
		public hkDataRefCounted  // 00
	{
	public:
	};
	static_assert(sizeof(hkDataClassImpl) == 0xC);
}
