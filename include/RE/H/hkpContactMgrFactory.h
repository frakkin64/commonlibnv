#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkpContactMgrFactory :
		public hkReferencedObject  // 00
	{
	public:
	};
	static_assert(sizeof(hkpContactMgrFactory) == 0x8);
}
