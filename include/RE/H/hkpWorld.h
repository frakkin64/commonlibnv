#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkMultiThreadCheck.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkVector4.h"
#include "RE/H/hkpEntityActivation.h"
#include "RE/H/hkpUpdateCollectionFilterMode.h"
#include "RE/H/hkpUpdateCollisionFilterOnEntityMode.h"
#include "RE/H/hkpUpdateCollisionFilterOnWorldMode.h"
#include "RE/H/hkpWorldCinfo_ContactPointGeneration.h"
#include "RE/H/hkpWorldCinfo_SimulationType.h"
#include "RE/H/hkpWorldDynamicsStepInfo.h"

namespace RE
{
	class hkCriticalSection;
	class hkWorldMemoryAvailableWatchDog;
	class hkdWorld;
	class hkpActionListener;
	class hkpBroadPhase;
	class hkpBroadPhaseBorder;
	class hkpBroadPhaseBorderListener;
	class hkpCdPointCollector;
	class hkpCollidable;
	class hkpCollisionCallbackUtil;
	class hkpCollisionDispatcher;
	class hkpCollisionFilter;
	class hkpConstraintListener;
	class hkpContactImpulseLimitBreachedListener;
	class hkpContactListener;
	class hkpConvexListFilter;
	class hkpDebugInfoOnPendingOperationQueues;
	class hkpEntity;
	class hkpEntityEntityBroadPhaseListener;
	class hkpEntityListener;
	class hkpIslandActivationListener;
	class hkpIslandPostCollideListener;
	class hkpIslandPostIntegrateListener;
	class hkpLinearCastInput;
	class hkpMtThreadStructure;
	class hkpPhantom;
	class hkpPhantomBroadPhaseListener;
	class hkpPhantomListener;
	class hkpPhysicsSystem;
	class hkpProcessCollisionInput;
	class hkpRayHitCollector;
	class hkpRigidBody;
	class hkpSimulation;
	class hkpSimulationIsland;
	class hkpTreeWorldManager;
	class hkpTypedBroadPhaseDispatcher;
	class hkpViolatedConstraintArray;
	class hkpWorldCinfo;
	class hkpWorldDeletionListener;
	class hkpWorldMaintenanceMgr;
	class hkpWorldOperationQueue;
	class hkpWorldPostCollideListener;
	class hkpWorldPostIntegrateListener;
	class hkpWorldPostSimulationListener;
	class hkpWorldRayCastInput;
	class hkpWorldRayCastOutput;

	class alignas(16) hkpWorld :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpWorld };
		static constexpr auto VTABLE{ VTABLE::hkpWorld };

		enum class CachedAabbUpdate : std::int32_t
		{
			kSHIFT_BROADPHASE_UPDATE_ENTITY_AABBS = 0x0,
			kSHIFT_BROADPHASE_IGNORE_ENTITY_AABBS = 0x1,
		};

		// override (hkReferencedObject)
		virtual ~hkpWorld() = default;  // 00

		void unlock()
		{
			using func_t = decltype(&hkpWorld::unlock);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::unlock };
			func(this);
		}

		void lockIslandForConstraintUpdate(hkpSimulationIsland* island)
		{
			using func_t = decltype(&hkpWorld::lockIslandForConstraintUpdate);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::lockIslandForConstraintUpdate };
			func(this, island);
		}

		void unlockIslandForConstraintUpdate(hkpSimulationIsland* island)
		{
			using func_t = decltype(&hkpWorld::unlockIslandForConstraintUpdate);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::unlockIslandForConstraintUpdate };
			func(this, island);
		}

		void getCinfo(hkpWorldCinfo& info) const
		{
			using func_t = decltype(&hkpWorld::getCinfo);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::getCinfo };
			func(this, info);
		}

		void castRay(hkpWorldRayCastInput const& input, hkpRayHitCollector& collector) const
		{
			using func_t = void (hkpWorld::*)(hkpWorldRayCastInput const&, hkpRayHitCollector&) const;
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::castRay };
			func(this, input, collector);
		}

		void castRay(hkpWorldRayCastInput const& input, hkpWorldRayCastOutput& output) const
		{
			using func_t = void (hkpWorld::*)(hkpWorldRayCastInput const&, hkpWorldRayCastOutput&) const;
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::castRay_1 };
			func(this, input, output);
		}

		void linearCast(hkpCollidable const* collA, hkpLinearCastInput const& input, hkpCdPointCollector& castCollector, hkpCdPointCollector* startPointCollector) const
		{
			using func_t = decltype(&hkpWorld::linearCast);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::linearCast };
			func(this, collA, input, castCollector, startPointCollector);
		}

		hkpPhysicsSystem* getWorldAsOneSystem() const
		{
			using func_t = decltype(&hkpWorld::getWorldAsOneSystem);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::getWorldAsOneSystem };
			return func(this);
		}

		hkWorldMemoryAvailableWatchDog* getMemoryWatchDog() const
		{
			using func_t = decltype(&hkpWorld::getMemoryWatchDog);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::getMemoryWatchDog };
			return func(this);
		}

		void removeAll()
		{
			using func_t = decltype(&hkpWorld::removeAll);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::removeAll };
			func(this);
		}

		void getWorldAsSystems(hkArray<hkpPhysicsSystem*, hkContainerHeapAllocator>& systemsInOut) const
		{
			using func_t = decltype(&hkpWorld::getWorldAsSystems);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::getWorldAsSystems };
			func(this, systemsInOut);
		}

		void updateCollisionFilterOnPhantom(hkpPhantom* phantom, hkpUpdateCollectionFilterMode updateShapeCollectionFilter)
		{
			using func_t = decltype(&hkpWorld::updateCollisionFilterOnPhantom);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::updateCollisionFilterOnPhantom };
			func(this, phantom, updateShapeCollectionFilter);
		}

		void updateCollisionFilterOnEntity(hkpEntity* entity, hkpUpdateCollisionFilterOnEntityMode updateMode, hkpUpdateCollectionFilterMode updateShapeCollectionFilter)
		{
			using func_t = decltype(&hkpWorld::updateCollisionFilterOnEntity);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::updateCollisionFilterOnEntity };
			func(this, entity, updateMode, updateShapeCollectionFilter);
		}

		void addEntityBatch(hkpEntity* const* entityBatch, std::int32_t numEntities, hkpEntityActivation initialActivationState)
		{
			using func_t = decltype(&hkpWorld::addEntityBatch);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::addEntityBatch };
			func(this, entityBatch, numEntities, initialActivationState);
		}

		void removeEntityBatch(hkpEntity* const* entityBatch, std::int32_t numEntities)
		{
			using func_t = decltype(&hkpWorld::removeEntityBatch);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::removeEntityBatch };
			func(this, entityBatch, numEntities);
		}

		hkpWorld* ctor(hkpWorldCinfo const& info, std::uint32_t sdkversion)
		{
			using func_t = hkpWorld*(__thiscall*)(hkpWorld*, hkpWorldCinfo const&, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::ctor };
			return func(this, info, sdkversion);
		}

		void shiftBroadPhase(hkVector4 const& shiftDistance, hkVector4& effectiveShiftDistanceOut, hkpWorld::CachedAabbUpdate updateAabbs)
		{
			using func_t = decltype(&hkpWorld::shiftBroadPhase);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::shiftBroadPhase };
			func(this, shiftDistance, effectiveShiftDistanceOut, updateAabbs);
		}

		void updateCollisionFilterOnWorld(hkpUpdateCollisionFilterOnWorldMode updateMode, hkpUpdateCollectionFilterMode updateShapeCollectionFilter)
		{
			using func_t = decltype(&hkpWorld::updateCollisionFilterOnWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::updateCollisionFilterOnWorld };
			func(this, updateMode, updateShapeCollectionFilter);
		}

		void setCollisionFilter(hkpCollisionFilter* filter, hkBool runUpdateCollisionFilterOnWorld, hkpUpdateCollisionFilterOnWorldMode updateMode, hkpUpdateCollectionFilterMode updateShapeCollectionFilter)
		{
			using func_t = decltype(&hkpWorld::setCollisionFilter);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::setCollisionFilter };
			func(this, filter, runUpdateCollisionFilterOnWorld, updateMode, updateShapeCollectionFilter);
		}

		void removePhysicsSystem(hkpPhysicsSystem const* sys)
		{
			using func_t = decltype(&hkpWorld::removePhysicsSystem);
			static REL::Relocation<func_t> func{ Offsets::hkpWorld::removePhysicsSystem };
			func(this, sys);
		}

	public:
		// members
		hkpSimulation*                                                             m_simulation;                                                 // 08
		std::uint32_t                                                              pad0C;                                                        // 0C
		hkVector4                                                                  m_gravity;                                                    // 10
		hkpSimulationIsland*                                                       m_fixedIsland;                                                // 20
		hkpRigidBody*                                                              m_fixedRigidBody;                                             // 24
		hkArray<hkpSimulationIsland*, hkContainerHeapAllocator>                    m_activeSimulationIslands;                                    // 28
		hkArray<hkpSimulationIsland*, hkContainerHeapAllocator>                    m_inactiveSimulationIslands;                                  // 34
		hkArray<hkpSimulationIsland*, hkContainerHeapAllocator>                    m_dirtySimulationIslands;                                     // 40
		hkpWorldMaintenanceMgr*                                                    m_maintenanceMgr;                                             // 4C
		hkRefPtr<hkWorldMemoryAvailableWatchDog>                                   m_memoryWatchDog;                                             // 50
		hkBool                                                                     m_assertOnRunningOutOfSolverMemory;                           // 54
		std::uint8_t                                                               pad55[0x3];                                                   // 55
		hkpBroadPhase*                                                             m_broadPhase;                                                 // 58
		hkpTreeWorldManager*                                                       m_kdTreeManager;                                              // 5C
		hkBool                                                                     m_autoUpdateTree;                                             // 60
		std::uint8_t                                                               pad61[0x3];                                                   // 61
		hkpTypedBroadPhaseDispatcher*                                              m_broadPhaseDispatcher;                                       // 64
		hkpPhantomBroadPhaseListener*                                              m_phantomBroadPhaseListener;                                  // 68
		hkpEntityEntityBroadPhaseListener*                                         m_entityEntityBroadPhaseListener;                             // 6C
		hkpBroadPhaseBorderListener*                                               m_broadPhaseBorderListener;                                   // 70
		hkpMtThreadStructure*                                                      m_multithreadedSimulationJobData;                             // 74
		hkpProcessCollisionInput*                                                  m_collisionInput;                                             // 78
		hkpCollisionFilter*                                                        m_collisionFilter;                                            // 7C
		hkpCollisionDispatcher*                                                    m_collisionDispatcher;                                        // 80
		hkpConvexListFilter*                                                       m_convexListFilter;                                           // 84
		hkpWorldOperationQueue*                                                    m_pendingOperations;                                          // 88
		std::int32_t                                                               m_pendingOperationsCount;                                     // 8C
		std::int32_t                                                               m_pendingBodyOperationsCount;                                 // 90
		std::int32_t                                                               m_criticalOperationsLockCount;                                // 94
		std::int32_t                                                               m_criticalOperationsLockCountForPhantoms;                     // 98
		hkBool                                                                     m_blockExecutingPendingOperations;                            // 9C
		hkBool                                                                     m_criticalOperationsAllowed;                                  // 9D
		std::uint16_t                                                              pad9E;                                                        // 9E
		hkpDebugInfoOnPendingOperationQueues*                                      m_pendingOperationQueues;                                     // A0
		std::int32_t                                                               m_pendingOperationQueueCount;                                 // A4
		hkMultiThreadCheck                                                         m_multiThreadCheck;                                           // A8
		hkBool                                                                     m_processActionsInSingleThread;                               // B0
		hkBool                                                                     m_allowIntegrationOfIslandsWithoutConstraintsInASeparateJob;  // B1
		std::uint16_t                                                              padB2;                                                        // B2
		std::uint32_t                                                              m_minDesiredIslandSize;                                       // B4
		hkCriticalSection*                                                         m_modifyConstraintCriticalSection;                            // B8
		std::int32_t                                                               m_isLocked;                                                   // BC
		hkCriticalSection*                                                         m_islandDirtyListCriticalSection;                             // C0
		hkCriticalSection*                                                         m_propertyMasterLock;                                         // C4
		hkBool                                                                     m_wantSimulationIslands;                                      // C8
		std::uint8_t                                                               padC9[0x3];                                                   // C9
		float                                                                      m_snapCollisionToConvexEdgeThreshold;                         // CC
		float                                                                      m_snapCollisionToConcaveEdgeThreshold;                        // D0
		hkBool                                                                     m_enableToiWeldRejection;                                     // D4
		hkBool                                                                     m_wantDeactivation;                                           // D5
		hkBool                                                                     m_shouldActivateOnRigidBodyTransformChange;                   // D6
		std::uint8_t                                                               padD7;                                                        // D7
		float                                                                      m_deactivationReferenceDistance;                              // D8
		float                                                                      m_toiCollisionResponseRotateNormal;                           // DC
		std::int32_t                                                               m_maxSectorsPerCollideTask;                                   // E0
		hkBool                                                                     m_processToisMultithreaded;                                   // E4
		std::uint8_t                                                               padE5[0x3];                                                   // E5
		std::int32_t                                                               m_maxEntriesPerToiCollideTask;                                // E8
		std::int32_t                                                               m_maxNumToiCollisionPairsSinglethreaded;                      // EC
		hkEnum<hkpWorldCinfo_SimulationType, std::int32_t>                         m_simulationType;                                             // F0
		float                                                                      m_numToisTillAllowedPenetrationSimplifiedToi;                 // F4
		float                                                                      m_numToisTillAllowedPenetrationToi;                           // F8
		float                                                                      m_numToisTillAllowedPenetrationToiHigher;                     // FC
		float                                                                      m_numToisTillAllowedPenetrationToiForced;                     // 100
		std::uint32_t                                                              m_lastEntityUid;                                              // 104
		std::uint32_t                                                              m_lastIslandUid;                                              // 108
		std::uint32_t                                                              m_lastConstraintUid;                                          // 10C
		hkArray<hkpPhantom*, hkContainerHeapAllocator>                             m_phantoms;                                                   // 110
		hkArray<hkpActionListener*, hkContainerHeapAllocator>                      m_actionListeners;                                            // 11C
		hkArray<hkpEntityListener*, hkContainerHeapAllocator>                      m_entityListeners;                                            // 128
		hkArray<hkpPhantomListener*, hkContainerHeapAllocator>                     m_phantomListeners;                                           // 134
		hkArray<hkpConstraintListener*, hkContainerHeapAllocator>                  m_constraintListeners;                                        // 140
		hkArray<hkpWorldDeletionListener*, hkContainerHeapAllocator>               m_worldDeletionListeners;                                     // 14C
		hkArray<hkpIslandActivationListener*, hkContainerHeapAllocator>            m_islandActivationListeners;                                  // 158
		hkArray<hkpWorldPostSimulationListener*, hkContainerHeapAllocator>         m_worldPostSimulationListeners;                               // 164
		hkArray<hkpWorldPostIntegrateListener*, hkContainerHeapAllocator>          m_worldPostIntegrateListeners;                                // 170
		hkArray<hkpWorldPostCollideListener*, hkContainerHeapAllocator>            m_worldPostCollideListeners;                                  // 17C
		hkArray<hkpIslandPostIntegrateListener*, hkContainerHeapAllocator>         m_islandPostIntegrateListeners;                               // 188
		hkArray<hkpIslandPostCollideListener*, hkContainerHeapAllocator>           m_islandPostCollideListeners;                                 // 194
		hkArray<hkpContactListener*, hkContainerHeapAllocator>                     m_contactListeners;                                           // 1A0
		hkArray<hkpContactImpulseLimitBreachedListener*, hkContainerHeapAllocator> m_contactImpulseLimitBreachedListeners;                       // 1AC
		hkpViolatedConstraintArray*                                                m_violatedConstraintArray;                                    // 1B8
		hkpBroadPhaseBorder*                                                       m_broadPhaseBorder;                                           // 1BC
		hkpCollisionCallbackUtil*                                                  m_collisionCallbackUtil;                                      // 1C0
		hkdWorld*                                                                  m_destructionWorld;                                           // 1C4?
		std::uint8_t                                                               pad1C8[0x8];                                                  // 1C8
		hkpWorldDynamicsStepInfo                                                   m_dynamicsStepInfo;                                           // 1D0?
		hkVector4                                                                  m_broadPhaseExtents[2];                                       // 310?
		std::int32_t                                                               m_broadPhaseNumMarkers;                                       // 330?
		std::int32_t                                                               m_sizeOfToiEventQueue;                                        // 334?
		std::int32_t                                                               m_broadPhaseQuerySize;                                        // 338?
		std::int32_t                                                               m_broadPhaseUpdateSize;                                       // 33C?
		hkEnum<hkpWorldCinfo_ContactPointGeneration, std::int8_t>                  m_contactPointGeneration;                                     // 340?
		std::uint8_t                                                               pad341[0xF];                                                  // 341
	};
}
