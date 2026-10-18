#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkKdTreeBuildInput_WorkingSet.h"
#include "RE/H/hkPointerMap.h"
#include "RE/H/hkpEntityListener.h"
#include "RE/H/hkpIslandActivationListener.h"
#include "RE/H/hkpPhantomListener.h"
#include "RE/H/hkpTreeWorldManager.h"
#include "RE/H/hkpWorldCinfo_TreeUpdateType.h"
#include "RE/H/hkpWorldPostSimulationListener.h"

namespace RE
{
	class hkJobQueue;
	class hkJobThreadPool;
	class hkKdTree;
	class hkSemaphore;
	class hkpCdPointCollector;
	class hkpCollidable;
	class hkpCollidableCollidableFilter;
	class hkpCollisionAgentConfig;
	class hkpCollisionFilter;
	class hkpCollisionInput;
	class hkpCollisionQueryJobHeader;
	class hkpLinearCastInput;
	class hkpRayHitCollector;
	class hkpWorld;
	class hkpWorldRayCastInput;
	class hkpWorldRayCastOutput;

	class hkpAabbTreeWorldManager :
		public hkpTreeWorldManager,  // 00
		public hkpEntityListener,  // 14
		public hkpPhantomListener,  // 18
		public hkpIslandActivationListener,  // 1C
		public hkpWorldPostSimulationListener  // 20
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpAabbTreeWorldManager };
		static constexpr auto VTABLE{ VTABLE::hkpAabbTreeWorldManager };

		// override (hkpTreeWorldManager)
		virtual ~hkpAabbTreeWorldManager() = default;  // 00

		// add
		virtual void updateFromWorld(hkJobQueue* jobQueue, hkJobThreadPool* jobThreadPool);                                                                                                                                                                                                    // 03
		virtual bool isUpToDate() const;                                                                                                                                                                                                                                                       // 04
		virtual void setUpToDate(bool upToDate);                                                                                                                                                                                                                                               // 05
		virtual void castRay(const hkpWorldRayCastInput* a_arg1, const hkpCollisionFilter* a_arg2, hkpWorldRayCastOutput* a_arg3) const;                                                                                                                                                       // 07 (reversed overload group)
		virtual void castRay(const hkpWorldRayCastInput* a_arg1, const hkpCollisionFilter* a_arg2, hkpRayHitCollector* a_arg3) const;                                                                                                                                                          // 06 (reversed overload group)
		virtual void linearCast(hkpCollidable const* collA, hkpLinearCastInput const& input, hkpCollidableCollidableFilter const* filter, hkpCollisionInput const& collInput, hkpCollisionAgentConfig* config, hkpCdPointCollector& castCollector, hkpCdPointCollector* startPointCollector);  // 08
		virtual std::int32_t calcWorkingBufferSize(std::int32_t maxObjects);                                                                                                                                                                                                                   // 09
		virtual void setWorkingBuffer(void* ptr);                                                                                                                                                                                                                                              // 0A

		hkpAabbTreeWorldManager* ctor(hkpWorld* world, hkpWorldCinfo_TreeUpdateType updateType, float aabbExpandDt)
		{
			using func_t = hkpAabbTreeWorldManager*(__thiscall*)(hkpAabbTreeWorldManager*, hkpWorld*, hkpWorldCinfo_TreeUpdateType, float);
			static REL::Relocation<func_t> func{ Offsets::hkpAabbTreeWorldManager::ctor };
			return func(this, world, updateType, aabbExpandDt);
		}

	protected:
		bool scanActiveListAndGetInactivated(hkArray<hkpCollidable const*, hkContainerHeapAllocator>& inactivatedOut)
		{
			using func_t = decltype(&hkpAabbTreeWorldManager::scanActiveListAndGetInactivated);
			static REL::Relocation<func_t> func{ Offsets::hkpAabbTreeWorldManager::scanActiveListAndGetInactivated };
			return func(this, inactivatedOut);
		}

		void queueActivated(hkpCollidable const* c)
		{
			using func_t = decltype(&hkpAabbTreeWorldManager::queueActivated);
			static REL::Relocation<func_t> func{ Offsets::hkpAabbTreeWorldManager::queueActivated };
			func(this, c);
		}

		void queueInactivated(hkpCollidable const* c)
		{
			using func_t = decltype(&hkpAabbTreeWorldManager::queueInactivated);
			static REL::Relocation<func_t> func{ Offsets::hkpAabbTreeWorldManager::queueInactivated };
			func(this, c);
		}

		void buildInactiveTree(hkArray<hkpCollidable const*, hkContainerHeapAllocator>& collidables, hkJobQueue* jobQueue, hkJobThreadPool* jobThreadPool)
		{
			using func_t = decltype(&hkpAabbTreeWorldManager::buildInactiveTree);
			static REL::Relocation<func_t> func{ Offsets::hkpAabbTreeWorldManager::buildInactiveTree };
			func(this, collidables, jobQueue, jobThreadPool);
		}

		void buildKdTree(hkKdTree*& tree, hkArray<hkpCollidable const*, hkContainerHeapAllocator>& collidables, hkpWorld* world, hkJobQueue* jobQueue, hkJobThreadPool* jobThreadPool)
		{
			using func_t = decltype(&hkpAabbTreeWorldManager::buildKdTree);
			static REL::Relocation<func_t> func{ Offsets::hkpAabbTreeWorldManager::buildKdTree };
			func(this, tree, collidables, world, jobQueue, jobThreadPool);
		}

		void incrementalBuild(hkJobQueue* jobQueue, hkJobThreadPool* jobThreadPool)
		{
			using func_t = decltype(&hkpAabbTreeWorldManager::incrementalBuild);
			static REL::Relocation<func_t> func{ Offsets::hkpAabbTreeWorldManager::incrementalBuild };
			func(this, jobQueue, jobThreadPool);
		}

		void fullBuild(hkJobQueue* jobQueue, hkJobThreadPool* jobThreadPool)
		{
			using func_t = decltype(&hkpAabbTreeWorldManager::fullBuild);
			static REL::Relocation<func_t> func{ Offsets::hkpAabbTreeWorldManager::fullBuild };
			func(this, jobQueue, jobThreadPool);
		}

	public:
		// members
		bool                                                                       m_useInactiveTree;          // 24
		std::uint8_t                                                               pad25[0x3];                 // 25
		hkpWorld*                                                                  m_world;                    // 28
		bool                                                                       m_doneFirstBuild;           // 2C
		std::uint8_t                                                               pad2D[0x3];                 // 2D
		hkKdTreeBuildInput_WorkingSet                                              m_kdTreeWorkingSet;         // 30
		std::int32_t                                                               m_maxObjects;               // 38
		hkpCollisionQueryJobHeader*                                                m_kdTreeJobpHeader;         // 3C
		float                                                                      m_aabbExpandDt;             // 40
		hkArray<hkpCollidable const*, hkContainerHeapAllocator>                    m_activeList;               // 44
		hkPointerMap<hkpCollidable const*, std::int32_t, hkContainerHeapAllocator> m_transitionQueue;          // 50
		bool                                                                       m_enableFullScan;           // 5C
		std::uint8_t                                                               pad5D[0x3];                 // 5D
		std::int32_t                                                               m_activeListCheckStartIdx;  // 60
		std::int32_t                                                               m_numObjToCheckInAFrame;    // 64
		bool                                                                       m_treeIsClean;              // 68
		bool                                                                       m_mustUpdateActiveList;     // 69?
		std::uint16_t                                                              pad6A;                      // 6A
		hkSemaphore*                                                               m_kdTreeSemaphore;          // 6C?
	};
}
