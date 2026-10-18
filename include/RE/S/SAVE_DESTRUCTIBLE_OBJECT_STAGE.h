#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class SAVE_DESTRUCTIBLE_OBJECT_STAGE
	{
	public:
		void Endian()
		{
			using func_t = decltype(&SAVE_DESTRUCTIBLE_OBJECT_STAGE::Endian);
			static REL::Relocation<func_t> func{ Offsets::SAVE_DESTRUCTIBLE_OBJECT_STAGE::Endian };
			func(this);
		}

	public:
		// members
		std::uint8_t  cHealthPercentage;     // 00
		std::uint8_t  cStageNum;             // 01
		std::uint8_t  cModelDamageStage;     // 02
		std::uint8_t  cFlags;                // 03
		std::uint32_t iSelfDamagePerSecond;  // 04
		std::uint32_t iExplosionID;          // 08
		std::uint32_t iDebrisID;             // 0C
		std::uint32_t iDebrisCount;          // 10
	};
	static_assert(sizeof(SAVE_DESTRUCTIBLE_OBJECT_STAGE) == 0x14);
}
