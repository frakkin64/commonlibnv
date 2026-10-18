#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESWaterForm;

	class BGSPlaceableWaterData
	{
	public:
		BGSPlaceableWaterData* ctor()
		{
			using func_t = BGSPlaceableWaterData*(__thiscall*)(BGSPlaceableWaterData*);
			static REL::Relocation<func_t> func{ Offsets::BGSPlaceableWaterData::ctor };
			return func(this);
		}

	public:
		// members
		std::uint32_t ulFlags;     // 00
		TESWaterForm* pWaterType;  // 04
	};
	static_assert(sizeof(BGSPlaceableWaterData) == 0x8);
}
