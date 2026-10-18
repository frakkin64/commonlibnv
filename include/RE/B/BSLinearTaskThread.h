#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSemaphore.h"
#include "RE/B/BSThread.h"

namespace RE
{
	class BSLinearTaskThread :
		public BSThread  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSLinearTaskThread };
		static constexpr auto VTABLE{ VTABLE::BSLinearTaskThread };

		// override (BSThread)
		virtual ~BSLinearTaskThread() = default;      // 00
		virtual std::uint32_t ThreadProc() override;  // 01

		// add
		virtual void OnStartup();       // 02
		virtual void OnShutdown();      // 03
		virtual void RunLinearTasks();  // 04

		void WaitForCompletion()
		{
			using func_t = decltype(&BSLinearTaskThread::WaitForCompletion);
			static REL::Relocation<func_t> func{ Offsets::BSLinearTaskThread::WaitForCompletion };
			func(this);
		}

		void Shutdown()
		{
			using func_t = decltype(&BSLinearTaskThread::Shutdown);
			static REL::Relocation<func_t> func{ Offsets::BSLinearTaskThread::Shutdown };
			func(this);
		}

		BSLinearTaskThread* ctor()
		{
			using func_t = BSLinearTaskThread*(__thiscall*)(BSLinearTaskThread*);
			static REL::Relocation<func_t> func{ Offsets::BSLinearTaskThread::ctor };
			return func(this);
		}

	public:
		// members
		BSSemaphore  StartProcessing;     // 30
		BSSemaphore  FinishedProcessing;  // 3C
		bool         bKillThread;         // 48
		std::uint8_t pad49[0x3];          // 49
	};
	static_assert(sizeof(BSLinearTaskThread) == 0x4C);
}
