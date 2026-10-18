#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESObjectREFR;

	class REF_ACTIVATE_DATA
	{
	public:
		// members
		TESObjectREFR* pActivateRef;    // 00
		float          fActivateDelay;  // 04
	};
}
