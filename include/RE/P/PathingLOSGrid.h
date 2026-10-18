#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class BGSSaveGameBuffer;
	class NavMeshInfo;
	class NavMeshPtr;
	class PathingLOSGridCell;
	class PathingLocation;

	class PathingLOSGrid
	{
	public:
		void Setup(NavMeshInfo* apNavMeshInfo)
		{
			using func_t = void (PathingLOSGrid::*)(NavMeshInfo*);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGrid::Setup };
			func(this, apNavMeshInfo);
		}

		void Setup(NavMeshPtr const& aspNavMesh)
		{
			using func_t = void (PathingLOSGrid::*)(NavMeshPtr const&);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGrid::Setup_1 };
			func(this, aspNavMesh);
		}

		bool IsLocationSeen(PathingLocation const& arLocation) const
		{
			using func_t = decltype(&PathingLOSGrid::IsLocationSeen);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGrid::IsLocationSeen };
			return func(this, arLocation);
		}

		bool SetLocationSeen(PathingLocation const& arLocation, bool abSeen)
		{
			using func_t = decltype(&PathingLOSGrid::SetLocationSeen);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGrid::SetLocationSeen };
			return func(this, arLocation, abSeen);
		}

		void SaveGame(BGSSaveGameBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&PathingLOSGrid::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGrid::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&PathingLOSGrid::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGrid::LoadGame };
			func(this, apLoadGameBuffer);
		}

		PathingLOSGrid* ctor(NavMeshPtr const& aspNavMesh)
		{
			using func_t = PathingLOSGrid*(__thiscall*)(PathingLOSGrid*, NavMeshPtr const&);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGrid::ctor };
			return func(this, aspNavMesh);
		}

		PathingLOSGrid* ctor(NavMeshInfo* apNavMeshInfo)
		{
			using func_t = PathingLOSGrid*(__thiscall*)(PathingLOSGrid*, NavMeshInfo*);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGrid::ctor_1 };
			return func(this, apNavMeshInfo);
		}

	public:
		// members
		BSSimpleArray<PathingLOSGridCell*, 1024> LOSGridCells;  // 00
		NavMeshInfo*                             pNavMeshInfo;  // 10
	};
	static_assert(sizeof(PathingLOSGrid) == 0x14);
}
