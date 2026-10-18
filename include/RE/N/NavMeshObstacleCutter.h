#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/AStarDefaultHeap.h"
#include "RE/B/BSScrapArray.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/B/BoundsTriangleInfo.h"
#include "RE/E/EDGE_TYPE.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NavMesh;
	class NavMeshObstacleEdge;
	class NavMeshObstacleVertex;
	class NiPoint3;
	class ObstacleData;
	class ObstacleUndoData;
	class TaskPortalSwap;

	class NavMeshObstacleCutter
	{
	public:
		NavMeshObstacleCutter* ctor()
		{
			using func_t = NavMeshObstacleCutter*(__thiscall*)(NavMeshObstacleCutter*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(NavMeshObstacleCutter*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::dtor };
			func(this);
		}

		bool SplitNavMeshFromObstacle(NavMesh* apNavMesh, NiPointer<ObstacleData> const& aBox, TaskPortalSwap& aPortalSwaps)
		{
			using func_t = decltype(&NavMeshObstacleCutter::SplitNavMeshFromObstacle);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::SplitNavMeshFromObstacle };
			return func(this, apNavMesh, aBox, aPortalSwaps);
		}

		bool UndoNavMeshFromObstacleUndoData(NavMesh* apNavMesh, ObstacleUndoData* apUndoData, TaskPortalSwap& aPortalSwaps)
		{
			using func_t = decltype(&NavMeshObstacleCutter::UndoNavMeshFromObstacleUndoData);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::UndoNavMeshFromObstacleUndoData };
			return func(this, apNavMesh, apUndoData, aPortalSwaps);
		}

		bool ResetNavMeshFromObstacleUndoData(NavMesh* apNavMesh, ObstacleUndoData* apUndoData)
		{
			using func_t = decltype(&NavMeshObstacleCutter::ResetNavMeshFromObstacleUndoData);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::ResetNavMeshFromObstacleUndoData };
			return func(this, apNavMesh, apUndoData);
		}

	private:
		std::uint32_t GetTrianglesMaxObstacleCount()
		{
			using func_t = decltype(&NavMeshObstacleCutter::GetTrianglesMaxObstacleCount);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::GetTrianglesMaxObstacleCount };
			return func(this);
		}

		void GetModifiedTriangleList(BSSimpleArray<BoundsTriangleInfo, 1024>& aBoundsTriangle)
		{
			using func_t = decltype(&NavMeshObstacleCutter::GetModifiedTriangleList);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::GetModifiedTriangleList };
			func(this, aBoundsTriangle);
		}

		void GenerateOutsideVertsAndEdges()
		{
			using func_t = decltype(&NavMeshObstacleCutter::GenerateOutsideVertsAndEdges);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::GenerateOutsideVertsAndEdges };
			func(this);
		}

		void GenerateBoxVertsAndEdges()
		{
			using func_t = decltype(&NavMeshObstacleCutter::GenerateBoxVertsAndEdges);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::GenerateBoxVertsAndEdges };
			func(this);
		}

		void SplitEdges()
		{
			using func_t = decltype(&NavMeshObstacleCutter::SplitEdges);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::SplitEdges };
			func(this);
		}

		void RemoveInvalidEdges()
		{
			using func_t = decltype(&NavMeshObstacleCutter::RemoveInvalidEdges);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::RemoveInvalidEdges };
			func(this);
		}

		void CreateRemainingEdges()
		{
			using func_t = decltype(&NavMeshObstacleCutter::CreateRemainingEdges);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::CreateRemainingEdges };
			func(this);
		}

		bool CreateNewTriangles()
		{
			using func_t = decltype(&NavMeshObstacleCutter::CreateNewTriangles);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::CreateNewTriangles };
			return func(this);
		}

		void RemovePOVs()
		{
			using func_t = decltype(&NavMeshObstacleCutter::RemovePOVs);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::RemovePOVs };
			func(this);
		}

		void SetObstacleCount()
		{
			using func_t = decltype(&NavMeshObstacleCutter::SetObstacleCount);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::SetObstacleCount };
			func(this);
		}

		void ConnectTriangles()
		{
			using func_t = decltype(&NavMeshObstacleCutter::ConnectTriangles);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::ConnectTriangles };
			func(this);
		}

		void CreateSwappedEdgeList(TaskPortalSwap& aPortalSwaps)
		{
			using func_t = decltype(&NavMeshObstacleCutter::CreateSwappedEdgeList);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::CreateSwappedEdgeList };
			func(this, aPortalSwaps);
		}

		void UpdateCoverArray()
		{
			using func_t = decltype(&NavMeshObstacleCutter::UpdateCoverArray);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::UpdateCoverArray };
			func(this);
		}

		bool CheckTriangleAgainstObstacle(NavMeshObstacleVertex* apVert1, NavMeshObstacleVertex* apVert2, NavMeshObstacleVertex* apVert3)
		{
			using func_t = decltype(&NavMeshObstacleCutter::CheckTriangleAgainstObstacle);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::CheckTriangleAgainstObstacle };
			return func(this, apVert1, apVert2, apVert3);
		}

		bool CheckTriangleAgainstOverlapped(NavMeshObstacleVertex* apVert1, NavMeshObstacleVertex* apVert2, NavMeshObstacleVertex* apVert3)
		{
			using func_t = decltype(&NavMeshObstacleCutter::CheckTriangleAgainstOverlapped);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::CheckTriangleAgainstOverlapped };
			return func(this, apVert1, apVert2, apVert3);
		}

		bool CheckPotentialEdgeAgainstRunningEdgeList(NavMeshObstacleVertex* apVert1, NavMeshObstacleVertex* apVert2)
		{
			using func_t = decltype(&NavMeshObstacleCutter::CheckPotentialEdgeAgainstRunningEdgeList);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::CheckPotentialEdgeAgainstRunningEdgeList };
			return func(this, apVert1, apVert2);
		}

		bool IsVertInOverlappedArea(NavMeshObstacleVertex* apVert) const
		{
			using func_t = decltype(&NavMeshObstacleCutter::IsVertInOverlappedArea);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::IsVertInOverlappedArea };
			return func(this, apVert);
		}

		bool IsPointInOverlappedArea(NiPoint3 const& aPoint) const
		{
			using func_t = decltype(&NavMeshObstacleCutter::IsPointInOverlappedArea);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::IsPointInOverlappedArea };
			return func(this, aPoint);
		}

		NavMeshObstacleVertex* CreateVertex(std::uint16_t aiIndex, bool abOnObstacle, bool abOnBounds, bool abOnOpenEdge)
		{
			using func_t = decltype(&NavMeshObstacleCutter::CreateVertex);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::CreateVertex };
			return func(this, aiIndex, abOnObstacle, abOnBounds, abOnOpenEdge);
		}

		NavMeshObstacleEdge* CreateEdge(NavMeshObstacleVertex* apVert1, NavMeshObstacleVertex* apVert2, EDGE_TYPE aeEdgeType)
		{
			using func_t = decltype(&NavMeshObstacleCutter::CreateEdge);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleCutter::CreateEdge };
			return func(this, apVert1, apVert2, aeEdgeType);
		}

	public:
		// members
		NavMesh*                                   pNavMesh;           // 00
		NiPointer<ObstacleData>                    spObstacle;         // 04
		ObstacleUndoData*                          pUndoData;          // 08
		AStarDefaultHeap                           LocalScrapHeap;     // 0C
		BSScrapArray<NavMeshObstacleVertex*, 1024> Vertices;           // 1C
		BSScrapArray<NavMeshObstacleEdge*, 1024>   Edges;              // 30
		std::uint32_t                              iMaxObstacleCount;  // 44
	};
}
