#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class INTERIOR_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&INTERIOR_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::INTERIOR_DATA::Endian };
			func(this);
		}

	public:
		// members
		std::uint32_t iAmbient;          // 00
		std::uint32_t iDirectional;      // 04
		std::uint32_t iFog;              // 08
		float         fFogNear;          // 0C
		float         fFogFar;           // 10
		std::uint32_t iDirectionalXY;    // 14
		std::uint32_t iDirectionalZ;     // 18
		float         fDirectionalFade;  // 1C
		float         fClipDist;         // 20
		float         fFogPower;         // 24
		std::uint32_t iInteriorOffset;   // 28
	};
	static_assert(sizeof(INTERIOR_DATA) == 0x2C);
}
