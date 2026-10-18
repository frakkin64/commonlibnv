#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSTask.h"
#include "RE/B/BSTaskManagerThread.h"
#include "RE/L/LockFreeMap.h"
#include "RE/N/NiPointer.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class BSTaskManager :
		public LockFreeMap<T, NiPointer<BSTask<T>>>  // 00
	{
	public:
		// override (LockFreeMap<T, NiPointer<BSTask<T>>>)
		virtual ~BSTaskManager() = default;  // 00

		// add
		virtual bool AddTask(BSTask<T>* apTask);                    // 12
		virtual void RunTask(BSTask<T>* apTask);                    // 13
		virtual void FinishTask(BSTask<T>* apTask);                 // 14
		virtual void CancelAllTasks();                              // 15
		virtual std::uint32_t GetThreadForTask(BSTask<T>* apTask);  // 16

		// members
		volatile bool            bExit;              // 1C?
		std::uint8_t             pad1D[0x3];         // 1D
		volatile std::int32_t    iNumThreadsPaused;  // 20?
		volatile std::int32_t    iPauseCount;        // 24?
		std::uint32_t            iNumTaskThreads;    // 28?
		BSTaskManagerThread<T>** pThreads;           // 2C?
		volatile std::int32_t*   pBucketCounts;      // 30?
		volatile std::int32_t    iBucketCountTotal;  // 34?
		std::uint8_t             pad38[0x28];        // 38
	};
}
