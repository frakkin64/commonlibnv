#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/N/NiPoint3.h"
#include "RE/T/TESFullName.h"

namespace RE
{
	class AudioBuoyMarkerInfo;
	class TESFile;

	class AudioMarkerData
	{
	public:
		void Save()
		{
			using func_t = decltype(&AudioMarkerData::Save);
			static REL::Relocation<func_t> func{ Offsets::AudioMarkerData::Save };
			func(this);
		}

		bool Load(TESFile* apFile)
		{
			using func_t = decltype(&AudioMarkerData::Load);
			static REL::Relocation<func_t> func{ Offsets::AudioMarkerData::Load };
			return func(this, apFile);
		}

	public:
		// members
		TESFullName                        LocationName;        // 00
		float                              SecondLayerPercent;  // 0C
		float                              ThirdLayerPercent;   // 10
		float                              fRadius;             // 14
		NiPoint3                           Location;            // 18
		std::uint32_t                      pController;         // 24
		bool                               bUseController;      // 28
		std::uint8_t                       pad29[0x3];          // 29
		BSSimpleList<AudioBuoyMarkerInfo*> lBuoyMarkers;        // 2C
	};
	static_assert(sizeof(AudioMarkerData) == 0x34);
}
