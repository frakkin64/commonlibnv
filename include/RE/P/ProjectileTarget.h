#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiAVObject;
	class TESObjectREFR;

	class ProjectileTarget
	{
	public:
		// members
		TESObjectREFR*        pReference;  // 00
		NiPointer<NiAVObject> spPart;      // 04
		NiPoint3              kOffset;     // 08?
	};
}
