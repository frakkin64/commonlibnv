#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/R/REGION_DATA_ID.h"

namespace RE
{
	class TESFile;
	class TESRegion;
	class TESRegionData;
	class TESRegionDataGrass;
	class TESRegionDataImposter;
	class TESRegionDataLandscape;
	class TESRegionDataMap;
	class TESRegionDataObjects;
	class TESRegionDataSound;
	class TESRegionDataWeather;

	class __declspec(novtable) TESRegionDataManager
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRegionDataManager };
		static constexpr auto VTABLE{ VTABLE::TESRegionDataManager };

		// add
		virtual TESRegion* GetLastLoadedRegion();                                            // 00
		virtual TESRegionData* ConstructRegionData(REGION_DATA_ID a_arg1) const;             // 01
		virtual TESRegionDataObjects* IsRegionDataObjects(TESRegionData* a_arg1) const;      // 02
		virtual TESRegionDataWeather* IsRegionDataWeather(TESRegionData* a_arg1) const;      // 03
		virtual TESRegionDataMap* IsRegionDataMap(TESRegionData* a_arg1) const;              // 04
		virtual TESRegionDataLandscape* IsRegionDataLandscape(TESRegionData* a_arg1) const;  // 05
		virtual TESRegionDataGrass* IsRegionDataGrass(TESRegionData* a_arg1) const;          // 06
		virtual TESRegionDataSound* IsRegionDataSound(TESRegionData* a_arg1) const;          // 07
		virtual TESRegionDataImposter* IsRegionDataImposter(TESRegionData* a_arg1) const;    // 08
		virtual bool LoadRegionData(TESFile* apFile, TESRegion* apRegion);                   // 09

		TESRegionDataManager* ctor()
		{
			using func_t = TESRegionDataManager*(__thiscall*)(TESRegionDataManager*);
			static REL::Relocation<func_t> func{ Offsets::TESRegionDataManager::ctor };
			return func(this);
		}

	public:
		// members
		TESRegion* pLastLoadedRegion;  // 04
	};
	static_assert(sizeof(TESRegionDataManager) == 0x8);
}
