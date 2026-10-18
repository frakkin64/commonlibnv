#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class BGSMusicType;
	class TESRegionSound;

	class TESRegionSounds
	{
	public:
		// members
		BGSMusicType*                 pType;                 // 00
		BSSimpleList<TESRegionSound*> soundList;             // 04
		std::uint32_t                 pMediaSetIncidentals;  // 0C
		BSSimpleList<std::uint32_t>   MediaSetBattleList;    // 10
	};
}
