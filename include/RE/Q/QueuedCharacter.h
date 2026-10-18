#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/Q/QueuedActor.h"

namespace RE
{
	class QueuedHead;
	class QueuedHelmet;

	class QueuedCharacter :
		public QueuedActor  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedCharacter };
		static constexpr auto VTABLE{ VTABLE::QueuedCharacter };

		// override (QueuedActor)
		virtual ~QueuedCharacter() = default;     // 00
		virtual void QueueModels() override;      // 0B
		virtual bool BackgroundClone() override;  // 0E
		virtual void Attach() override;           // 0F
		virtual void FinishAttach() override;     // 10

		void AttachHeadParts()
		{
			using func_t = decltype(&QueuedCharacter::AttachHeadParts);
			static REL::Relocation<func_t> func{ Offsets::QueuedCharacter::AttachHeadParts };
			func(this);
		}

	public:
		// members
		NiPointer<QueuedHead>   spQueuedHead;    // 40
		NiPointer<QueuedHelmet> spQueuedHelmet;  // 44
	};
	static_assert(sizeof(QueuedCharacter) == 0x48);
}
