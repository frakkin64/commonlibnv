#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSCriticalSection.h"

namespace RE
{
	class MobileObjectTaskletData;

	class AITaskQueue
	{
	public:
		MobileObjectTaskletData* Dequeue()
		{
			using func_t = decltype(&AITaskQueue::Dequeue);
			static REL::Relocation<func_t> func{ Offsets::AITaskQueue::Dequeue };
			return func(this);
		}

	public:
		// members
		BSCriticalSection        UsingQueue;         // 00
		MobileObjectTaskletData* TaskDataArray[10];  // 18
		std::int32_t             iNumTasks;          // 40
		std::int32_t             iFirstTask;         // 44
	};
}
