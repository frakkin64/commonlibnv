#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkResourceBase.h"
#include "RE/H/hkResourceHandle_Link.h"

namespace RE
{
	class hkResourceHandle :
		public hkResourceBase  // 00
	{
	public:
		using Link = hkResourceHandle_Link;

	};
	static_assert(sizeof(hkResourceHandle) == 0x8);
}
