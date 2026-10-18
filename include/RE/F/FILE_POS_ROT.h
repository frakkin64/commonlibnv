#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class FILE_POS_ROT
	{
	public:
		// members
		NiPoint3 pos;  // 00
		NiPoint3 rot;  // 0C
	};
	static_assert(sizeof(FILE_POS_ROT) == 0x18);
}
