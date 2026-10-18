#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSPerformanceTimerInternal;

	class BSPerformanceTimer
	{
	public:
		BSPerformanceTimer* ctor(char* apSystem, char* apName, bool abDisplayPerFrame, bool abGlobalReset)
		{
			using func_t = BSPerformanceTimer*(__thiscall*)(BSPerformanceTimer*, char*, char*, bool, bool);
			static REL::Relocation<func_t> func{ Offsets::BSPerformanceTimer::ctor };
			return func(this, apSystem, apName, abDisplayPerFrame, abGlobalReset);
		}

	public:
		// members
		BSPerformanceTimerInternal* pRegisteredTimer;  // 00
	};
}
