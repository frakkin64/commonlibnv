#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSNumericIDIndex.h"
#include "RE/R/ReferenceLocationInitialData.h"

namespace RE
{
	class MovedReferenceInitialData
	{
	public:
		MovedReferenceInitialData* ctor()
		{
			using func_t = MovedReferenceInitialData*(__thiscall*)(MovedReferenceInitialData*);
			static REL::Relocation<func_t> func{ Offsets::MovedReferenceInitialData::ctor };
			return func(this);
		}

	public:
		// members
		ReferenceLocationInitialData RefLocationData;          // 00
		BGSNumericIDIndex            OriginalLocationIDIndex;  // 1C?
		std::uint8_t                 pad1F;                    // 1F
		std::int16_t                 sOriginalCellX;           // 20
		std::int16_t                 sOriginalCellY;           // 22?
	};
}
