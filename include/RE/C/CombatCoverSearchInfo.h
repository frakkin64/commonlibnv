#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/C/COVER_STATE.h"
#include "RE/C/CombatTimeStamp.h"
#include "RE/N/NiPoint3.h"
#include "RE/P/PathingCoverLocation.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;

	class CombatCoverSearchInfo
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(CombatCoverSearchInfo*);
			static REL::Relocation<func_t> func{ Offsets::CombatCoverSearchInfo::dtor };
			func(this);
		}

		void Copy(CombatCoverSearchInfo const* apCopy)
		{
			using func_t = decltype(&CombatCoverSearchInfo::Copy);
			static REL::Relocation<func_t> func{ Offsets::CombatCoverSearchInfo::Copy };
			func(this, apCopy);
		}

		void Clear()
		{
			using func_t = decltype(&CombatCoverSearchInfo::Clear);
			static REL::Relocation<func_t> func{ Offsets::CombatCoverSearchInfo::Clear };
			func(this);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&CombatCoverSearchInfo::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::CombatCoverSearchInfo::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatCoverSearchInfo::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatCoverSearchInfo::LoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		NiPoint3                                  TargetLocation;             // 00
		NiPoint3                                  Center;                     // 0C
		float                                     fRadius;                    // 18
		CombatTimeStamp                           fTimeStamp;                 // 1C
		BSSimpleArray<PathingCoverLocation, 1024> CoverLocations;             // 20
		std::uint32_t                             iPreviousCoverLocationKey;  // 30
		COVER_STATE                               ePreviousCoverState;        // 34
		bool                                      bUsedLastSeenLocation;      // 38
		std::uint8_t                              pad39[0x3];                 // 39
	};
	static_assert(sizeof(CombatCoverSearchInfo) == 0x3C);
}
