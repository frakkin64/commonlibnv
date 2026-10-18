#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/R/REGION_DATA_ID.h"

namespace RE
{
	class TESRegionData;

	class TESRegionDataList :
		public BSSimpleList<TESRegionData*>  // 00
	{
	public:
		TESRegionData* Find(REGION_DATA_ID aFind)
		{
			using func_t = decltype(&TESRegionDataList::Find);
			static REL::Relocation<func_t> func{ Offsets::TESRegionDataList::Find };
			return func(this, aFind);
		}

	public:
		// members
		bool         bOwnsDataMemory;  // 08
		std::uint8_t pad09[0x3];       // 09
	};
}
