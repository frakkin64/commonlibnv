#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CoverReservationInfo.h"
#include "RE/N/NiPoint3.h"
#include "RE/P/PathingCoverLocation.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;

	class CombatCoverLocation
	{
	public:
		bool IsReserved()
		{
			using func_t = decltype(&CombatCoverLocation::IsReserved);
			static REL::Relocation<func_t> func{ Offsets::CombatCoverLocation::IsReserved };
			return func(this);
		}

		CombatCoverLocation* ctor()
		{
			using func_t = CombatCoverLocation*(__thiscall*)(CombatCoverLocation*);
			static REL::Relocation<func_t> func{ Offsets::CombatCoverLocation::ctor };
			return func(this);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&CombatCoverLocation::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::CombatCoverLocation::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CombatCoverLocation::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::CombatCoverLocation::LoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		bool                 bDirtyFlag;                        // 00
		bool                 bReserved;                         // 01
		std::uint8_t         cCoverHeight;                      // 02
		std::uint8_t         pad03;                             // 03
		std::int32_t         iLocation;                         // 04
		NiPoint3             CoverSearchTargetLocation;         // 08
		PathingCoverLocation CoverLocation;                     // 14
		std::uint32_t        iCoverLocationKey;                 // 68
		std::uint32_t        iCoverLocationLastMovedTimeStamp;  // 6C
		CoverReservationInfo ReservationInfo;                   // 70
		std::uint16_t        pad76;                             // 76
	};
	static_assert(sizeof(CombatCoverLocation) == 0x78);
}
