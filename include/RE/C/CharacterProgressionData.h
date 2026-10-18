#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;

	class CharacterProgressionData
	{
	public:
		bool CheckCanLevelUp(std::int32_t aiToLevel)
		{
			using func_t = decltype(&CharacterProgressionData::CheckCanLevelUp);
			static REL::Relocation<func_t> func{ Offsets::CharacterProgressionData::CheckCanLevelUp };
			return func(this, aiToLevel);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&CharacterProgressionData::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::CharacterProgressionData::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CharacterProgressionData::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::CharacterProgressionData::LoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		bool         bReadyToLevelUp;  // 00
		std::uint8_t pad01[0x3];       // 01
		std::int32_t iNextThreshold;   // 04
		bool         bIgnoreCallback;  // 08?
		std::uint8_t pad09[0x3];       // 09
	};
}
