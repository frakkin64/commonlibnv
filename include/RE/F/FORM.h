#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class FORM
	{
	public:
		void Endian()
		{
			using func_t = decltype(&FORM::Endian);
			static REL::Relocation<func_t> func{ Offsets::FORM::Endian };
			func(this);
		}

	public:
		// members
		std::uint32_t form;             // 00
		std::uint32_t length;           // 04
		std::uint32_t flags;            // 08
		std::uint32_t iFormID;          // 0C
		std::uint32_t iVersionControl;  // 10
		std::uint16_t sFormVersion;     // 14
		std::uint16_t sVCVersion;       // 16
	};
	static_assert(sizeof(FORM) == 0x18);
}
