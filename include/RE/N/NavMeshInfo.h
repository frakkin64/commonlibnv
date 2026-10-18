#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NavMesh;
	class NavMeshBounds;
	class NavMeshPtr;
	class TESFile;
	class TESForm;
	class TESObjectCELL;
	class TESObjectREFR;
	class TESWorldSpace;

	class NavMeshInfo
	{
	public:
		bool GetDisabled() const
		{
			using func_t = decltype(&NavMeshInfo::GetDisabled);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::GetDisabled };
			return func(this);
		}

		TESWorldSpace* GetWorldSpace() const
		{
			using func_t = decltype(&NavMeshInfo::GetWorldSpace);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::GetWorldSpace };
			return func(this);
		}

		TESForm* GetParentSpace() const
		{
			using func_t = decltype(&NavMeshInfo::GetParentSpace);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::GetParentSpace };
			return func(this);
		}

		bool GetNavMeshEvenDisabled(NavMeshPtr& aReturnNavMeshPtr) const
		{
			using func_t = decltype(&NavMeshInfo::GetNavMeshEvenDisabled);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::GetNavMeshEvenDisabled };
			return func(this, aReturnNavMeshPtr);
		}

		void SetDisabled(bool abDisable)
		{
			using func_t = decltype(&NavMeshInfo::SetDisabled);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::SetDisabled };
			func(this, abDisable);
		}

		bool GetNavMesh(NavMeshPtr& aReturnNavMeshPtr) const
		{
			using func_t = decltype(&NavMeshInfo::GetNavMesh);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::GetNavMesh };
			return func(this, aReturnNavMeshPtr);
		}

		bool HasNavMesh() const
		{
			using func_t = decltype(&NavMeshInfo::HasNavMesh);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::HasNavMesh };
			return func(this);
		}

		NavMeshInfo* ctor()
		{
			using func_t = NavMeshInfo*(__thiscall*)(NavMeshInfo*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(NavMeshInfo*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::dtor };
			func(this);
		}

		void FillInfoChunk(char* apChunkBuffer)
		{
			using func_t = decltype(&NavMeshInfo::FillInfoChunk);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::FillInfoChunk };
			func(this, apChunkBuffer);
		}

		void SetFromInfoChunk(char* apChunkBuffer, TESFile* apFile, std::int32_t aiFileVersionNumber)
		{
			using func_t = decltype(&NavMeshInfo::SetFromInfoChunk);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::SetFromInfoChunk };
			func(this, apChunkBuffer, apFile, aiFileVersionNumber);
		}

		void FillPortalChunk(char* apChunkBuffer)
		{
			using func_t = decltype(&NavMeshInfo::FillPortalChunk);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::FillPortalChunk };
			func(this, apChunkBuffer);
		}

		void SetFromPortalChunk(char* apChunkBuffer, TESFile* apFile, std::int32_t aiFileVersionNumber)
		{
			using func_t = decltype(&NavMeshInfo::SetFromPortalChunk);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::SetFromPortalChunk };
			func(this, apChunkBuffer, apFile, aiFileVersionNumber);
		}

		void InitDoorPointers()
		{
			using func_t = decltype(&NavMeshInfo::InitDoorPointers);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::InitDoorPointers };
			func(this);
		}

		void CreateFromNavMesh(NavMesh* apNavMesh)
		{
			using func_t = decltype(&NavMeshInfo::CreateFromNavMesh);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::CreateFromNavMesh };
			func(this, apNavMesh);
		}

		void CopyTo(NavMeshInfo* apDestInfo) const
		{
			using func_t = decltype(&NavMeshInfo::CopyTo);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::CopyTo };
			func(this, apDestInfo);
		}

		TESObjectCELL* GetCell() const
		{
			using func_t = decltype(&NavMeshInfo::GetCell);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::GetCell };
			return func(this);
		}

		TESObjectCELL* GetInteriorCell() const
		{
			using func_t = decltype(&NavMeshInfo::GetInteriorCell);
			static REL::Relocation<func_t> func{ Offsets::NavMeshInfo::GetInteriorCell };
			return func(this);
		}

	public:
		// members
		std::uint32_t                       NavMeshID;                   // 00
		std::uint32_t                       ParentSpaceID;               // 04
		std::uint32_t                       uiFlags;                     // 08
		std::int32_t                        iCellKey;                    // 0C
		NiPoint3                            ApproxLocation;              // 10
		TESForm*                            pParentSpace;                // 1C
		float                               fPreferredPercent;           // 20
		BSSimpleArray<NavMeshInfo*, 1024>   AdjacentNavMeshes;           // 24
		BSSimpleArray<NavMeshInfo*, 1024>   PreferredAdjacentNavMeshes;  // 34
		BSSimpleArray<TESObjectREFR*, 1024> ConnectedDoors;              // 44
		NavMesh*                            pNavMesh;                    // 54
		NavMeshBounds*                      pBounds;                     // 58
	};
	static_assert(sizeof(NavMeshInfo) == 0x5C);
}
