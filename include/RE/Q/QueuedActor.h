#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/IO_TASK_PRIORITY.h"
#include "RE/Q/QueuedReference.h"

namespace RE
{
	class TESObjectREFR;

	class QueuedActor :
		public QueuedReference  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedActor };
		static constexpr auto VTABLE{ VTABLE::QueuedActor };

		// override (QueuedReference)
		virtual ~QueuedActor() = default;     // 00
		virtual void QueueMe() override;      // 08
		virtual void QueueModels() override;  // 0B

		QueuedActor* ctor(TESObjectREFR* apRef, IO_TASK_PRIORITY aePriority)
		{
			using func_t = QueuedActor*(__thiscall*)(QueuedActor*, TESObjectREFR*, IO_TASK_PRIORITY);
			static REL::Relocation<func_t> func{ Offsets::QueuedActor::ctor };
			return func(this, apRef, aePriority);
		}
	};
}
