#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSoundHandle.h"
#include "RE/T/TESWeather_SoundType.h"

namespace RE
{
	class TESWeather;

	class SkySound
	{
	public:
		SkySound* ctor(BSSoundHandle aSndHandle, TESWeather const* apWeather, TESWeather_SoundType aeSoundType, std::uint32_t aiFormID)
		{
			using func_t = SkySound*(__thiscall*)(SkySound*, BSSoundHandle, TESWeather const*, TESWeather_SoundType, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::SkySound::ctor };
			return func(this, aSndHandle, apWeather, aeSoundType, aiFormID);
		}

		bool HandleCheckTime(std::int32_t aiInterval)
		{
			using func_t = decltype(&SkySound::HandleCheckTime);
			static REL::Relocation<func_t> func{ Offsets::SkySound::HandleCheckTime };
			return func(this, aiInterval);
		}

		void Play(float afVol)
		{
			using func_t = decltype(&SkySound::Play);
			static REL::Relocation<func_t> func{ Offsets::SkySound::Play };
			func(this, afVol);
		}

	public:
		// members
		BSSoundHandle        SndHandle;   // 00
		const TESWeather*    pWeather;    // 0C
		TESWeather_SoundType eSoundType;  // 10
		std::uint32_t        uiFormID;    // 14
		std::uint32_t        uiData;      // 18
	};
}
