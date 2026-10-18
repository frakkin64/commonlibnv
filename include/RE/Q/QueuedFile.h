#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BS_TASK_STATE.h"
#include "RE/I/IOTask.h"
#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/M/MEM_CONTEXT.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class QueuedChildren;
	class QueuedParents;

	class QueuedFile :
		public IOTask  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedFile };
		static constexpr auto VTABLE{ VTABLE::QueuedFile };

		// override (IOTask)
		virtual ~QueuedFile() = default;                                                 // 00
		virtual void Run() override;                                                     // 01
		virtual void Finish() override;                                                  // 02
		virtual void Cancel(BS_TASK_STATE aePreviousState, void* apTaskOwner) override;  // 03
		virtual void Requeue(IO_TASK_PRIORITY aeNewPriority) override;                   // 07

		// add
		virtual void QueueMe();                                 // 08
		virtual void NotifyChildFinished(QueuedFile* apChild);  // 09
		virtual void CheckFinished();                           // 0A

		bool GetAllChildrenFinished()
		{
			using func_t = decltype(&QueuedFile::GetAllChildrenFinished);
			static REL::Relocation<func_t> func{ Offsets::QueuedFile::GetAllChildrenFinished };
			return func(this);
		}

		void SetParent(QueuedFile* apParent)
		{
			using func_t = decltype(&QueuedFile::SetParent);
			static REL::Relocation<func_t> func{ Offsets::QueuedFile::SetParent };
			func(this, apParent);
		}

		QueuedFile* ctor(IO_TASK_PRIORITY aePriority)
		{
			using func_t = QueuedFile*(__thiscall*)(QueuedFile*, IO_TASK_PRIORITY);
			static REL::Relocation<func_t> func{ Offsets::QueuedFile::ctor };
			return func(this, aePriority);
		}

	public:
		// members
		MEM_CONTEXT           eContext;            // 18
		NiPointer<QueuedFile> spParent;            // 1C
		QueuedChildren*       pChildren;           // 20
		QueuedParents*        pAdditionalParents;  // 24
	};
	static_assert(sizeof(QueuedFile) == 0x28);
}
