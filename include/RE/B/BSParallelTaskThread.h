#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSLinearTaskThread.h"
#include "RE/H/HavokThreadMemoryStruct.h"

namespace RE
{
	class BSParallelTaskManager;

	class BSParallelTaskThread :
		public BSLinearTaskThread  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSParallelTaskThread };
		static constexpr auto VTABLE{ VTABLE::BSParallelTaskThread };

		// override (BSLinearTaskThread)
		virtual ~BSParallelTaskThread() = default;  // 00
		virtual void OnStartup() override;          // 02
		virtual void OnShutdown() override;         // 03
		virtual void RunLinearTasks() override;     // 04

		// members
		BSParallelTaskManager*  pManager;           // 4C
		HavokThreadMemoryStruct HavokThreadMemory;  // 50
	};
}
