#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSemaphore.h"
#include "RE/B/BSThread.h"
#include "RE/H/hkMemoryRouter.h"

namespace RE
{
	class AITaskThread :
		public BSThread  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::AITaskThread };
		static constexpr auto VTABLE{ VTABLE::AITaskThread };

		// override (BSThread)
		virtual ~AITaskThread() = default;            // 00
		virtual std::uint32_t ThreadProc() override;  // 01

		AITaskThread* ctor(std::uint32_t aiThread)
		{
			using func_t = AITaskThread*(__thiscall*)(AITaskThread*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::AITaskThread::ctor };
			return func(this, aiThread);
		}

		void OnStartup()
		{
			using func_t = decltype(&AITaskThread::OnStartup);
			static REL::Relocation<func_t> func{ Offsets::AITaskThread::OnStartup };
			func(this);
		}

	public:
		// members
		BSSemaphore    StartProcessing;     // 30
		BSSemaphore    FinishedProcessing;  // 3C
		bool           bKillThread;         // 48
		std::uint8_t   pad49[0x3];          // 49
		std::uint32_t  iThread;             // 4C
		hkMemoryRouter ThreadMemory;        // 50
		void*          pThreadStackBuffer;  // 74
	};
	static_assert(sizeof(AITaskThread) == 0x78);
}
