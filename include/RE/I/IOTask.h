#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSTask.h"
#include "RE/I/IO_TASK_PRIORITY.h"

namespace RE
{
	class IOTask :
		public BSTask<std::int64_t>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::IOTask };
		static constexpr auto VTABLE{ VTABLE::IOTask };

		// override (BSTask<std::int64_t>)
		virtual ~IOTask() = default;  // 00

		// add
		virtual void PostProcess();                            // 05
		virtual void GenerateKey();                            // 06
		virtual void Requeue(IO_TASK_PRIORITY aeNewPriority);  // 07

		IO_TASK_PRIORITY GetIOTaskPriority()
		{
			using func_t = decltype(&IOTask::GetIOTaskPriority);
			static REL::Relocation<func_t> func{ Offsets::IOTask::GetIOTaskPriority };
			return func(this);
		}

		std::uint8_t GetPriority()
		{
			using func_t = decltype(&IOTask::GetPriority);
			static REL::Relocation<func_t> func{ Offsets::IOTask::GetPriority };
			return func(this);
		}

		void AddToPostProcessQueue()
		{
			using func_t = decltype(&IOTask::AddToPostProcessQueue);
			static REL::Relocation<func_t> func{ Offsets::IOTask::AddToPostProcessQueue };
			func(this);
		}

		IOTask* ctor(IO_TASK_PRIORITY aePriority)
		{
			using func_t = IOTask*(__thiscall*)(IOTask*, IO_TASK_PRIORITY);
			static REL::Relocation<func_t> func{ Offsets::IOTask::ctor };
			return func(this, aePriority);
		}
	};
	static_assert(sizeof(IOTask) == 0x18);
}
