#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESFullName.h"

namespace RE
{
	class TESFile;
	class TESReputation;

	class MapMarkerData
	{
	public:
		MapMarkerData* ctor()
		{
			using func_t = MapMarkerData*(__thiscall*)(MapMarkerData*);
			static REL::Relocation<func_t> func{ Offsets::MapMarkerData::ctor };
			return func(this);
		}

		void Save()
		{
			using func_t = decltype(&MapMarkerData::Save);
			static REL::Relocation<func_t> func{ Offsets::MapMarkerData::Save };
			func(this);
		}

		bool Load(TESFile* apFile)
		{
			using func_t = decltype(&MapMarkerData::Load);
			static REL::Relocation<func_t> func{ Offsets::MapMarkerData::Load };
			return func(this, apFile);
		}

		char const* GetLocationName()
		{
			using func_t = decltype(&MapMarkerData::GetLocationName);
			static REL::Relocation<func_t> func{ Offsets::MapMarkerData::GetLocationName };
			return func(this);
		}

		bool GetVisible()
		{
			using func_t = decltype(&MapMarkerData::GetVisible);
			static REL::Relocation<func_t> func{ Offsets::MapMarkerData::GetVisible };
			return func(this);
		}

		bool GetTravelLoc()
		{
			using func_t = decltype(&MapMarkerData::GetTravelLoc);
			static REL::Relocation<func_t> func{ Offsets::MapMarkerData::GetTravelLoc };
			return func(this);
		}

		void SetVisible(bool abVal)
		{
			using func_t = decltype(&MapMarkerData::SetVisible);
			static REL::Relocation<func_t> func{ Offsets::MapMarkerData::SetVisible };
			func(this, abVal);
		}

		void SetTravelLoc(bool abVal)
		{
			using func_t = decltype(&MapMarkerData::SetTravelLoc);
			static REL::Relocation<func_t> func{ Offsets::MapMarkerData::SetTravelLoc };
			func(this, abVal);
		}

	public:
		// members
		TESFullName    LocationName;    // 00
		std::uint8_t   cFlags;          // 0C
		std::uint8_t   cOriginalFlags;  // 0D
		std::uint16_t  sType;           // 0E
		TESReputation* pReputation;     // 10
	};
	static_assert(sizeof(MapMarkerData) == 0x14);
}
