#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSTask.h"
#include "RE/B/BSTaskManager.h"
#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/L/LockFreePriorityQueue.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class IOTask;

	class IOManager :
		public BSTaskManager<std::int64_t>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IOManager };
		static constexpr auto VTABLE{ VTABLE::IOManager };

		// override (BSTaskManager<std::int64_t>)
		virtual ~IOManager() = default;                             // 00
		virtual std::uint32_t GetBucketForKey(std::int64_t aiKey);  // 08
		virtual bool AddTask(BSTask<std::int64_t>* apTask);         // 12
		virtual void CancelAllTasks();                              // 15

		void LoadAllQueuedPriorities()
		{
			using func_t = decltype(&IOManager::LoadAllQueuedPriorities);
			static REL::Relocation<func_t> func{ Offsets::IOManager::LoadAllQueuedPriorities };
			func(this);
		}

		IOManager* ctor()
		{
			using func_t = IOManager*(__thiscall*)(IOManager*);
			static REL::Relocation<func_t> func{ Offsets::IOManager::ctor };
			return func(this);
		}

		void RequeuePrioritiesToNewPriority(IO_TASK_PRIORITY aeOldPriority, IO_TASK_PRIORITY aeNewPriority)
		{
			using func_t = decltype(&IOManager::RequeuePrioritiesToNewPriority);
			static REL::Relocation<func_t> func{ Offsets::IOManager::RequeuePrioritiesToNewPriority };
			func(this, aeOldPriority, aeNewPriority);
		}

		void Pause()
		{
			using func_t = decltype(&IOManager::Pause);
			static REL::Relocation<func_t> func{ Offsets::IOManager::Pause };
			func(this);
		}

		void Resume()
		{
			using func_t = decltype(&IOManager::Resume);
			static REL::Relocation<func_t> func{ Offsets::IOManager::Resume };
			func(this);
		}

	public:
		// members
		std::uint32_t                             iIOManagerThreadID;             // 60
		LockFreePriorityQueue<NiPointer<IOTask>>* pPostProcessQueue;              // 64
		IO_TASK_PRIORITY                          eLoadingQueuedPriority;         // 68
		void*                                     pGetExternalCountCallback;      // 6C
		void*                                     pUpdateQueueCallback;           // 70
		void*                                     pUpdateSecondaryQueueCallback;  // 74
		void*                                     pLoadQueuedPriorityCallback;    // 78
		void*                                     pPauseCallback;                 // 7C
		void*                                     pResumeCallback;                // 80
		std::uint8_t                              pad84[0x1C];                    // 84
	};
	static_assert(sizeof(IOManager) == 0xA0);
}
