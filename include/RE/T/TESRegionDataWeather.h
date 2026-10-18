#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESRegionData.h"
#include "RE/T/TESWeatherList.h"

namespace RE
{
	class TESFile;
	class TESRegion;

	class TESRegionDataWeather :
		public TESRegionData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESRegionDataWeather };
		static constexpr auto VTABLE{ VTABLE::TESRegionDataWeather };

		// override (TESRegionData)
		virtual ~TESRegionDataWeather() = default;                                           // 00
		virtual void Save() override;                                                        // 01
		virtual void BlendInto(const TESRegionData* a_arg1, std::uint32_t a_arg2) override;  // 07

		// add
		virtual void LoadRegionDataWeather(TESFile* apFile, TESRegion* apRegion);  // 09

		// members
		TESWeatherList weatherList;  // 08
	};
	static_assert(sizeof(TESRegionDataWeather) == 0x10);
}
