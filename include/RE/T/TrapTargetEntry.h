#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TargetEntry.h"

namespace RE
{
	class ZoneEntry;

	class alignas(16) TrapTargetEntry :
		public TargetEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TrapTargetEntry };
		static constexpr auto VTABLE{ VTABLE::TrapTargetEntry };

		// override (TargetEntry)
		virtual void Run(ZoneEntry* apTrap) override;  // 00
	};
}
