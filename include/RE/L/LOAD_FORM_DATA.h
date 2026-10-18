#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class LOAD_FORM_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&LOAD_FORM_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::LOAD_FORM_DATA::Endian };
			func(this);
		}

	public:
		// members
		std::uint32_t iFormID;   // 00
		std::uint32_t iWorldID;  // 04
		std::uint32_t iCellKey;  // 08
	};
	static_assert(sizeof(LOAD_FORM_DATA) == 0xC);
}
