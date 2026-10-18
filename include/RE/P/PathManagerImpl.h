#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSCriticalSection.h"
#include "RE/B/BSReadWriteLock.h"
#include "RE/B/BSTCommonLLMessageQueue.h"
#include "RE/B/BSTCommonStaticMessageQueue.h"
#include "RE/B/BSTStaticFreeList.h"
#include "RE/B/BSTaskletGroup.h"
#include "RE/L/LockFreeMap.h"
#include "RE/N/NiPointer.h"
#include "RE/P/PathingLocation.h"
#include "RE/P/PathingMessage.h"

namespace RE
{
	class Actor;
	class ActorPathingMessageQueue;
	class InventoryChanges;
	class NiAVObject;
	class PathingRequest;
	class PathingTaskData;

	class PathManagerImpl
	{
	public:
		class PathBuiltDebugStruct;

		enum class PATH_MANAGER_STATE : std::int32_t
		{
			kPATH_MANAGER_STATE_IDLE = 0x0,
			kPATH_MANAGER_STATE_WAITING_FOR_PAUSE = 0x1,
			kPATH_MANAGER_STATE_PAUSED = 0x2,
			kPATH_MANAGER_STATE_WAITING_FOR_RESUME = 0x3,
		};

		class PathBuiltDebugStruct
		{
		public:
			// members
			Actor*          pActor;       // 00?
			PathingLocation Origin;       // 04?
			PathingLocation Destination;  // 2C?
			bool            bResult;      // 54?
			std::uint8_t    pad55[0x3];   // 55
			std::uint32_t   iLastTime;    // 58?
			std::int32_t    iPathCount;   // 5C?
		};

		PathManagerImpl* ctor()
		{
			using func_t = PathManagerImpl*(__thiscall*)(PathManagerImpl*);
			static REL::Relocation<func_t> func{ Offsets::PathManagerImpl::ctor };
			return func(this);
		}

		bool Initialize()
		{
			using func_t = decltype(&PathManagerImpl::Initialize);
			static REL::Relocation<func_t> func{ Offsets::PathManagerImpl::Initialize };
			return func(this);
		}

		void Release()
		{
			using func_t = decltype(&PathManagerImpl::Release);
			static REL::Relocation<func_t> func{ Offsets::PathManagerImpl::Release };
			func(this);
		}

		bool BuildPath(NiPointer<PathingRequest> aspRequest, NiPointer<ActorPathingMessageQueue> aspMessageQueue)
		{
			using func_t = decltype(&PathManagerImpl::BuildPath);
			static REL::Relocation<func_t> func{ Offsets::PathManagerImpl::BuildPath };
			return func(this, aspRequest, aspMessageQueue);
		}

		void Update()
		{
			using func_t = decltype(&PathManagerImpl::Update);
			static REL::Relocation<func_t> func{ Offsets::PathManagerImpl::Update };
			func(this);
		}

		void Pause()
		{
			using func_t = decltype(&PathManagerImpl::Pause);
			static REL::Relocation<func_t> func{ Offsets::PathManagerImpl::Pause };
			func(this);
		}

		void Resume()
		{
			using func_t = decltype(&PathManagerImpl::Resume);
			static REL::Relocation<func_t> func{ Offsets::PathManagerImpl::Resume };
			func(this);
		}

		void CancelCurrentPathsAndPause()
		{
			using func_t = decltype(&PathManagerImpl::CancelCurrentPathsAndPause);
			static REL::Relocation<func_t> func{ Offsets::PathManagerImpl::CancelCurrentPathsAndPause };
			func(this);
		}

		void ClearInventoryPointersFromCurrentRequests(InventoryChanges* apInventory)
		{
			using func_t = decltype(&PathManagerImpl::ClearInventoryPointersFromCurrentRequests);
			static REL::Relocation<func_t> func{ Offsets::PathManagerImpl::ClearInventoryPointersFromCurrentRequests };
			func(this, apInventory);
		}

	public:
		// members
		BSTaskletGroup                                          PathingTaskletGroup;      // 00
		BSTStaticFreeList<PathingMessage, 256>                  MessagePool;              // 04
		BSTCommonLLMessageQueue<PathingMessage>                 MessageQueue;             // C10
		PathManagerImpl::PATH_MANAGER_STATE                     eState;                   // C24
		std::uint32_t                                           iPauseRetryCount;         // C28
		BSReadWriteLock                                         SpinLock;                 // C2C
		bool                                                    bCancelPaths;             // C34
		std::uint8_t                                            padC35[0x3];              // C35
		BSCriticalSection                                       UpdateCriticalSection;    // C38?
		BSTCommonStaticMessageQueue<NiPointer<NiAVObject>, 256> PathsToDraw;              // C50
		BSTCommonStaticMessageQueue<NiPointer<NiAVObject>, 256> PathsToRemove;            // 1064
		std::uint8_t                                            pad1478[0x8];             // 1478
		LockFreeMap<PathingRequest*, PathingTaskData*>          RequestToTaskletDataMap;  // 1480
		std::uint8_t                                            pad149C[0x24];            // 149C
	};
	static_assert(sizeof(PathManagerImpl) == 0x14C0);
}
