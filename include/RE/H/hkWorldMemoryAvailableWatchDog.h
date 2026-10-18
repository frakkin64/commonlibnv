#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkWorldMemoryAvailableWatchDog :
		public hkReferencedObject  // 00
	{
	public:
	};
	static_assert(sizeof(hkWorldMemoryAvailableWatchDog) == 0x8);
}
