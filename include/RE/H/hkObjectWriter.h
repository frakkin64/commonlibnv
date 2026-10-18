#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkObjectWriter :
		public hkReferencedObject  // 00
	{
	public:
	};
	static_assert(sizeof(hkObjectWriter) == 0x8);
}
