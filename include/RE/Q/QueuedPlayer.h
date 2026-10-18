#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/Q/QueuedCharacter.h"

namespace RE
{
	class QueuedPlayer :
		public QueuedCharacter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedPlayer };
		static constexpr auto VTABLE{ VTABLE::QueuedPlayer };

		// override (QueuedCharacter)
		virtual ~QueuedPlayer() = default;    // 00
		virtual void QueueModels() override;  // 0B
		virtual void Attach() override;       // 0F
	};
	static_assert(sizeof(QueuedPlayer) == 0x48);
}
