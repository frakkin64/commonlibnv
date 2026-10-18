#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class TESForm;

	class WORLD_LOCATION
	{
	public:
		// members
		TESForm* pLocationForm;  // 00
		NiPoint3 locPt;          // 04
		float    fZRot;          // 10
	};
	static_assert(sizeof(WORLD_LOCATION) == 0x14);
}
