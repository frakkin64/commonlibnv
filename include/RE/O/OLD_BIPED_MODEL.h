#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class OLD_BIPED_MODEL
	{
	public:
		void Endian()
		{
			using func_t = decltype(&OLD_BIPED_MODEL::Endian);
			static REL::Relocation<func_t> func{ Offsets::OLD_BIPED_MODEL::Endian };
			func(this);
		}

	public:
		// members
		std::uint16_t sBipedObjectSlots;  // 00?
		std::uint8_t  sFlags;             // 02?
		std::uint8_t  pad03;              // 03
	};
}
