#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDataRefCounted.h"

namespace RE
{
	class hkDataObjectImpl :
		public hkDataRefCounted  // 00
	{
	public:
	};
	static_assert(sizeof(hkDataObjectImpl) == 0xC);
}
