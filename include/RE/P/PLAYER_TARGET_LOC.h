#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class TESObjectCELL;
	class TESObjectREFR;
	class TESWorldSpace;

	class PLAYER_TARGET_LOC
	{
	public:
		// members
		TESWorldSpace* pWorld;             // 00
		TESObjectCELL* pInterior;          // 04
		NiPoint3       Location;           // 08
		NiPoint3       Angle;              // 14
		bool           bResetWeather;      // 20
		std::uint8_t   pad21[0x3];         // 21
		void*          pfnArrivalFunc;     // 24
		std::int32_t   iArrivalFuncData;   // 28
		TESObjectREFR* pFurnitureRef;      // 2C
		TESObjectREFR* pFastTravelMarker;  // 30
	};
	static_assert(sizeof(PLAYER_TARGET_LOC) == 0x34);
}
