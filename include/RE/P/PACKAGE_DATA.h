#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class PACKAGE_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&PACKAGE_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::PACKAGE_DATA::Endian };
			func(this);
		}

	public:
		// members
		std::uint32_t iPackFlags;             // 00
		char          cPackType;              // 04
		std::uint8_t  pad05;                  // 05
		std::uint16_t iFOBehaviorFlags;       // 06
		std::uint16_t iPackageSpecificFlags;  // 08
		std::uint16_t pad0A;                  // 0A
	};
	static_assert(sizeof(PACKAGE_DATA) == 0xC);
}
