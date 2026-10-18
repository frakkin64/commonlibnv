#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSReadWriteLock.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/N/NavMeshPtr.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"
#include "RE/N/NiTMap.h"
#include "RE/P/PathingLocation.h"

namespace RE
{
	class BGSLoadGameBuffer;
	class PathingLOSGrid;
	class PathingLOSMap;

	class PathingLOSGridMap :
		public NiRefObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingLOSGridMap };
		static constexpr auto VTABLE{ VTABLE::PathingLOSGridMap };

		// override (NiRefObject)
		virtual ~PathingLOSGridMap() = default;  // 00

		PathingLOSGridMap* ctor()
		{
			using func_t = PathingLOSGridMap*(__thiscall*)(PathingLOSGridMap*);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGridMap::ctor };
			return func(this);
		}

		void Initialize(PathingLocation const& arCenter, float afRadius)
		{
			using func_t = decltype(&PathingLOSGridMap::Initialize);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGridMap::Initialize };
			func(this, arCenter, afRadius);
		}

		void Clear()
		{
			using func_t = decltype(&PathingLOSGridMap::Clear);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGridMap::Clear };
			func(this);
		}

		void ClearSeen()
		{
			using func_t = decltype(&PathingLOSGridMap::ClearSeen);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGridMap::ClearSeen };
			func(this);
		}

		bool SetLOSMapFromSeenTriangles(NiPointer<PathingLOSMap>& aspLOSMap)
		{
			using func_t = decltype(&PathingLOSGridMap::SetLOSMapFromSeenTriangles);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGridMap::SetLOSMapFromSeenTriangles };
			return func(this, aspLOSMap);
		}

		bool SetSeenTrianglesFromLOSMap(NiPointer<PathingLOSMap>& aspLOSMap)
		{
			using func_t = decltype(&PathingLOSGridMap::SetSeenTrianglesFromLOSMap);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGridMap::SetSeenTrianglesFromLOSMap };
			return func(this, aspLOSMap);
		}

		void LoadGame(BGSLoadGameBuffer* apLoadGameBuffer)
		{
			using func_t = decltype(&PathingLOSGridMap::LoadGame);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGridMap::LoadGame };
			func(this, apLoadGameBuffer);
		}

	private:
		bool Setup(BSSimpleArray<NavMeshPtr, 1024> const& aNavMeshes)
		{
			using func_t = decltype(&PathingLOSGridMap::Setup);
			static REL::Relocation<func_t> func{ Offsets::PathingLOSGridMap::Setup };
			return func(this, aNavMeshes);
		}

	public:
		// members
		NiTMap<std::uint32_t, PathingLOSGrid*> NavMeshToLOSGridMap;  // 08
		float                                  fPercentSeen;         // 18
		PathingLocation                        Center;               // 1C
		float                                  fRadius;              // 44
		float                                  fSightRadius;         // 48
		BSReadWriteLock                        Lock;                 // 4C
	};
	static_assert(sizeof(PathingLOSGridMap) == 0x54);
}
