#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSCriticalSection.h"
#include "RE/B/BSPerformanceTimer.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTaskletGroup.h"
#include "RE/L/LockFreeQueue.h"
#include "RE/N/NavMeshPtr.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiTMap.h"

namespace RE
{
	class NavMeshEdgeHandle;
	class NavMeshInfo;
	class NavMeshTriHandle;
	class NiAVObject;
	class NiNode;
	class NiPoint3;
	class NiTriShape;
	class ObstacleData;
	class ObstacleTaskData;
	class ReferenceObstacleArray;
	class TESObjectCELL;
	class TESObjectREFR;
	class bhkObstacleDeactivationListener;
	class bhkObstacleRemovalListener;
	class bhkRigidBody;

	class NavMeshObstacleManager
	{
	public:
		enum class OBSTACLE_MANAGER_BACKGROUND_STATE : std::int32_t
		{
			kOBSTACLE_MANAGER_BACKGROUND_STATE_PROCESSING_OBSTACLES = 0x0,
			kOBSTACLE_MANAGER_BACKGROUND_STATE_WAITING_FOR_PATH_MANAGER_PAUSE = 0x1,
		};

		NavMeshObstacleManager* ctor()
		{
			using func_t = NavMeshObstacleManager*(__thiscall*)(NavMeshObstacleManager*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(NavMeshObstacleManager*);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::dtor };
			func(this);
		}

		static NavMeshObstacleManager* GetInstance()
		{
			using func_t = decltype(&NavMeshObstacleManager::GetInstance);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::GetInstance };
			return func();
		}

		bool Initialize()
		{
			using func_t = decltype(&NavMeshObstacleManager::Initialize);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::Initialize };
			return func(this);
		}

		void Release()
		{
			using func_t = decltype(&NavMeshObstacleManager::Release);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::Release };
			func(this);
		}

		void ClearAllObstacles()
		{
			using func_t = decltype(&NavMeshObstacleManager::ClearAllObstacles);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::ClearAllObstacles };
			func(this);
		}

		void AddObstacleForReference(TESObjectREFR* apRef)
		{
			using func_t = decltype(&NavMeshObstacleManager::AddObstacleForReference);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::AddObstacleForReference };
			func(this, apRef);
		}

		void RemoveObstacleForReference(TESObjectREFR* apRef)
		{
			using func_t = decltype(&NavMeshObstacleManager::RemoveObstacleForReference);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::RemoveObstacleForReference };
			func(this, apRef);
		}

		void OnDoorOpen(TESObjectREFR* apDoorRef)
		{
			using func_t = decltype(&NavMeshObstacleManager::OnDoorOpen);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::OnDoorOpen };
			func(this, apDoorRef);
		}

		void OnDoorClose(TESObjectREFR* apDoorRef)
		{
			using func_t = decltype(&NavMeshObstacleManager::OnDoorClose);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::OnDoorClose };
			func(this, apDoorRef);
		}

		void OnDoorRemove(TESObjectREFR* apDoorRef)
		{
			using func_t = decltype(&NavMeshObstacleManager::OnDoorRemove);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::OnDoorRemove };
			func(this, apDoorRef);
		}

		void AddObstacleToUpdateList(bhkRigidBody* apRigidBody)
		{
			using func_t = decltype(&NavMeshObstacleManager::AddObstacleToUpdateList);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::AddObstacleToUpdateList };
			func(this, apRigidBody);
		}

		static bool IsPointInBox(NiPoint3 const& aPoint, NiPointer<ObstacleData> const& aBox, float afMaxHeightAbove, float afMaxHeightBelow)
		{
			using func_t = decltype(&NavMeshObstacleManager::IsPointInBox);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::IsPointInBox };
			return func(aPoint, aBox, afMaxHeightAbove, afMaxHeightBelow);
		}

		void Update()
		{
			using func_t = decltype(&NavMeshObstacleManager::Update);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::Update };
			func(this);
		}

		void ForceUpdateAllObstacles()
		{
			using func_t = decltype(&NavMeshObstacleManager::ForceUpdateAllObstacles);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::ForceUpdateAllObstacles };
			func(this);
		}

		void AddProcessedTask(ObstacleTaskData* apTaskData)
		{
			using func_t = decltype(&NavMeshObstacleManager::AddProcessedTask);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::AddProcessedTask };
			func(this, apTaskData);
		}

		void DrawObstacles(bool abDraw)
		{
			using func_t = decltype(&NavMeshObstacleManager::DrawObstacles);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::DrawObstacles };
			func(this, abDraw);
		}

	private:
		void ReallyAddObstaclesForReference(TESObjectREFR* apRef)
		{
			using func_t = decltype(&NavMeshObstacleManager::ReallyAddObstaclesForReference);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::ReallyAddObstaclesForReference };
			func(this, apRef);
		}

		void UpdateObstacle(NiPointer<ObstacleData>& spObstacle)
		{
			using func_t = decltype(&NavMeshObstacleManager::UpdateObstacle);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::UpdateObstacle };
			func(this, spObstacle);
		}

		void UpdateObstaclesForReference(std::uint32_t aiRefID, TESObjectREFR* apRef)
		{
			using func_t = decltype(&NavMeshObstacleManager::UpdateObstaclesForReference);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::UpdateObstaclesForReference };
			func(this, aiRefID, apRef);
		}

		void AddActivationListener(bhkRigidBody* apRigidBody)
		{
			using func_t = decltype(&NavMeshObstacleManager::AddActivationListener);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::AddActivationListener };
			func(this, apRigidBody);
		}

		void RemoveActivationListener(bhkRigidBody* apRigidBody)
		{
			using func_t = decltype(&NavMeshObstacleManager::RemoveActivationListener);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::RemoveActivationListener };
			func(this, apRigidBody);
		}

		static bool GetCellListForObstacle(NiPointer<ObstacleData> const& apData, BSSimpleArray<TESObjectCELL*, 1024>* apReturnCellArray)
		{
			using func_t = decltype(&NavMeshObstacleManager::GetCellListForObstacle);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::GetCellListForObstacle };
			return func(apData, apReturnCellArray);
		}

		static bool GetNavMeshListForObstacle(NiPointer<ObstacleData> const& apData, BSSimpleArray<NavMeshPtr, 1024>* apReturnNavMeshArray)
		{
			using func_t = decltype(&NavMeshObstacleManager::GetNavMeshListForObstacle);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::GetNavMeshListForObstacle };
			return func(apData, apReturnNavMeshArray);
		}

		static bool AddObstaclesFor3DRecursive(NiAVObject* ap3D, NiPointer<ReferenceObstacleArray>& apRetObstacleArray)
		{
			using func_t = decltype(&NavMeshObstacleManager::AddObstaclesFor3DRecursive);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::AddObstaclesFor3DRecursive };
			return func(ap3D, apRetObstacleArray);
		}

		static bool FindFirstObstacleFor3D(NiAVObject* ap3D, ObstacleData* apRetObstacle)
		{
			using func_t = decltype(&NavMeshObstacleManager::FindFirstObstacleFor3D);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::FindFirstObstacleFor3D };
			return func(ap3D, apRetObstacle);
		}

		static bool UpdateObstacleData(ObstacleData* apObstacle)
		{
			using func_t = decltype(&NavMeshObstacleManager::UpdateObstacleData);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::UpdateObstacleData };
			return func(apObstacle);
		}

		static void UpdateObstacleActiveStatus(NiPointer<ObstacleData>& aspObstacle)
		{
			using func_t = decltype(&NavMeshObstacleManager::UpdateObstacleActiveStatus);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::UpdateObstacleActiveStatus };
			func(aspObstacle);
		}

		static bool GetObstacleDataForReference(TESObjectREFR* apRef, NiPointer<ReferenceObstacleArray>& apRetObstacleArray)
		{
			using func_t = decltype(&NavMeshObstacleManager::GetObstacleDataForReference);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::GetObstacleDataForReference };
			return func(apRef, apRetObstacleArray);
		}

		std::uint32_t GetProcessedTaskCount()
		{
			using func_t = decltype(&NavMeshObstacleManager::GetProcessedTaskCount);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::GetProcessedTaskCount };
			return func(this);
		}

		std::uint32_t GetBackgroundTaskCount()
		{
			using func_t = decltype(&NavMeshObstacleManager::GetBackgroundTaskCount);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::GetBackgroundTaskCount };
			return func(this);
		}

		bool ReconnectPortals()
		{
			using func_t = decltype(&NavMeshObstacleManager::ReconnectPortals);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::ReconnectPortals };
			return func(this);
		}

		bool CreatePortal(NavMeshPtr& aspNavMesh1, NavMeshEdgeHandle const& aEdge1, NavMeshPtr& aspNavMesh2, NavMeshEdgeHandle const& aEdge2)
		{
			using func_t = decltype(&NavMeshObstacleManager::CreatePortal);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::CreatePortal };
			return func(this, aspNavMesh1, aEdge1, aspNavMesh2, aEdge2);
		}

		bool CreateOneWayPortal(NavMeshPtr& aspNavMesh1, NavMeshEdgeHandle const& aEdge1, NavMeshTriHandle const& aTri2)
		{
			using func_t = decltype(&NavMeshObstacleManager::CreateOneWayPortal);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::CreateOneWayPortal };
			return func(this, aspNavMesh1, aEdge1, aTri2);
		}

		void ProcessNewReferences()
		{
			using func_t = decltype(&NavMeshObstacleManager::ProcessNewReferences);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::ProcessNewReferences };
			func(this);
		}

		void ProcessDeactivatedObstacles()
		{
			using func_t = decltype(&NavMeshObstacleManager::ProcessDeactivatedObstacles);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::ProcessDeactivatedObstacles };
			func(this);
		}

		void ProcessMovingReferences()
		{
			using func_t = decltype(&NavMeshObstacleManager::ProcessMovingReferences);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::ProcessMovingReferences };
			func(this);
		}

		void QueueTasks()
		{
			using func_t = decltype(&NavMeshObstacleManager::QueueTasks);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::QueueTasks };
			func(this);
		}

		bool ProcessNewDoors()
		{
			using func_t = decltype(&NavMeshObstacleManager::ProcessNewDoors);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::ProcessNewDoors };
			return func(this);
		}

		void CreateBoundingBox3DNode(NiPointer<ObstacleData> const& aBox, NiPointer<NiTriShape>& aspTriShape)
		{
			using func_t = decltype(&NavMeshObstacleManager::CreateBoundingBox3DNode);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::CreateBoundingBox3DNode };
			func(this, aBox, aspTriShape);
		}

		void AddBoundingBox3DNode(NiPointer<ObstacleData> const& aBox)
		{
			using func_t = decltype(&NavMeshObstacleManager::AddBoundingBox3DNode);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::AddBoundingBox3DNode };
			func(this, aBox);
		}

		bool PushTask(ObstacleTaskData* apTaskData)
		{
			using func_t = decltype(&NavMeshObstacleManager::PushTask);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::PushTask };
			return func(this, apTaskData);
		}

		ObstacleTaskData* GetTaskForNavMesh(NavMeshInfo* apNavMesh)
		{
			using func_t = decltype(&NavMeshObstacleManager::GetTaskForNavMesh);
			static REL::Relocation<func_t> func{ Offsets::NavMeshObstacleManager::GetTaskForNavMesh };
			return func(this, apNavMesh);
		}

	public:
		// members
		BSCriticalSection                                         UpdateCriticalSection;            // 00?
		bool                                                      bUpdateAllObstacles;              // 18
		std::uint8_t                                              pad19[0x3];                       // 19
		NiTMap<std::uint32_t, NiPointer<ReferenceObstacleArray>>  FormIDMap;                        // 1C
		BSSimpleList<TESObjectREFR*>                              QueuedListOfRefsToAdd;            // 2C
		BSSimpleList<std::uint32_t>                               QueuedListOfRefsToRemove;         // 34
		BSSimpleList<NiPointer<ObstacleData>>                     ObstaclesUpdateList;              // 3C
		LockFreeQueue<bhkRigidBody*>                              ObstaclesToAddToUpdateList;       // 44
		LockFreeQueue<bhkRigidBody*>                              ObstaclesToRemoveFromUpdateList;  // 60
		NiTMap<bhkRigidBody*, NiPointer<ObstacleData>>            RigidBodyToObstacleMap;           // 7C?
		BSSimpleList<TESObjectREFR*>                              QueuedListOfDoorsToAdd;           // 8C?
		BSSimpleList<std::uint32_t>                               QueuedListOfDoorsToRemove;        // 94?
		NiTMap<std::uint32_t, NiPointer<ReferenceObstacleArray>>  OpenDoorMap;                      // 9C?
		NiTMap<std::uint32_t, NiPointer<ReferenceObstacleArray>>  ClosedDoorMap;                    // AC?
		std::uint8_t                                              padBC[0x68];                      // BC
		bhkObstacleDeactivationListener*                          pListener;                        // 124
		bhkObstacleRemovalListener*                               pRemoveListener;                  // 128?
		BSTaskletGroup                                            ObstacleTaskletGroup;             // 12C?
		NiTMap<std::uint32_t, ObstacleTaskData*>                  CurrentNavMeshTaskMap;            // 130?
		BSSimpleArray<ObstacleTaskData*, 1024>                    BackgroundTasks;                  // 140?
		BSSimpleArray<ObstacleTaskData*, 1024>                    ProcessedTasks;                   // 150?
		BSSpinLock                                                ProcessedTaskLock;                // 160?
		BSSimpleList<std::uint32_t>                               QueuedListOfNavmeshesToEnable;    // 168?
		BSSimpleList<std::uint32_t>                               QueuedListOfNavmeshesToDisable;   // 170?
		NavMeshObstacleManager::OBSTACLE_MANAGER_BACKGROUND_STATE eState;                           // 178?
		float                                                     fTimeToNextSwap;                  // 17C?
		std::uint8_t                                              pad180[0x18];                     // 180
		bool                                                      bDrawObstacles;                   // 198
		std::uint8_t                                              pad199[0x3];                      // 199
		NiPointer<NiNode>                                         spObstacleRootNode;               // 19C?
		BSPerformanceTimer                                        MainThreadPerformaceTimer;        // 1A0?
		BSPerformanceTimer                                        TaskletsPerformaceTimer;          // 1A4?
	};
}
