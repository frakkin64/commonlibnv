#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class FILE_TEX_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&FILE_TEX_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::FILE_TEX_DATA::Endian };
			func(this);
		}

	public:
		// members
		std::uint32_t iTextureID;  // 00
		std::uint8_t  cBlock;      // 04
		std::uint8_t  pad05;       // 05
		std::uint16_t sIndex;      // 06
	};
	static_assert(sizeof(FILE_TEX_DATA) == 0x8);
}
