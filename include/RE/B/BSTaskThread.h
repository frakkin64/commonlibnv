#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSemaphore.h"
#include "RE/H/HavokThreadMemoryStruct.h"

namespace RE
{
	class __declspec(novtable) BSTaskThread
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTaskThread };
		static constexpr auto VTABLE{ VTABLE::BSTaskThread };

		// add
		virtual ~BSTaskThread() = default;  // 00
		virtual void ThreadUpdate();        // 01

		void SignalPauseSemaphore()
		{
			using func_t = decltype(&BSTaskThread::SignalPauseSemaphore);
			static REL::Relocation<func_t> func{ Offsets::BSTaskThread::SignalPauseSemaphore };
			func(this);
		}

		void SignalSemaphore()
		{
			using func_t = decltype(&BSTaskThread::SignalSemaphore);
			static REL::Relocation<func_t> func{ Offsets::BSTaskThread::SignalSemaphore };
			func(this);
		}

	protected:
		void WaitPauseSemaphore()
		{
			using func_t = decltype(&BSTaskThread::WaitPauseSemaphore);
			static REL::Relocation<func_t> func{ Offsets::BSTaskThread::WaitPauseSemaphore };
			func(this);
		}

	public:
		// members
		void*                   hThreadHandle;      // 04
		std::uint32_t           iThreadID;          // 08
		BSSemaphore             Semaphore;          // 0C
		BSSemaphore             PauseSemaphore;     // 18
		HavokThreadMemoryStruct HavokThreadMemory;  // 24?
	};
}
