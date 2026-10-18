#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiAVObject;

	class NiCollisionGroup_Intersect
	{
	public:
		// members
		NiAVObject*      pkRoot0;   // 00?
		NiAVObject*      pkRoot1;   // 04?
		NiAVObject*      pkObj0;    // 08?
		NiAVObject*      pkObj1;    // 0C?
		float            fTime;     // 10?
		NiPoint3         kPoint;    // 14?
		NiPoint3         kNormal0;  // 20?
		NiPoint3         kNormal1;  // 2C?
		const NiPoint3** appkTri1;  // 38?
		const NiPoint3** appkTri2;  // 3C?
	};
}
