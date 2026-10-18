#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSLinearTaskThread.h"
#include "RE/H/hkMemoryRouter.h"

namespace RE
{
	class AILinearTaskThread :
		public BSLinearTaskThread  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::AILinearTaskThread };
		static constexpr auto VTABLE{ VTABLE::AILinearTaskThread };

		// override (BSLinearTaskThread)
		virtual ~AILinearTaskThread() = default;  // 00
		virtual void OnStartup() override;        // 02
		virtual void OnShutdown() override;       // 03
		virtual void RunLinearTasks() override;   // 04

		AILinearTaskThread* ctor(void* apfnTaskFunc)
		{
			using func_t = AILinearTaskThread*(__thiscall*)(AILinearTaskThread*, void*);
			static REL::Relocation<func_t> func{ Offsets::AILinearTaskThread::ctor };
			return func(this, apfnTaskFunc);
		}

	public:
		// members
		void*          pfnTaskFunc;         // 4C
		hkMemoryRouter ThreadMemory;        // 50
		void*          pThreadStackBuffer;  // 74
	};
	static_assert(sizeof(AILinearTaskThread) == 0x78);
}
