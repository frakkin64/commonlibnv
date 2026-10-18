#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AStarDefaultHeap.h"
#include "RE/B/BSScrapArray.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/N/NavMeshEdgeHandle.h"
#include "RE/N/NavMeshSearchLink.h"
#include "RE/N/NavMeshSearchNode.h"
#include "RE/N/NavMeshTriHandle.h"
#include "RE/N/NiPoint3.h"
#include "RE/P/PathingLocation.h"

namespace RE
{
	class NavMeshInfo;
	class PathingRequest;
	class PathingSolution;

	class PathSmoother
	{
	public:
		class AvoidNode;
		class BoundsEdge;
		class PathEdge;
		class UniqueVert;

		enum class ENTER_LEAVE_WATER : std::int32_t
		{
			kELW_NONE = 0x0,
			kELW_ENTER = 0x1,
			kELW_LEAVE = 0x2,
		};

		class AvoidNode
		{
		public:
			bool IsPointInNode(NiPoint3 const& aPoint)
			{
				using func_t = decltype(&AvoidNode::IsPointInNode);
				static REL::Relocation<func_t> func{ Offsets::PathSmoother_AvoidNode::IsPointInNode };
				return func(this, aPoint);
			}

		public:
			// members
			NiPoint3 Center;   // 00
			float    fRadius;  // 0C
		};
		static_assert(sizeof(AvoidNode) == 0x10);

		class BoundsEdge
		{
		public:
			// members
			PathSmoother::UniqueVert* pStartVert;    // 00
			PathSmoother::UniqueVert* pEndVert;      // 04
			NavMeshEdgeHandle         hNavMeshEdge;  // 08
			bool                      bOpenEdge;     // 14
			std::uint8_t              pad15[0x3];    // 15
			std::uint32_t             iEdgeIndex;    // 18
		};
		static_assert(sizeof(BoundsEdge) == 0x1C);

		class PathEdge
		{
		public:
			// members
			PathSmoother::UniqueVert*       pLeftVert;             // 00
			PathSmoother::UniqueVert*       pRightVert;            // 04
			NiPoint3                        Center;                // 08
			NiPoint3                        BestPointOnEdge;       // 14
			NiPoint3                        LeftShrunkLocation;    // 20
			NiPoint3                        RightShrunkLocation;   // 2C
			float                           fTriangleNormalDelta;  // 38
			NavMeshEdgeHandle               hNavMeshEdge;          // 3C
			std::uint32_t                   iPathEdgeIndex;        // 48
			PathSmoother::BoundsEdge*       pPrevLeftEdge;         // 4C
			PathSmoother::BoundsEdge*       pPrevRightEdge;        // 50
			PathSmoother::ENTER_LEAVE_WATER eEnterLeaveWater;      // 54
		};
		static_assert(sizeof(PathEdge) == 0x58);

		class UniqueVert
		{
		public:
			// members
			NiPoint3                                    Location;        // 00
			NiPoint3                                    ShrunkLocation;  // 0C
			NiPoint3                                    PushDelta;       // 18
			NavMeshTriHandle                            hNavMeshTri;     // 24
			BSScrapArray<PathSmoother::PathEdge*, 1024> EdgeList;        // 2C
		};
		static_assert(sizeof(UniqueVert) == 0x40);

		PathSmoother* ctor()
		{
			using func_t = PathSmoother*(__thiscall*)(PathSmoother*);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(PathSmoother*);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::dtor };
			func(this);
		}

		bool SmoothPath(PathingRequest* apRequest, BSSimpleArray<NavMeshSearchNode, 1024> const& aTriSolution, BSSimpleArray<NavMeshSearchLink, 1024> const& aLinks, NiPoint3 const& aStartLocation, NiPoint3 const& aGoalLocation, PathingSolution* apSolution, BSSimpleArray<NavMeshSearchLink, 1024>* apBadNodeArray, bool abAddNodesIfFail)
		{
			using func_t = decltype(&PathSmoother::SmoothPath);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::SmoothPath };
			return func(this, apRequest, aTriSolution, aLinks, aStartLocation, aGoalLocation, apSolution, apBadNodeArray, abAddNodesIfFail);
		}

	private:
		void AddPathingNode(NiPoint3 const& aLocation, NavMeshInfo* apInfo)
		{
			using func_t = void (PathSmoother::*)(NiPoint3 const&, NavMeshInfo*);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::AddPathingNode };
			func(this, aLocation, apInfo);
		}

		void AddPathingNode(PathingLocation const& aLocation)
		{
			using func_t = void (PathSmoother::*)(PathingLocation const&);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::AddPathingNode_1 };
			func(this, aLocation);
		}

		void BuildInternalArrays()
		{
			using func_t = decltype(&PathSmoother::BuildInternalArrays);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::BuildInternalArrays };
			func(this);
		}

		void AddStartVert()
		{
			using func_t = decltype(&PathSmoother::AddStartVert);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::AddStartVert };
			func(this);
		}

		PathSmoother::UniqueVert* CreateVert()
		{
			using func_t = decltype(&PathSmoother::CreateVert);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::CreateVert };
			return func(this);
		}

		void AddFirstEdge(NiPoint3 const& aLeftLocation, NiPoint3 const& aRightLocation)
		{
			using func_t = decltype(&PathSmoother::AddFirstEdge);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::AddFirstEdge };
			func(this, aLeftLocation, aRightLocation);
		}

		PathSmoother::BoundsEdge* CreateBoundsEdge()
		{
			using func_t = decltype(&PathSmoother::CreateBoundsEdge);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::CreateBoundsEdge };
			return func(this);
		}

		PathSmoother::PathEdge* CreatePathEdge()
		{
			using func_t = decltype(&PathSmoother::CreatePathEdge);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::CreatePathEdge };
			return func(this);
		}

		void AddLeftVert(NiPoint3 const& aLocation, std::uint32_t aiEdgeIndex)
		{
			using func_t = decltype(&PathSmoother::AddLeftVert);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::AddLeftVert };
			func(this, aLocation, aiEdgeIndex);
		}

		void AddRightVert(NiPoint3 const& aLocation, std::uint32_t aiEdgeIndex)
		{
			using func_t = decltype(&PathSmoother::AddRightVert);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::AddRightVert };
			func(this, aLocation, aiEdgeIndex);
		}

		void AddGoalVert()
		{
			using func_t = decltype(&PathSmoother::AddGoalVert);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::AddGoalVert };
			func(this);
		}

		PathSmoother::UniqueVert* DuplicateVert(std::uint32_t aiVertIndex, bool abLeft, NiPoint3 const& aPreviousVertNewLocation, NiPoint3 const& aNewVertLocation)
		{
			using func_t = decltype(&PathSmoother::DuplicateVert);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::DuplicateVert };
			return func(this, aiVertIndex, abLeft, aPreviousVertNewLocation, aNewVertLocation);
		}

		PathSmoother::UniqueVert* SplitBoundsEdge(std::uint32_t aiEdgeIndex, bool abLeft)
		{
			using func_t = decltype(&PathSmoother::SplitBoundsEdge);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::SplitBoundsEdge };
			return func(this, aiEdgeIndex, abLeft);
		}

		void BuildShrunkEdgeLeftRightArrays()
		{
			using func_t = decltype(&PathSmoother::BuildShrunkEdgeLeftRightArrays);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::BuildShrunkEdgeLeftRightArrays };
			func(this);
		}

		std::uint32_t ComputeShrunkPoint(std::uint32_t aiCurrentVertIndex, float afDistance, bool abLeftEdge)
		{
			using func_t = decltype(&PathSmoother::ComputeShrunkPoint);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::ComputeShrunkPoint };
			return func(this, aiCurrentVertIndex, afDistance, abLeftEdge);
		}

		bool CheckBoundsEdges()
		{
			using func_t = decltype(&PathSmoother::CheckBoundsEdges);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::CheckBoundsEdges };
			return func(this);
		}

		bool TestBoundsEdgeAgainstOtherBound(PathSmoother::BoundsEdge* apEdge1, PathSmoother::BoundsEdge* apEdge2, bool abLeft)
		{
			using func_t = decltype(&PathSmoother::TestBoundsEdgeAgainstOtherBound);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::TestBoundsEdgeAgainstOtherBound };
			return func(this, apEdge1, apEdge2, abLeft);
		}

		bool PushPoint(NiPoint3 const& aPoint, NiPoint3& aRetLocation, NavMeshTriHandle aTri, NiPoint3 const& aPushDelta, NiPoint3 const& aPrevPoint, NiPoint3 const& aNextPoint)
		{
			using func_t = decltype(&PathSmoother::PushPoint);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::PushPoint };
			return func(this, aPoint, aRetLocation, aTri, aPushDelta, aPrevPoint, aNextPoint);
		}

		void BuildBestPointOnEdge()
		{
			using func_t = decltype(&PathSmoother::BuildBestPointOnEdge);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::BuildBestPointOnEdge };
			func(this);
		}

		void HandleWaterTriangles()
		{
			using func_t = decltype(&PathSmoother::HandleWaterTriangles);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::HandleWaterTriangles };
			func(this);
		}

		void BuildStraightenedPath()
		{
			using func_t = decltype(&PathSmoother::BuildStraightenedPath);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::BuildStraightenedPath };
			func(this);
		}

		void HandleAvoidNodes()
		{
			using func_t = decltype(&PathSmoother::HandleAvoidNodes);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::HandleAvoidNodes };
			func(this);
		}

		void BuildFinalPath(bool abAddStartNode, bool abAddGoalNode)
		{
			using func_t = decltype(&PathSmoother::BuildFinalPath);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::BuildFinalPath };
			func(this, abAddStartNode, abAddGoalNode);
		}

		void ComputeTangents()
		{
			using func_t = decltype(&PathSmoother::ComputeTangents);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::ComputeTangents };
			func(this);
		}

		bool IsSegmentValid(NiPoint3 const& aStart, NiPoint3 const& aEnd)
		{
			using func_t = decltype(&PathSmoother::IsSegmentValid);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::IsSegmentValid };
			return func(this, aStart, aEnd);
		}

		bool PointInShrunkPath(NiPoint3 const& aPoint)
		{
			using func_t = decltype(&PathSmoother::PointInShrunkPath);
			static REL::Relocation<func_t> func{ Offsets::PathSmoother::PointInShrunkPath };
			return func(this, aPoint);
		}

	public:
		// members
		BSSimpleArray<NavMeshSearchLink, 1024>*       pBadNodes;         // 00
		PathingRequest*                               pRequest;          // 04
		NiPoint3                                      StartLocation;     // 08
		NiPoint3                                      GoalLocation;      // 14
		const BSSimpleArray<NavMeshSearchNode, 1024>* Triangles;         // 20
		const BSSimpleArray<NavMeshSearchLink, 1024>* Edges;             // 24
		PathingSolution*                              pSolution;         // 28
		float                                         fSmoothingRadius;  // 2C
		AStarDefaultHeap                              TheScrapHeap;      // 30
		BSScrapArray<PathSmoother::UniqueVert*, 1024> LeftVerts;         // 40
		BSScrapArray<PathSmoother::UniqueVert*, 1024> RightVerts;        // 54
		BSScrapArray<PathSmoother::BoundsEdge*, 1024> LeftEdges;         // 68
		BSScrapArray<PathSmoother::BoundsEdge*, 1024> RightEdges;        // 7C
		BSScrapArray<PathSmoother::PathEdge*, 1024>   PathEdges;         // 90
		BSScrapArray<PathingLocation, 1024>           StraightenedPath;  // A4?
	};
}
