#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class TESBoundObject;

	class OBJ_REFR
	{
	public:
		// members
		TESBoundObject* pObjectReference;  // 00
		NiPoint3        Angle;             // 04
		NiPoint3        Location;          // 10
	};
	static_assert(sizeof(OBJ_REFR) == 0x1C);
}
