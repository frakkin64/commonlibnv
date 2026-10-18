#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkEnum.h"
#include "RE/H/hkpEntityListener.h"
#include "RE/H/hkpPhantomListener.h"
#include "RE/H/hkpTreeWorldManager.h"

namespace RE
{
	class hkJobQueue;
	class hkJobThreadPool;
	class hkKdTree;
	class hkpCdPointCollector;
	class hkpCollidable;
	class hkpCollidableCollidableFilter;
	class hkpCollisionAgentConfig;
	class hkpCollisionFilter;
	class hkpCollisionInput;
	class hkpLinearCastInput;
	class hkpRayHitCollector;
	class hkpWorld;
	class hkpWorldRayCastInput;
	class hkpWorldRayCastOutput;

	class hkpKdTreeWorldManager :
		public hkpTreeWorldManager,  // 00
		public hkpEntityListener,  // 14
		public hkpPhantomListener  // 18
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpKdTreeWorldManager };
		static constexpr auto VTABLE{ VTABLE::hkpKdTreeWorldManager };

		enum class ObjectRemovedBehavior : std::int32_t
		{
			kMARK_TREE_AS_DIRTY = 0x0,
			kREMOVE_OBJECT_FROM_TREE = 0x1,
		};

		// override (hkpTreeWorldManager)
		virtual ~hkpKdTreeWorldManager() = default;  // 00

		// add
		virtual void updateFromWorld(hkJobQueue* jobQueue, hkJobThreadPool* jobThreadPool);                                                                                                                                                                                                    // 03
		virtual bool isUpToDate() const;                                                                                                                                                                                                                                                       // 04
		virtual void setUpToDate(bool upToDate);                                                                                                                                                                                                                                               // 05
		virtual void castRay(const hkpWorldRayCastInput* a_arg1, const hkpCollisionFilter* a_arg2, hkpWorldRayCastOutput* a_arg3) const;                                                                                                                                                       // 07 (reversed overload group)
		virtual void castRay(const hkpWorldRayCastInput* a_arg1, const hkpCollisionFilter* a_arg2, hkpRayHitCollector* a_arg3) const;                                                                                                                                                          // 06 (reversed overload group)
		virtual void linearCast(hkpCollidable const* collA, hkpLinearCastInput const& input, hkpCollidableCollidableFilter const* filter, hkpCollisionInput const& collInput, hkpCollisionAgentConfig* config, hkpCdPointCollector& castCollector, hkpCdPointCollector* startPointCollector);  // 08
		virtual void Unk_09();                                                                                                                                                                                                                                                                 // 09
		virtual void Unk_0A();                                                                                                                                                                                                                                                                 // 0A

		hkpKdTreeWorldManager* ctor(hkpWorld* world, hkpKdTreeWorldManager::ObjectRemovedBehavior objRemBehavior)
		{
			using func_t = hkpKdTreeWorldManager*(__thiscall*)(hkpKdTreeWorldManager*, hkpWorld*, hkpKdTreeWorldManager::ObjectRemovedBehavior);
			static REL::Relocation<func_t> func{ Offsets::hkpKdTreeWorldManager::ctor };
			return func(this, world, objRemBehavior);
		}

	protected:
		void buildTreeSingleThreaded(hkKdTree*& tree, hkArray<hkpCollidable const*, hkContainerHeapAllocator>& collidables)
		{
			using func_t = decltype(&hkpKdTreeWorldManager::buildTreeSingleThreaded);
			static REL::Relocation<func_t> func{ Offsets::hkpKdTreeWorldManager::buildTreeSingleThreaded };
			func(this, tree, collidables);
		}

		void gatherCollidablesFromWorld(hkArray<hkpCollidable const*, hkContainerHeapAllocator>& collidables)
		{
			using func_t = decltype(&hkpKdTreeWorldManager::gatherCollidablesFromWorld);
			static REL::Relocation<func_t> func{ Offsets::hkpKdTreeWorldManager::gatherCollidablesFromWorld };
			func(this, collidables);
		}

		void buildTreeDistributed(hkKdTree*& tree, hkArray<hkpCollidable const*, hkContainerHeapAllocator>& collidables, hkJobQueue* jobQueue, hkJobThreadPool* jobThreadPool)
		{
			using func_t = decltype(&hkpKdTreeWorldManager::buildTreeDistributed);
			static REL::Relocation<func_t> func{ Offsets::hkpKdTreeWorldManager::buildTreeDistributed };
			func(this, tree, collidables, jobQueue, jobThreadPool);
		}

	public:
		// members
		hkpWorld*                                                          m_world;                  // 1C
		hkBool                                                             m_mustUpdateFromWorld;    // 20
		std::uint8_t                                                       pad21[0x3];               // 21
		hkEnum<hkpKdTreeWorldManager::ObjectRemovedBehavior, std::uint8_t> m_objectRemovedBehavior;  // 24?
		std::uint8_t                                                       pad25[0x3];               // 25
	};
}
