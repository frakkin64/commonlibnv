#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkCriticalSection.h"
#include "RE/H/hkJobQueueHwSetup.h"
#include "RE/H/hkJobQueue_JobQueueEntry.h"
#include "RE/H/hkJobQueue_JobStatus.h"
#include "RE/H/hkJobType.h"
#include "RE/H/hkPadSpu.h"
#include "RE/H/hkQueue.h"

namespace RE
{
	class hkJob;
	class hkJobQueueCinfo;
	class hkSemaphore;

	class hkJobQueue
	{
	public:
		using JobQueueEntry = hkJobQueue_JobQueueEntry;
		using JobStatus = hkJobQueue_JobStatus;

		class CustomJobType;
		class CustomJobTypeSetup;
		class DynamicData;
		class JobQueueEntryInput;
		class Queue;
		class hkJobHandlerFuncs;

		enum class FinishJobFlag : std::int32_t
		{
			kFINISH_FLAG_NORMAL = 0x0,
			kFINISH_FLAG_JUST_CALL_FINISH_CALLBACK = 0x1,
		};

		enum class JobCreationStatus : std::int32_t
		{
			kJOB_CREATED = 0x0,
			kNO_JOB_CREATED = 0x1,
		};

		enum class JobPopFuncResult : std::int32_t
		{
			kPOP_QUEUE_ENTRY = 0x0,
			kDO_NOT_POP_QUEUE_ENTRY = 0x1,
		};

		enum class JobPriority : std::int32_t
		{
			kJOB_HIGH_PRIORITY = 0x0,
			kJOB_LOW_PRIORITY = 0x1,
		};

		enum class WaitPolicy : std::int32_t
		{
			kWAIT_UNTIL_ALL_WORK_COMPLETE = 0x0,
			kWAIT_INDEFINITELY = 0x1,
		};

		enum class WaitStatus : std::int32_t
		{
			kWAIT_FOR_NEXT_JOB = 0x0,
			kDO_NOT_WAIT_FOR_NEXT_JOB = 0x1,
		};

		class CustomJobType
		{
		public:
			// members
			hkJobType     m_jobType;     // 00?
			std::uint8_t  m_jobSubType;  // 04?
			std::uint8_t  m_queueId;     // 05?
			std::uint16_t pad06;         // 06
		};

		class CustomJobTypeSetup
		{
		public:
			// members
			hkJobType    m_jobType;     // 00?
			std::uint8_t m_jobSubType;  // 04?
			std::uint8_t pad05[0x3];    // 05
			std::int32_t m_threadId;    // 08?
		};

		class JobQueueEntryInput
		{
		public:
			// members
			hkPadSpu<std::uint32_t>  m_jobPriority;  // 00?
			hkJobQueue_JobQueueEntry m_job;          // 04?
		};

		class Queue :
			public hkQueue<hkJobQueue_JobQueueEntry>  // 00
		{
		public:
		};

		class hkJobHandlerFuncs
		{
		public:
			// members
			void*        m_processJobFuncs;     // 00?
			std::int32_t m_numProcessJobFuncs;  // 04?
			void*        m_popJobFunc;          // 08?
			void*        m_finishJobFunc;       // 0C?
		};

		class DynamicData
		{
		public:
			// members
			std::int16_t           m_numActiveJobs[11];           // 00?
			std::uint16_t          pad16;                         // 16
			std::int32_t           m_masterThreadFinishingFlags;  // 18?
			hkJobQueue::WaitPolicy m_waitPolicy;                  // 1C?
			hkBool                 m_outOfMemory;                 // 20?
			std::uint8_t           pad21;                         // 21
			std::uint16_t          m_numThreadsWaiting[4];        // 22?
			std::uint16_t          pad2A;                         // 2A
			hkJobQueue::Queue      m_jobQueue[15];                // 2C?
		};

		void checkQueueAndReleaseOneWaitingThread(std::int32_t queueIndex, hkJobQueue::DynamicData* data)
		{
			using func_t = decltype(&hkJobQueue::checkQueueAndReleaseOneWaitingThread);
			static REL::Relocation<func_t> func{ Offsets::hkJobQueue::checkQueueAndReleaseOneWaitingThread };
			func(this, queueIndex, data);
		}

		void registerJobWithCpuThread(hkJobType jobType, std::uint8_t subType, std::int32_t threadId)
		{
			using func_t = decltype(&hkJobQueue::registerJobWithCpuThread);
			static REL::Relocation<func_t> func{ Offsets::hkJobQueue::registerJobWithCpuThread };
			func(this, jobType, subType, threadId);
		}

		void setQueueCapacityForJobType(hkJobType jobType, std::int32_t queueCapacity)
		{
			using func_t = decltype(&hkJobQueue::setQueueCapacityForJobType);
			static REL::Relocation<func_t> func{ Offsets::hkJobQueue::setQueueCapacityForJobType };
			func(this, jobType, queueCapacity);
		}

		void addJobQueueLocked(hkJobQueue::DynamicData* data, hkJobQueue_JobQueueEntry const& job, hkJobQueue::JobPriority priority)
		{
			using func_t = decltype(&hkJobQueue::addJobQueueLocked);
			static REL::Relocation<func_t> func{ Offsets::hkJobQueue::addJobQueueLocked };
			func(this, data, job, priority);
		}

		void addJob(hkJob& job, hkJobQueue::JobPriority priority)
		{
			using func_t = decltype(&hkJobQueue::addJob);
			static REL::Relocation<func_t> func{ Offsets::hkJobQueue::addJob };
			func(this, job, priority);
		}

		void finishJob(hkJobQueue_JobQueueEntry const* oldJob, hkJobQueue::FinishJobFlag flag)
		{
			using func_t = decltype(&hkJobQueue::finishJob);
			static REL::Relocation<func_t> func{ Offsets::hkJobQueue::finishJob };
			func(this, oldJob, flag);
		}

		hkJobQueue_JobStatus finishJobAndGetNextJob(hkJobQueue_JobQueueEntry const* oldJob, hkJobQueue_JobQueueEntry& jobOut, hkJobQueue::WaitStatus waitStatus)
		{
			using func_t = decltype(&hkJobQueue::finishJobAndGetNextJob);
			static REL::Relocation<func_t> func{ Offsets::hkJobQueue::finishJobAndGetNextJob };
			return func(this, oldJob, jobOut, waitStatus);
		}

		hkJobQueue_JobStatus finishAddAndGetNextJob(hkJobType oldJobType, hkJobQueue::JobPriority priority, hkJobQueue_JobQueueEntry& jobInOut, hkJobQueue::WaitStatus waitStatus)
		{
			using func_t = decltype(&hkJobQueue::finishAddAndGetNextJob);
			static REL::Relocation<func_t> func{ Offsets::hkJobQueue::finishAddAndGetNextJob };
			return func(this, oldJobType, priority, jobInOut, waitStatus);
		}

		hkJobQueue_JobStatus processAllJobs()
		{
			using func_t = decltype(&hkJobQueue::processAllJobs);
			static REL::Relocation<func_t> func{ Offsets::hkJobQueue::processAllJobs };
			return func(this);
		}

		hkJobQueue* ctor(hkJobQueueCinfo const& cinfo)
		{
			using func_t = hkJobQueue*(__thiscall*)(hkJobQueue*, hkJobQueueCinfo const&);
			static REL::Relocation<func_t> func{ Offsets::hkJobQueue::ctor };
			return func(this, cinfo);
		}

		hkJobQueue_JobStatus findJobInternal(std::int32_t queueIndexOfNewJob, hkJobQueue::DynamicData* data, hkJobQueue::WaitStatus waitStatus, hkJobQueue_JobQueueEntry& jobOut)
		{
			using func_t = decltype(&hkJobQueue::findJobInternal);
			static REL::Relocation<func_t> func{ Offsets::hkJobQueue::findJobInternal };
			return func(this, queueIndexOfNewJob, data, waitStatus, jobOut);
		}

	public:
		// members
		hkCriticalSection                                                 m_criticalSection;                    // 00?
		hkJobQueue::DynamicData*                                          m_data;                               // 1C?
		void*                                                             m_popJobFunc;                         // 20?
		void*                                                             m_finishJobFunc;                      // 24?
		std::int32_t                                                      m_numJobTypes;                        // 28?
		std::int32_t                                                      m_cpuCacheQueuesBegin;                // 2C?
		std::int32_t                                                      m_cpuCustomQueuesBegin;               // 30?
		std::int32_t                                                      m_cpuTypesQueuesBegin;                // 34?
		std::int32_t                                                      m_numJobQueues;                       // 38?
		hkJobQueue::CustomJobType                                         m_customJobs[2];                      // 3C?
		std::int32_t                                                      m_numCustomJobs;                      // 4C?
		std::int32_t                                                      m_cpuSemaphoreBegin;                  // 50?
		std::int32_t                                                      m_directMapSemaphoreEnd;              // 54?
		std::int32_t                                                      m_masterThreadQueue;                  // 58?
		hkJobQueueHwSetup                                                 m_hwSetup;                            // 5C?
		std::int32_t                                                      m_numSpuElfs;                         // 74?
		hkBool                                                            m_queryRulesAreUpdated;               // 78?
		std::uint8_t                                                      pad79[0x3];                           // 79
		hkSemaphore*                                                      m_queueSemaphores[4];                 // 7C?
		std::int32_t                                                      m_numQueueSemaphores;                 // 8C?
		char                                                              m_nextQueueToGet[4][17];              // 90?
		char                                                              m_cpuThreadIndexToSemaphoreIndex[6];  // D4?
		std::uint16_t                                                     padDA;                                // DA
		hkJobQueue::hkJobHandlerFuncs                                     m_jobFuncs[11];                       // DC?
		hkArray<hkJobQueue::CustomJobTypeSetup, hkContainerHeapAllocator> m_customJobSetup;                     // 18C?
	};
}
