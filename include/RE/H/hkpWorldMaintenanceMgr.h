#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkpWorldMaintenanceMgr :
		public hkReferencedObject  // 00
	{
	public:
	};
	static_assert(sizeof(hkpWorldMaintenanceMgr) == 0x8);
}
