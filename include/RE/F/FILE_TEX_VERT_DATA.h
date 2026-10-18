#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class FILE_TEX_VERT_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&FILE_TEX_VERT_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::FILE_TEX_VERT_DATA::Endian };
			func(this);
		}

	public:
		// members
		std::uint16_t iVertIndex;  // 00
		std::uint16_t pad02;       // 02
		float         fPercent;    // 04
	};
}
