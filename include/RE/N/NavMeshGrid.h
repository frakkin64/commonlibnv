#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class TESFile;

	class NavMeshGrid
	{
	public:
		void GetGridRowAndColumn(NiPoint3 const& aLoc, std::uint32_t* apRetRow, std::uint32_t* apRetCol) const
		{
			using func_t = decltype(&NavMeshGrid::GetGridRowAndColumn);
			static REL::Relocation<func_t> func{ Offsets::NavMeshGrid::GetGridRowAndColumn };
			func(this, aLoc, apRetRow, apRetCol);
		}

		void Clear()
		{
			using func_t = decltype(&NavMeshGrid::Clear);
			static REL::Relocation<func_t> func{ Offsets::NavMeshGrid::Clear };
			func(this);
		}

		void GetTriangleData(NiPoint3 const& aLoc, BSSimpleArray<std::uint16_t, 1024> const*& apArray) const
		{
			using func_t = decltype(&NavMeshGrid::GetTriangleData);
			static REL::Relocation<func_t> func{ Offsets::NavMeshGrid::GetTriangleData };
			func(this, aLoc, apArray);
		}

		void GetTriangleDataForAABB(NiPoint3 const& aLocStart, NiPoint3 const& aLocEnd, BSSimpleArray<std::uint16_t, 1024>* apReturnArray) const
		{
			using func_t = decltype(&NavMeshGrid::GetTriangleDataForAABB);
			static REL::Relocation<func_t> func{ Offsets::NavMeshGrid::GetTriangleDataForAABB };
			func(this, aLocStart, aLocEnd, apReturnArray);
		}

		void SetBoundingExtents(NiPoint3 const& aMin, NiPoint3 const& aMax, std::uint32_t aiNumTriangles)
		{
			using func_t = decltype(&NavMeshGrid::SetBoundingExtents);
			static REL::Relocation<func_t> func{ Offsets::NavMeshGrid::SetBoundingExtents };
			func(this, aMin, aMax, aiNumTriangles);
		}

		bool Load(char const* apBuffer, std::uint32_t aiBufferSize, TESFile* apFile)
		{
			using func_t = decltype(&NavMeshGrid::Load);
			static REL::Relocation<func_t> func{ Offsets::NavMeshGrid::Load };
			return func(this, apBuffer, aiBufferSize, apFile);
		}

		void CopyTo(NavMeshGrid* apGrid) const
		{
			using func_t = decltype(&NavMeshGrid::CopyTo);
			static REL::Relocation<func_t> func{ Offsets::NavMeshGrid::CopyTo };
			func(this, apGrid);
		}

	public:
		// members
		std::uint32_t                       iGridSize;          // 00
		float                               fColumnSectionLen;  // 04
		float                               fRowSectionLen;     // 08
		NiPoint3                            GridBoundsMin;      // 0C
		NiPoint3                            GridBoundsMax;      // 18
		BSSimpleArray<std::uint16_t, 1024>* GridData;           // 24
	};
}
