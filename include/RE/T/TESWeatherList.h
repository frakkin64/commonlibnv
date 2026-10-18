#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/C/CHUNK_ID.h"

namespace RE
{
	class TESFile;
	class TESForm;
	class WeatherEntry;

	class TESWeatherList :
		public BSSimpleList<WeatherEntry*>  // 00
	{
	public:
		void Save(CHUNK_ID aeChunkID)
		{
			using func_t = decltype(&TESWeatherList::Save);
			static REL::Relocation<func_t> func{ Offsets::TESWeatherList::Save };
			func(this, aeChunkID);
		}

		static void LoadWeatherListChunk(TESWeatherList* apWeatherList, TESFile* apFile, TESForm* pForm)
		{
			using func_t = decltype(&TESWeatherList::LoadWeatherListChunk);
			static REL::Relocation<func_t> func{ Offsets::TESWeatherList::LoadWeatherListChunk };
			func(apWeatherList, apFile, pForm);
		}
	};
}
