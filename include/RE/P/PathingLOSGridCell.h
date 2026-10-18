#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class NavMeshInfo;
	class PathingLOSMap;
	class PathingLocation;

	class PathingLOSGridCell
	{
	public:
		bool SetLOSMapFromSeenTriangles(NiPointer<PathingLOSMap>& aspLOSMap)
		{
			using func_t = decltype(&PathingLOSGridCell::SetLOSMapFromSeenTriangles);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGridCell::SetLOSMapFromSeenTriangles };
			return func(this, aspLOSMap);
		}

		bool SetSeenTrianglesFromLOSMap(NiPointer<PathingLOSMap>& aspLOSMap)
		{
			using func_t = decltype(&PathingLOSGridCell::SetSeenTrianglesFromLOSMap);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGridCell::SetSeenTrianglesFromLOSMap };
			return func(this, aspLOSMap);
		}

		bool IsLocationSeen(PathingLocation const& arLocation) const
		{
			using func_t = decltype(&PathingLOSGridCell::IsLocationSeen);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGridCell::IsLocationSeen };
			return func(this, arLocation);
		}

		bool SetLocationSeen(PathingLocation const& arLocation, bool abSeen)
		{
			using func_t = decltype(&PathingLOSGridCell::SetLocationSeen);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGridCell::SetLocationSeen };
			return func(this, arLocation, abSeen);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&PathingLOSGridCell::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGridCell::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&PathingLOSGridCell::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGridCell::LoadGame };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		bool                      bAllSeen;               // 00
		std::uint8_t              pad01[0x3];             // 01
		BSSimpleArray<char, 1024> SeenTriangleList;       // 04
		NavMeshInfo*              pNavMeshInfo;           // 14
		std::uint32_t             iNavMeshGridCellIndex;  // 18
	};
	static_assert(sizeof(PathingLOSGridCell) == 0x1C);
}
