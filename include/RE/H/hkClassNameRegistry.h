#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkClassNameRegistry :
		public hkReferencedObject  // 00
	{
	public:
	};
	static_assert(sizeof(hkClassNameRegistry) == 0x8);
}
