#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSChangeFlags.h"
#include "RE/B/BGSUnloadedFormBuffer.h"

namespace RE
{
	class BGSFormChanges
	{
	public:
		// members
		BGSChangeFlags        iChangeFlags;        // 00
		BGSUnloadedFormBuffer UnloadedFormBuffer;  // 04
	};
}
