#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class PathingCoverLocation;

	class CoverReservationInfo
	{
	public:
		CoverReservationInfo* ctor()
		{
			using func_t = CoverReservationInfo*(__thiscall*)(CoverReservationInfo*);
			static REL::Relocation<func_t> func{ Offsets::CoverReservationInfo::ctor };
			return func(this);
		}

		void CalculateSegmentInfo(PathingCoverLocation* apCoverLocation)
		{
			using func_t = decltype(&CoverReservationInfo::CalculateSegmentInfo);
			static REL::Relocation<func_t> func{ Offsets::CoverReservationInfo::CalculateSegmentInfo };
			func(this, apCoverLocation);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&CoverReservationInfo::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::CoverReservationInfo::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&CoverReservationInfo::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::CoverReservationInfo::LoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		std::uint8_t cSegmentLength;  // 00
		std::uint8_t cSegmentCount;   // 01
		std::uint8_t cActorWidth;     // 02
		std::uint8_t cSegment;        // 03
		bool         bHideCover;      // 04
		bool         bLeftEdge;       // 05
	};
}
