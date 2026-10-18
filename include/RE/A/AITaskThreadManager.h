#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class AITaskThread;

	class AITaskThreadManager
	{
	public:
		void AddThread(std::uint32_t aiThread)
		{
			using func_t = decltype(&AITaskThreadManager::AddThread);
			static REL::Relocation<func_t> func{ Offsets::AITaskThreadManager::AddThread };
			func(this, aiThread);
		}

	public:
		// members
		AITaskThread* AITaskThreadArray[3];  // 00
		std::int32_t  iTaskThreads;          // 0C
	};
}
