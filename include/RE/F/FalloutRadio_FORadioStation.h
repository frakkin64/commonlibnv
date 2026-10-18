#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FalloutRadio_StationState.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class TESObjectREFR;

	class FalloutRadio_FORadioStation
	{
	public:
		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&FalloutRadio_FORadioStation::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::FalloutRadio_FORadioStation::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&FalloutRadio_FORadioStation::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::FalloutRadio_FORadioStation::LoadGame };
			func(this, apLoadGameBuffer);
		}

		void InitLoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&FalloutRadio_FORadioStation::InitLoadGame);
			static REL::Relocation<func_t> func{ Offsets::FalloutRadio_FORadioStation::InitLoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		TESObjectREFR*            pStation;      // 00
		FalloutRadio_StationState CurrentState;  // 04
	};
}
