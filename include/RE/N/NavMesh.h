#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSStringT.h"
#include "RE/E/EdgeExtraInfo.h"
#include "RE/N/NavMeshClosedDoorInfo.h"
#include "RE/N/NavMeshEdge.h"
#include "RE/N/NavMeshEdgeVertices.h"
#include "RE/N/NavMeshGrid.h"
#include "RE/N/NavMeshPOVData.h"
#include "RE/N/NavMeshStaticAvoidNode.h"
#include "RE/N/NavMeshTriangle.h"
#include "RE/N/NavMeshTriangleDoorPortal.h"
#include "RE/N/NavMeshVertex.h"
#include "RE/N/NiPoint3.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"
#include "RE/N/NiTMap.h"
#include "RE/T/TESChildCell.h"
#include "RE/T/TESForm.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class FORM;
	class FORM_GROUP;
	class FastNavMeshEdgeHandle;
	class FindTriangleForLocationFilter;
	class NavMeshEdgeHandle;
	class NavMeshInfo;
	class NavMeshPtr;
	class NiPoint2;
	class ObstacleData;
	class ObstacleUndoData;
	class TESFile;
	class TESObjectCELL;
	class TaskPortalSwap;

	class NavMesh :
		public TESForm,  // 00
		public TESChildCell,  // 18
		public NiRefObject  // 1C
	{
	public:
		static constexpr auto RTTI{ RTTI::NavMesh };
		static constexpr auto VTABLE{ VTABLE::NavMesh };

		class FIEResult;

		enum class FIND_INTERSECTION_EDGE : std::int32_t
		{
			kFIE_NONE = 0x0,
			kFIE_CORNER = 0x1,
			kFIE_EDGE = 0x2,
			kFIE_INTERSECTION = 0x3,
		};

		class FIEResult
		{
		public:
			// members
			NavMesh::FIND_INTERSECTION_EDGE eType;         // 00?
			std::int32_t                    iEdge;         // 04?
			NiPoint3                        Intersection;  // 08?
		};

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kNAVM_ID };

		// override (TESForm)
		virtual ~NavMesh() = default;                                                                           // 04
		virtual bool ProcessBeforeSave() override;                                                              // 06
		virtual bool Load(TESFile* apFile) override;                                                            // 08
		virtual void Save() override;                                                                           // 0B
		virtual bool SavesBefore(FORM* apGroupFORM) override;                                                   // 0E
		virtual bool SavesBefore(TESForm* apForm) override;                                                     // 0F
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;                              // 21
		virtual void InitItem() override;                                                                       // 22
		virtual void GetFormDetailedString(BSStringT<char>& aString) override;                                  // 24
		virtual void SetDelete(bool abDeleted) override;                                                        // 31
		virtual void SetAltered(bool abAltered) override;                                                       // 32
		virtual bool BelongsInGroup(FORM* apGroupFORM, bool abAllowParentGroups, bool abCurrentOnly) override;  // 44
		virtual void CreateGroupData(FORM* apOutGroupFORM, FORM_GROUP* apParentGroup) override;                 // 45

		NavMeshTriangle* GetTriangle(std::uint16_t asTriangleIndex)
		{
			using func_t = decltype(&NavMesh::GetTriangle);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetTriangle };
			return func(this, asTriangleIndex);
		}

		NavMesh* ctor()
		{
			using func_t = NavMesh*(__thiscall*)(NavMesh*);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::ctor };
			return func(this);
		}

		TESForm* GetParentSpace() const
		{
			using func_t = decltype(&NavMesh::GetParentSpace);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetParentSpace };
			return func(this);
		}

		NavMeshInfo* GetNavMeshInfo() const
		{
			using func_t = decltype(&NavMesh::GetNavMeshInfo);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetNavMeshInfo };
			return func(this);
		}

		NavMeshEdge GetEdge(std::uint16_t retstr, std::int32_t this_)
		{
			using func_t = decltype(&NavMesh::GetEdge);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetEdge };
			return func(this, retstr, this_);
		}

		NavMeshEdgeVertices GetEdgeVertices(std::uint16_t retstr, std::int32_t this_)
		{
			using func_t = NavMeshEdgeVertices (NavMesh::*)(std::uint16_t, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetEdgeVertices };
			return func(this, retstr, this_);
		}

		NavMeshVertex* GetVertex(std::uint16_t asVertexIndex)
		{
			using func_t = decltype(&NavMesh::GetVertex);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetVertex };
			return func(this, asVertexIndex);
		}

		bool GetEdgeVertices(std::uint16_t ausTriIndex, std::int32_t aiEdgeIndex, NiPoint3* apRetVert1, NiPoint3* apRetVert2)
		{
			using func_t = bool (NavMesh::*)(std::uint16_t, std::int32_t, NiPoint3*, NiPoint3*);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetEdgeVertices_1 };
			return func(this, ausTriIndex, aiEdgeIndex, apRetVert1, apRetVert2);
		}

		void GetTriangleVertices(std::uint16_t ausTriIndex, NavMeshVertex*& apV0, NavMeshVertex*& apV1, NavMeshVertex*& apV2)
		{
			using func_t = decltype(&NavMesh::GetTriangleVertices);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetTriangleVertices };
			func(this, ausTriIndex, apV0, apV1, apV2);
		}

		EdgeExtraInfo* GetEdgeExtraInfo(std::uint16_t ausTriangleIndex, std::int32_t aiEdgeIndex)
		{
			using func_t = decltype(&NavMesh::GetEdgeExtraInfo);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetEdgeExtraInfo };
			return func(this, ausTriangleIndex, aiEdgeIndex);
		}

		bool GetMatchingEdge(NavMeshEdgeHandle const& aThisEdge, NavMeshEdgeHandle* apRetOtherEdge)
		{
			using func_t = bool (NavMesh::*)(NavMeshEdgeHandle const&, NavMeshEdgeHandle*);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetMatchingEdge };
			return func(this, aThisEdge, apRetOtherEdge);
		}

		bool GetMatchingEdge(std::uint16_t ausTriangleIndex, std::int32_t aiEdgeIndex, NavMeshPtr* apReturnNavMesh, std::uint16_t* apOtherTriangleIndex, std::int32_t* apOtherEdgeIndex)
		{
			using func_t = bool (NavMesh::*)(std::uint16_t, std::int32_t, NavMeshPtr*, std::uint16_t*, std::int32_t*);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetMatchingEdge_1 };
			return func(this, ausTriangleIndex, aiEdgeIndex, apReturnNavMesh, apOtherTriangleIndex, apOtherEdgeIndex);
		}

		bool GetMatchingEdge(std::uint16_t ausTriangleIndex, std::int32_t aiEdgeIndex, NavMesh*& apReturnNavMesh, std::uint16_t& apOtherTriangleIndex, std::int32_t& apOtherEdgeIndex)
		{
			using func_t = bool (NavMesh::*)(std::uint16_t, std::int32_t, NavMesh*&, std::uint16_t&, std::int32_t&);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetMatchingEdge_2 };
			return func(this, ausTriangleIndex, aiEdgeIndex, apReturnNavMesh, apOtherTriangleIndex, apOtherEdgeIndex);
		}

		bool GetMatchingEdge(FastNavMeshEdgeHandle const& aThisEdge, FastNavMeshEdgeHandle* apRetOtherEdge)
		{
			using func_t = bool (NavMesh::*)(FastNavMeshEdgeHandle const&, FastNavMeshEdgeHandle*);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetMatchingEdge_3 };
			return func(this, aThisEdge, apRetOtherEdge);
		}

		bool CheckNavMesh(bool abFix)
		{
			using func_t = decltype(&NavMesh::CheckNavMesh);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::CheckNavMesh };
			return func(this, abFix);
		}

		bool CheckNavMeshAgainstNeighbors()
		{
			using func_t = decltype(&NavMesh::CheckNavMeshAgainstNeighbors);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::CheckNavMeshAgainstNeighbors };
			return func(this);
		}

		void ClearNavMesh(bool abCheckout)
		{
			using func_t = decltype(&NavMesh::ClearNavMesh);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::ClearNavMesh };
			func(this, abCheckout);
		}

		void DeleteExtraEdgeInfo(std::uint16_t aiExtraInfo)
		{
			using func_t = decltype(&NavMesh::DeleteExtraEdgeInfo);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::DeleteExtraEdgeInfo };
			func(this, aiExtraInfo);
		}

		std::uint16_t AddExtraEdgeInfo(EdgeExtraInfo const& aExtraInfo)
		{
			using func_t = decltype(&NavMesh::AddExtraEdgeInfo);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::AddExtraEdgeInfo };
			return func(this, aExtraInfo);
		}

		void CreateCoverArray()
		{
			using func_t = decltype(&NavMesh::CreateCoverArray);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::CreateCoverArray };
			func(this);
		}

		BSSimpleArray<std::uint16_t, 1024> const* GetTrianglesForGridCell(std::uint32_t aiGridCellIndex) const
		{
			using func_t = decltype(&NavMesh::GetTrianglesForGridCell);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetTrianglesForGridCell };
			return func(this, aiGridCellIndex);
		}

		std::uint32_t GetGridIndicesForTriangle(std::uint16_t ausTriangleIndex, BSSimpleArray<std::uint32_t, 1024>* apGridCells) const
		{
			using func_t = decltype(&NavMesh::GetGridIndicesForTriangle);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetGridIndicesForTriangle };
			return func(this, ausTriangleIndex, apGridCells);
		}

		void AddStaticAvoidNode(NiPoint3 const& aLocation, std::uint16_t ausTri, float afRadius, float afCost)
		{
			using func_t = decltype(&NavMesh::AddStaticAvoidNode);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::AddStaticAvoidNode };
			func(this, aLocation, ausTri, afRadius, afCost);
		}

		EdgeExtraInfo* GetExtraEdgeInfo(std::uint16_t asExtraInfoIndex)
		{
			using func_t = decltype(&NavMesh::GetExtraEdgeInfo);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetExtraEdgeInfo };
			return func(this, asExtraInfoIndex);
		}

		void MakeCopyForObstacle(NavMeshPtr& spDestNavMesh) const
		{
			using func_t = decltype(&NavMesh::MakeCopyForObstacle);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::MakeCopyForObstacle };
			func(this, spDestNavMesh);
		}

		static bool SetDisableNavMesh(std::uint32_t aiID, bool abDisable)
		{
			using func_t = decltype(&NavMesh::SetDisableNavMesh);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::SetDisableNavMesh };
			return func(aiID, abDisable);
		}

		static void FixPortalsFromNavMeshDeletion(NavMeshInfo* apNavmeshInfo)
		{
			using func_t = decltype(&NavMesh::FixPortalsFromNavMeshDeletion);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::FixPortalsFromNavMeshDeletion };
			func(apNavmeshInfo);
		}

		void FlipTriangle(std::uint16_t aiTriIndex)
		{
			using func_t = decltype(&NavMesh::FlipTriangle);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::FlipTriangle };
			func(this, aiTriIndex);
		}

		void ComputeBounds(NiPoint3* apRetMin, NiPoint3* apRetMax)
		{
			using func_t = decltype(&NavMesh::ComputeBounds);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::ComputeBounds };
			func(this, apRetMin, apRetMax);
		}

		void CreateGrid()
		{
			using func_t = decltype(&NavMesh::CreateGrid);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::CreateGrid };
			func(this);
		}

		bool AddTrianglesToGrid(std::uint16_t ausFirstTriangleIndex, std::uint16_t ausLastTriangleIndex)
		{
			using func_t = decltype(&NavMesh::AddTrianglesToGrid);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::AddTrianglesToGrid };
			return func(this, ausFirstTriangleIndex, ausLastTriangleIndex);
		}

		bool RemoveTrianglesFromGrid(std::uint16_t ausFirstTriangleIndex, std::uint16_t ausLastTriangleIndex)
		{
			using func_t = decltype(&NavMesh::RemoveTrianglesFromGrid);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::RemoveTrianglesFromGrid };
			return func(this, ausFirstTriangleIndex, ausLastTriangleIndex);
		}

		std::uint16_t FindTriangleForLocation(NiPoint3 const& aLocation, FindTriangleForLocationFilter* apFilter) const
		{
			using func_t = decltype(&NavMesh::FindTriangleForLocation);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::FindTriangleForLocation };
			return func(this, aLocation, apFilter);
		}

		bool FindClosestTriangleForLocation(NiPoint3 const& aLocation, std::uint16_t* apRetTriIndex, bool* apbOnTriangle)
		{
			using func_t = decltype(&NavMesh::FindClosestTriangleForLocation);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::FindClosestTriangleForLocation };
			return func(this, aLocation, apRetTriIndex, apbOnTriangle);
		}

		bool FindClosestOpenEdgeForLocation(NiPoint3 const& aLocation, float a_arg2, std::uint16_t* a_arg3, std::int32_t* apRetTriIndex, bool apRetEdgeIndex)
		{
			using func_t = decltype(&NavMesh::FindClosestOpenEdgeForLocation);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::FindClosestOpenEdgeForLocation };
			return func(this, aLocation, a_arg2, a_arg3, apRetTriIndex, apRetEdgeIndex);
		}

		bool FindPortalTriangles(NavMeshInfo const* apNavMeshInfo, BSSimpleArray<std::int32_t, 1024>* apReturnArray)
		{
			using func_t = decltype(&NavMesh::FindPortalTriangles);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::FindPortalTriangles };
			return func(this, apNavMeshInfo, apReturnArray);
		}

		bool IsPointInsideNavmesh(NiPoint3 const& aPoint, FindTriangleForLocationFilter* apFilter)
		{
			using func_t = decltype(&NavMesh::IsPointInsideNavmesh);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::IsPointInsideNavmesh };
			return func(this, aPoint, apFilter);
		}

		EdgeExtraInfo* SetEmptyEdgeExtraInfo(std::uint16_t aTriangle, std::int32_t aEdgeIndex)
		{
			using func_t = decltype(&NavMesh::SetEmptyEdgeExtraInfo);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::SetEmptyEdgeExtraInfo };
			return func(this, aTriangle, aEdgeIndex);
		}

		bool ComputeTriangleZForLocation(std::uint16_t asTriangleIndex, NiPoint3 const& aLocation, float afMaxZdistAbove, float a_arg4, float& a_arg5) const
		{
			using func_t = decltype(&NavMesh::ComputeTriangleZForLocation);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::ComputeTriangleZForLocation };
			return func(this, asTriangleIndex, aLocation, afMaxZdistAbove, a_arg4, a_arg5);
		}

		bool ComputeNavMeshZForLocation(NiPoint3 const& aLocation, float afMaxZdistAbove, float a_arg3, float& a_arg4) const
		{
			using func_t = decltype(&NavMesh::ComputeNavMeshZForLocation);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::ComputeNavMeshZForLocation };
			return func(this, aLocation, afMaxZdistAbove, a_arg3, a_arg4);
		}

		bool FindRandomPointWithinRadius(NiPoint3 const& aStartLocation, float a_arg2, NiPoint3* a_arg3)
		{
			using func_t = decltype(&NavMesh::FindRandomPointWithinRadius);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::FindRandomPointWithinRadius };
			return func(this, aStartLocation, a_arg2, a_arg3);
		}

		NiPoint3 MoveAwayFromEdge(NiPoint3 const& result, float aLocation)
		{
			using func_t = decltype(&NavMesh::MoveAwayFromEdge);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::MoveAwayFromEdge };
			return func(this, result, aLocation);
		}

		std::int32_t FindInterectingEdge(std::uint16_t ausTri, std::int32_t aIgnoreEdge, NiPoint2 const& aStartPoint, NiPoint2 const& aEndPoint, NiPoint2* apReturnIntersection)
		{
			using func_t = decltype(&NavMesh::FindInterectingEdge);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::FindInterectingEdge };
			return func(this, ausTri, aIgnoreEdge, aStartPoint, aEndPoint, apReturnIntersection);
		}

		NavMesh::FIEResult FindInterectingEdge2(std::uint16_t result, std::int32_t ausTri, NiPoint3 const& aIgnoreEdge, NiPoint3& aStartPoint)
		{
			using func_t = decltype(&NavMesh::FindInterectingEdge2);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::FindInterectingEdge2 };
			return func(this, result, ausTri, aIgnoreEdge, aStartPoint);
		}

		std::int32_t FindIntersectingEdgeFast(std::uint16_t ausTri, std::int32_t aIgnoreEdge, NiPoint3 const& aStartPoint, NiPoint3 const& aEndPoint)
		{
			using func_t = decltype(&NavMesh::FindIntersectingEdgeFast);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::FindIntersectingEdgeFast };
			return func(this, ausTri, aIgnoreEdge, aStartPoint, aEndPoint);
		}

		bool UpdateNavMeshInfo()
		{
			using func_t = decltype(&NavMesh::UpdateNavMeshInfo);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::UpdateNavMeshInfo };
			return func(this);
		}

		void GetOverlappedTriangleList(NiPointer<ObstacleData> const& apObstacle, NiPoint3 const& afFudge, BSSimpleArray<std::uint16_t, 1024>* apRetTriangles)
		{
			using func_t = decltype(&NavMesh::GetOverlappedTriangleList);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetOverlappedTriangleList };
			func(this, apObstacle, afFudge, apRetTriangles);
		}

		bool AddObstacle(NiPointer<ObstacleData> const& apObstacle, TaskPortalSwap& aPortalSwaps)
		{
			using func_t = decltype(&NavMesh::AddObstacle);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::AddObstacle };
			return func(this, apObstacle, aPortalSwaps);
		}

		bool RemoveObstacle(NiPointer<ObstacleData> const& apObstacle, TaskPortalSwap& aPortalSwaps)
		{
			using func_t = bool (NavMesh::*)(NiPointer<ObstacleData> const&, TaskPortalSwap&);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::RemoveObstacle };
			return func(this, apObstacle, aPortalSwaps);
		}

		bool RemoveObstacle(std::uint32_t aiUndoDataIndex, TaskPortalSwap& aPortalSwaps)
		{
			using func_t = bool (NavMesh::*)(std::uint32_t, TaskPortalSwap&);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::RemoveObstacle_1 };
			return func(this, aiUndoDataIndex, aPortalSwaps);
		}

		void ClearAllObstacles()
		{
			using func_t = decltype(&NavMesh::ClearAllObstacles);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::ClearAllObstacles };
			func(this);
		}

		std::uint32_t GetUndoDataMaxObstacleCount(ObstacleUndoData* apUndoData)
		{
			using func_t = decltype(&NavMesh::GetUndoDataMaxObstacleCount);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetUndoDataMaxObstacleCount };
			return func(this, apUndoData);
		}

		bool GetObstacleForTriangle(std::uint16_t ausTriangle, NiPointer<ObstacleData>& spRetObstacle)
		{
			using func_t = decltype(&NavMesh::GetObstacleForTriangle);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetObstacleForTriangle };
			return func(this, ausTriangle, spRetObstacle);
		}

		bool AddClosedDoor(std::uint32_t aiDoorID, ObstacleData* apData)
		{
			using func_t = decltype(&NavMesh::AddClosedDoor);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::AddClosedDoor };
			return func(this, aiDoorID, apData);
		}

		NavMeshClosedDoorInfo* GetClosedDoorInfoForTriangle(std::uint16_t aiTriangle)
		{
			using func_t = decltype(&NavMesh::GetClosedDoorInfoForTriangle);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetClosedDoorInfoForTriangle };
			return func(this, aiTriangle);
		}

		void CreatePOVs()
		{
			using func_t = decltype(&NavMesh::CreatePOVs);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::CreatePOVs };
			func(this);
		}

		std::uint32_t GetPOVsForTriangle(std::uint16_t ausTriangle, BSSimpleArray<std::uint16_t, 1024>& aRetPOVs)
		{
			using func_t = decltype(&NavMesh::GetPOVsForTriangle);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetPOVsForTriangle };
			return func(this, ausTriangle, aRetPOVs);
		}

		std::uint32_t GetObstaclePOVsForTriangle(std::uint16_t ausTriangle, BSSimpleArray<std::uint16_t, 1024>& aRetObstaclePOVs)
		{
			using func_t = decltype(&NavMesh::GetObstaclePOVsForTriangle);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetObstaclePOVsForTriangle };
			return func(this, ausTriangle, aRetObstaclePOVs);
		}

		bool ReconnectEnabledPortals()
		{
			using func_t = decltype(&NavMesh::ReconnectEnabledPortals);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::ReconnectEnabledPortals };
			return func(this);
		}

		char GetNeighborCount(std::uint16_t apTriangle) const
		{
			using func_t = decltype(&NavMesh::GetNeighborCount);
			static REL::Relocation<func_t> func{ Offsets::NavMesh::GetNeighborCount };
			return func(this, apTriangle);
		}

	public:
		// members
		TESObjectCELL*                                   pParentCell;             // 24
		BSSimpleArray<NavMeshVertex, 1024>               Vertices;                // 28
		BSSimpleArray<NavMeshTriangle, 1024>             Triangles;               // 38
		BSSimpleArray<EdgeExtraInfo, 1024>               ExtraEdgeInfo;           // 48
		BSSimpleArray<NavMeshTriangleDoorPortal, 1024>   DoorPortals;             // 58
		BSSimpleArray<NavMeshClosedDoorInfo, 1024>       ClosedDoors;             // 68
		BSSimpleArray<std::uint16_t, 1024>               CoverArray;              // 78
		NiTMap<std::uint16_t, NavMeshPOVData>            POVs;                    // 88
		BSSimpleArray<std::uint16_t, 1024>               ClosestPOVs;             // 98
		NavMeshGrid                                      MeshGrid;                // A8
		BSSimpleArray<NiPointer<ObstacleUndoData>, 1024> Obstacles;               // D0
		NiTMap<std::uint16_t, NiPointer<ObstacleData>>*  pTriangleToObstacleMap;  // E0
		BSSimpleArray<std::uint16_t, 1024>               ObstaclePOVs;            // E4
		BSSimpleArray<NavMeshStaticAvoidNode, 1024>      StaticAvoidNodes;        // F4
		NavMeshInfo*                                     pNavMeshInfo;            // 104
	};
	static_assert(sizeof(NavMesh) == 0x108);
}
