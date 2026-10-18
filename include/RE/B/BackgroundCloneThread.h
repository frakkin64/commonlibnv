#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSTaskThread.h"
#include "RE/L/LockFreeQueue.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class QueuedReference;

	class BackgroundCloneThread :
		public BSTaskThread  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BackgroundCloneThread };
		static constexpr auto VTABLE{ VTABLE::BackgroundCloneThread };

		// override (BSTaskThread)
		virtual ~BackgroundCloneThread() = default;  // 00
		virtual void ThreadUpdate() override;        // 01

		BackgroundCloneThread* ctor(std::uint32_t aiMaxThreads)
		{
			using func_t = BackgroundCloneThread*(__thiscall*)(BackgroundCloneThread*, std::uint32_t);
			static REL::Relocation<func_t> func{ Offsets::BackgroundCloneThread::ctor };
			return func(this, aiMaxThreads);
		}

	public:
		// members
		volatile bool                              bExit;                  // 30
		std::uint8_t                               pad31[0x3];             // 31
		volatile std::int32_t                      iRunningCount;          // 34
		LockFreeQueue<NiPointer<QueuedReference>>* pCloneReferencesQueue;  // 38
	};
	static_assert(sizeof(BackgroundCloneThread) == 0x3C);
}
