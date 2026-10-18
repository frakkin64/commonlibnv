#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class DECAL_DATA_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&DECAL_DATA_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::DECAL_DATA_DATA::Endian };
			func(this);
		}

	public:
		// members
		float         fDecalMinWidth;   // 00
		float         fDecalMaxWidth;   // 04
		float         fDecalMinHeight;  // 08
		float         fDecalMaxHeight;  // 0C
		float         fDepth;           // 10
		float         fShininess;       // 14
		float         fParallaxScale;   // 18
		std::uint8_t  cParallaxPasses;  // 1C
		std::uint8_t  cFlags;           // 1D
		std::uint16_t pad1E;            // 1E
		std::uint32_t iColor;           // 20
	};
}
