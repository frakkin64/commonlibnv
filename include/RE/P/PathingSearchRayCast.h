#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/N/NavMeshEdgeLocation.h"
#include "RE/N/NiPoint3.h"
#include "RE/P/PathingLocation.h"
#include "RE/R/RAYCASTPATH_RESULT.h"
#include "RE/R/RAYCAST_REQUEST_TYPE.h"

namespace RE
{
	class PathingRequest;
	class RayCastPath;
	class RayCastPathRequest;
	class bhkPickData;
	class bhkWorld;
	class hkpClosestRayHitCollector;

	class __declspec(novtable) PathingSearchRayCast
	{
	public:
		static constexpr auto RTTI{ RTTI::PathingSearchRayCast };
		static constexpr auto VTABLE{ VTABLE::PathingSearchRayCast };

		// add
		virtual ~PathingSearchRayCast() = default;  // 00

		PathingSearchRayCast* ctor()
		{
			using func_t = PathingSearchRayCast*(__thiscall*)(PathingSearchRayCast*);
			static REL::Relocation<func_t> func{ Offsets::PathingSearchRayCast::ctor };
			return func(this);
		}

		RAYCASTPATH_RESULT BuildPath(RayCastPathRequest& aRequest, RayCastPath& aRetPath)
		{
			using func_t = decltype(&PathingSearchRayCast::BuildPath);
			static REL::Relocation<func_t> func{ Offsets::PathingSearchRayCast::BuildPath };
			return func(this, aRequest, aRetPath);
		}

		void CreateCache()
		{
			using func_t = decltype(&PathingSearchRayCast::CreateCache);
			static REL::Relocation<func_t> func{ Offsets::PathingSearchRayCast::CreateCache };
			func(this);
		}

		bool InitRayCasts()
		{
			using func_t = decltype(&PathingSearchRayCast::InitRayCasts);
			static REL::Relocation<func_t> func{ Offsets::PathingSearchRayCast::InitRayCasts };
			return func(this);
		}

		void CleanUpRayCasts()
		{
			using func_t = decltype(&PathingSearchRayCast::CleanUpRayCasts);
			static REL::Relocation<func_t> func{ Offsets::PathingSearchRayCast::CleanUpRayCasts };
			func(this);
		}

		bool RayCastRecurse(NiPoint3 const& aStart, NiPoint3 const& aGoal)
		{
			using func_t = decltype(&PathingSearchRayCast::RayCastRecurse);
			static REL::Relocation<func_t> func{ Offsets::PathingSearchRayCast::RayCastRecurse };
			return func(this, aStart, aGoal);
		}

		bool RayCast(NiPoint3 const& aStart, NiPoint3 const& aGoal, NiPoint3& aRetLoc)
		{
			using func_t = decltype(&PathingSearchRayCast::RayCast);
			static REL::Relocation<func_t> func{ Offsets::PathingSearchRayCast::RayCast };
			return func(this, aStart, aGoal, aRetLoc);
		}

		bool UnderWaterRayCast(NiPoint3 const& aStart, NiPoint3 const& aGoal)
		{
			using func_t = decltype(&PathingSearchRayCast::UnderWaterRayCast);
			static REL::Relocation<func_t> func{ Offsets::PathingSearchRayCast::UnderWaterRayCast };
			return func(this, aStart, aGoal);
		}

		void ComputeBounds(BSSimpleArray<NavMeshEdgeLocation, 1024> const& aEdges)
		{
			using func_t = decltype(&PathingSearchRayCast::ComputeBounds);
			static REL::Relocation<func_t> func{ Offsets::PathingSearchRayCast::ComputeBounds };
			func(this, aEdges);
		}

	public:
		// members
		PathingLocation            StartLocation;  // 04
		PathingLocation            GoalLocation;   // 2C
		const PathingRequest*      pRequest;       // 54
		RAYCAST_REQUEST_TYPE       eType;          // 58
		NiPoint3                   BoundsMin;      // 5C
		NiPoint3                   BoundsMax;      // 68
		float                      fActorRadius;   // 74
		char*                      pCache;         // 78
		bhkWorld*                  pHavokWorld;    // 7C
		bhkPickData*               pPickData;      // 80
		hkpClosestRayHitCollector* pCollector;     // 84
		std::int32_t               iRayCastCount;  // 88
		float                      fMaxDrop;       // 8C
		float                      fMaxStep;       // 90
	};
}
