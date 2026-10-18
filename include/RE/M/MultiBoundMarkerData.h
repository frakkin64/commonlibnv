#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPoint3.h"

namespace RE
{
	class BSMultiBound;
	class BSMultiBoundRoom;
	class TESFile;
	class TESObjectREFR;

	class MultiBoundMarkerData
	{
	public:
		bool Load(TESFile* apFile)
		{
			using func_t = decltype(&MultiBoundMarkerData::Load);
			static REL::Relocation<func_t> func{ Offsets::MultiBoundMarkerData::Load };
			return func(this, apFile);
		}

		static BSMultiBound* CreateMultiBoundForRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&MultiBoundMarkerData::CreateMultiBoundForRef);
			static REL::Relocation<func_t> func{ Offsets::MultiBoundMarkerData::CreateMultiBoundForRef };
			return func(apRef);
		}

		static BSMultiBoundRoom* CreateRoomForRef(TESObjectREFR* apRef)
		{
			using func_t = decltype(&MultiBoundMarkerData::CreateRoomForRef);
			static REL::Relocation<func_t> func{ Offsets::MultiBoundMarkerData::CreateRoomForRef };
			return func(apRef);
		}

		static bool MultiBoundIntersectsCell(TESObjectREFR* apRef, std::int32_t aiCellX, std::int32_t aiCellY)
		{
			using func_t = decltype(&MultiBoundMarkerData::MultiBoundIntersectsCell);
			static REL::Relocation<func_t> func{ Offsets::MultiBoundMarkerData::MultiBoundIntersectsCell };
			return func(apRef, aiCellX, aiCellY);
		}

	public:
		// members
		NiPoint3 HalfExtents;  // 00
	};
	static_assert(sizeof(MultiBoundMarkerData) == 0xC);
}
