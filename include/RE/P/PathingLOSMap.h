#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NavMeshPtr.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiRefObject.h"
#include "RE/N/NiTMap.h"

namespace RE
{
	class NiNode;

	class PathingLOSMap :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingLOSMap };
		static constexpr auto VTABLE{ VTABLE::PathingLOSMap };

		// override (NiRefObject)
		virtual ~PathingLOSMap() = default;  // 00

		char GetAt(std::uint32_t aiOffset) const
		{
			using func_t = decltype(&PathingLOSMap::GetAt);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSMap::GetAt };
			return func(this, aiOffset);
		}

		PathingLOSMap* ctor(NiPoint3 aCenter, float afRadius)
		{
			using func_t = PathingLOSMap*(__thiscall*)(PathingLOSMap*, NiPoint3, float);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSMap::ctor };
			return func(this, aCenter, afRadius);
		}

		bool Setup(BSSimpleArray<NavMeshPtr, 1024> const& aNavMeshes)
		{
			using func_t = decltype(&PathingLOSMap::Setup);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSMap::Setup };
			return func(this, aNavMeshes);
		}

		bool GetNavMeshAndTriangleForIndex(std::uint32_t aiIndex, NavMeshPtr& aRetNavMesh, std::uint16_t& aRetTriangle) const
		{
			using func_t = decltype(&PathingLOSMap::GetNavMeshAndTriangleForIndex);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSMap::GetNavMeshAndTriangleForIndex };
			return func(this, aiIndex, aRetNavMesh, aRetTriangle);
		}

		NiNode* CreateDebugGeometry()
		{
			using func_t = decltype(&PathingLOSMap::CreateDebugGeometry);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSMap::CreateDebugGeometry };
			return func(this);
		}

	public:
		// members
		NiTMap<std::uint32_t, std::uint32_t> NavMeshToOffsetMap;     // 08
		char*                                pTriangleScores;        // 18
		BSSimpleArray<NavMeshPtr, 1024>      NavMeshes;              // 1C
		std::uint32_t                        iTotalTriangleCount;    // 2C
		std::uint32_t                        iTotalTrianglesSeen;    // 30
		std::uint32_t                        iTotalTrianglesUnseen;  // 34
		char                                 iMaxScore;              // 38
		char                                 iMinScore;              // 39
		std::uint16_t                        pad3A;                  // 3A
		NiPoint3                             Center;                 // 3C
		float                                fRadius;                // 48
		float                                fSightRadius;           // 4C
	};
	static_assert(sizeof(PathingLOSMap) == 0x50);
}
