#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class SCRIPT_LOCAL
	{
	public:
		void Endian()
		{
			using func_t = decltype(&SCRIPT_LOCAL::Endian);
			static REL::Relocation<func_t> func{ Offsets::SCRIPT_LOCAL::Endian };
			func(this);
		}

	public:
		// members
		std::uint32_t uiID;        // 00
		std::uint32_t pad04;       // 04
		double        fValue;      // 08
		bool          bIsInteger;  // 10
		std::uint8_t  pad11[0x7];  // 11
	};
	static_assert(sizeof(SCRIPT_LOCAL) == 0x18);
}
