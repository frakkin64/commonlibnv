#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class FUNCTION_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&FUNCTION_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::FUNCTION_DATA::Endian };
			func(this);
		}

	public:
		// members
		std::uint16_t iFunction;  // 00
		std::uint16_t pad02;      // 02
		void*         pParam[2];  // 04
	};
}
