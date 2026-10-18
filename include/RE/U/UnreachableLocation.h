#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSWorldLocation.h"
#include "RE/C/CombatTimeStamp.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;

	class UnreachableLocation
	{
	public:
		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&UnreachableLocation::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::UnreachableLocation::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&UnreachableLocation::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::UnreachableLocation::LoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		BGSWorldLocation Location;    // 00
		CombatTimeStamp  fTimeStamp;  // 10
	};
	static_assert(sizeof(UnreachableLocation) == 0x14);
}
