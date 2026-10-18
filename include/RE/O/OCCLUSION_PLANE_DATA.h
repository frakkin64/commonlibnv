#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint2.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class OCCLUSION_PLANE_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&OCCLUSION_PLANE_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::OCCLUSION_PLANE_DATA::Endian };
			func(this);
		}

	public:
		// members
		NiPoint2 rHalfExtents;  // 00
		NiPoint3 rCenter;       // 08
		NiPoint3 rAxis;         // 14
		float    fAngle;        // 20
	};
	static_assert(sizeof(OCCLUSION_PLANE_DATA) == 0x24);
}
