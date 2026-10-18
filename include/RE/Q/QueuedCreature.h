#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/Q/QueuedActor.h"

namespace RE
{
	class QueuedCreature :
		public QueuedActor  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedCreature };
		static constexpr auto VTABLE{ VTABLE::QueuedCreature };

		// override (QueuedActor)
		virtual ~QueuedCreature() = default;  // 00
		virtual void QueueModels() override;  // 0B
	};
	static_assert(sizeof(QueuedCreature) == 0x40);
}
