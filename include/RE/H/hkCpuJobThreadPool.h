#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArrayBase.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkJobThreadPool.h"
#include "RE/H/hkJobType.h"
#include "RE/H/hkSemaphore.h"
#include "RE/H/hkThread.h"
#include "RE/H/hkTimerData.h"

namespace RE
{
	class hkJobQueue;
	class hkMemoryAllocator;

	class hkCpuJobThreadPool :
		public hkJobThreadPool  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkCpuJobThreadPool };
		static constexpr auto VTABLE{ VTABLE::hkCpuJobThreadPool };

		class SharedThreadData;
		class WorkerThreadData;

		class SharedThreadData
		{
		public:
			// members
			hkJobQueue*  m_jobQueue;               // 00?
			hkSemaphore  m_workerThreadFinished;   // 04?
			std::int32_t m_numThreads;             // 08?
			std::int32_t m_localHavokStackSize;    // 0C?
			std::int32_t m_timerBufferAllocation;  // 10?
		};

		class WorkerThreadData
		{
		public:
			// members
			hkCpuJobThreadPool::SharedThreadData* m_sharedThreadData;    // 00?
			std::uint32_t                         pad04;                 // 04
			hkThread                              m_thread;              // 08?
			std::int32_t                          m_threadId;            // 18?
			std::int32_t                          m_hardwareThreadId;    // 1C?
			bool                                  m_killThread;          // 20?
			bool                                  m_clearTimers;         // 21?
			std::uint16_t                         pad22;                 // 22
			hkSemaphore                           m_semaphore;           // 24?
			char*                                 m_monitorStreamBegin;  // 28?
			char*                                 m_monitorStreamEnd;    // 2C?
		};

		// override (hkJobThreadPool)
		virtual ~hkCpuJobThreadPool() = default;  // 00

		// add
		virtual void processAllJobs(hkJobQueue* queue, hkJobType firstJobType_unused);                   // 03
		virtual void waitForCompletion();                                                                // 04
		virtual bool isProcessing();                                                                     // 05
		virtual std::int32_t getNumThreads();                                                            // 06
		virtual void setNumThreads(std::int32_t numThreads);                                             // 07
		virtual void appendTimerData(hkArrayBase<hkTimerData>& timerDataOut, hkMemoryAllocator& alloc);  // 08
		virtual void clearTimerData();                                                                   // 09

		// members
		hkCpuJobThreadPool::WorkerThreadData m_workerThreads[6];  // 08
		hkCpuJobThreadPool::SharedThreadData m_sharedThreadData;  // 128
		hkBool                               m_isRunning;         // 13C
		std::uint8_t                         pad13D[0x3];         // 13D
		const char*                          m_threadName;        // 140?
		std::int32_t                         m_stackSize;         // 144?
	};
}
