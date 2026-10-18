#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSParallelArrayTask;
	class BSParallelTaskThread;

	class BSParallelTaskManager
	{
	public:
		BSParallelTaskManager* ctor()
		{
			using func_t = BSParallelTaskManager*(__thiscall*)(BSParallelTaskManager*);
			static REL::Relocation<func_t> func{ Offsets::BSParallelTaskManager::ctor };
			return func(this);
		}

		void RunTask(BSParallelArrayTask* apArrayTask)
		{
			using func_t = decltype(&BSParallelTaskManager::RunTask);
			static REL::Relocation<func_t> func{ Offsets::BSParallelTaskManager::RunTask };
			func(this, apArrayTask);
		}

	public:
		// members
		BSParallelTaskThread** pThreads;      // 00
		void*                  pTaskFunc;     // 04
		void*                  pData;         // 08
		bool                   bRunningTask;  // 0C
		std::uint8_t           pad0D[0x3];    // 0D
	};
	static_assert(sizeof(BSParallelTaskManager) == 0x10);
}
