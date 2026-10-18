#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBound.h"

namespace RE
{
	class BSNiBound :
		public NiBound  // 00
	{
	public:
	};
	static_assert(sizeof(BSNiBound) == 0x10);
}
