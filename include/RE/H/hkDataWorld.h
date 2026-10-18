#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDataWorld_DataWorldType.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkDataWorld :
		public hkReferencedObject  // 00
	{
	public:
		using DataWorldType = hkDataWorld_DataWorldType;

	};
	static_assert(sizeof(hkDataWorld) == 0x8);
}
