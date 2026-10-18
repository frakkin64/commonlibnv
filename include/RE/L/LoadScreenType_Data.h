#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/D/DisplayData.h"
#include "RE/L/LOAD_SCREEN_DATA_TYPE.h"

namespace RE
{
	class LoadScreenType_Data
	{
	public:
		void Endian()
		{
			using func_t = decltype(&LoadScreenType_Data::Endian);
			static REL::Relocation<func_t> func{ Offsets::LoadScreenType_Data::Endian };
			func(this);
		}

	public:
		// members
		LOAD_SCREEN_DATA_TYPE DataType;            // 00
		DisplayData           DisplayData1;        // 04
		DisplayData           DisplayData2;        // 2C
		std::uint32_t         uNumStatsToDisplay;  // 54
	};
	static_assert(sizeof(LoadScreenType_Data) == 0x58);
}
