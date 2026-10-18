#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class CreatedReferenceInitialData;
	class MovedReferenceInitialData;
	class TESObjectCELL;
	class TESWorldSpace;

	class ReferenceInitialData
	{
	public:
		ReferenceInitialData* ctor()
		{
			using func_t = ReferenceInitialData*(__thiscall*)(ReferenceInitialData*);
			static REL::Relocation<func_t> func{ Offsets::ReferenceInitialData::ctor };
			return func(this);
		}

		void Initialize(CreatedReferenceInitialData* apCreatedReferenceInitialData)
		{
			using func_t = void (ReferenceInitialData::*)(CreatedReferenceInitialData*);
			static REL::Relocation<func_t> func{ Offsets::ReferenceInitialData::Initialize };
			func(this, apCreatedReferenceInitialData);
		}

		void Initialize(MovedReferenceInitialData* apMovedReferenceInitialData)
		{
			using func_t = void (ReferenceInitialData::*)(MovedReferenceInitialData*);
			static REL::Relocation<func_t> func{ Offsets::ReferenceInitialData::Initialize_1 };
			func(this, apMovedReferenceInitialData);
		}

		bool GetLocationCellAndWorld(TESObjectCELL*& arpCell, TESWorldSpace*& arpWorld)
		{
			using func_t = decltype(&ReferenceInitialData::GetLocationCellAndWorld);
			static REL::Relocation<func_t> func{ Offsets::ReferenceInitialData::GetLocationCellAndWorld };
			return func(this, arpCell, arpWorld);
		}

		bool GetOriginalLocationCellAndWorld(TESObjectCELL*& arpCell, TESWorldSpace*& arpWorld)
		{
			using func_t = decltype(&ReferenceInitialData::GetOriginalLocationCellAndWorld);
			static REL::Relocation<func_t> func{ Offsets::ReferenceInitialData::GetOriginalLocationCellAndWorld };
			return func(this, arpCell, arpWorld);
		}

	public:
		// members
		std::uint32_t iLocationID;             // 00
		std::uint32_t iBoundID;                // 04
		std::uint32_t iOriginalLocationID;     // 08
		std::int32_t  iOriginalCellX;          // 0C
		std::int32_t  iOriginalCellY;          // 10
		NiPoint3      Location;                // 14
		NiPoint3      Angle;                   // 20
		std::uint8_t  cCreatedReferenceFlags;  // 2C
		std::uint8_t  pad2D[0x3];              // 2D
	};
}
