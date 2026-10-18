#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSemaphore.h"
#include "RE/B/BSThread.h"

namespace RE
{
	class LoadingMenuThread :
		public BSThread  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::LoadingMenuThread };
		static constexpr auto VTABLE{ VTABLE::LoadingMenuThread };

		// override (BSThread)
		virtual ~LoadingMenuThread() = default;       // 00
		virtual std::uint32_t ThreadProc() override;  // 01

	protected:
		LoadingMenuThread* ctor()
		{
			using func_t = LoadingMenuThread*(__thiscall*)(LoadingMenuThread*);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenuThread::ctor };
			return func(this);
		}

		void Unsuspend()
		{
			using func_t = decltype(&LoadingMenuThread::Unsuspend);
			static REL::Relocation<func_t> func{ Offsets::LoadingMenuThread::Unsuspend };
			func(this);
		}

	public:
		// members
		BSSemaphore   BackgroundThreadSema;  // 30
		BSSemaphore   MainThreadSema;        // 3C
		volatile bool bFlagSuspend;          // 48
		volatile bool bFlagSuspended;        // 49
		volatile bool bExit;                 // 4A
		std::uint8_t  pad4B;                 // 4B
	};
}
