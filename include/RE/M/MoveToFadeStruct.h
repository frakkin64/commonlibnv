#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESObjectREFR;

	class MoveToFadeStruct
	{
	public:
		// members
		TESObjectREFR* pRef;  // 00?
		float          x;     // 04?
		float          y;     // 08?
		float          z;     // 0C?
	};
}
