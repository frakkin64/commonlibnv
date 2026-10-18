#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TOPIC_INFO_DATA
	{
	public:
		// members
		char type;         // 00
		char nextSpeaker;  // 01
		char flags;        // 02
		char flagsExt;     // 03
	};
	static_assert(sizeof(TOPIC_INFO_DATA) == 0x4);
}
