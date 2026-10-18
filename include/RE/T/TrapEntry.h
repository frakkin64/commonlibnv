#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/Z/ZoneEntry.h"

namespace RE
{
	class TrapEntry :
		public ZoneEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TrapEntry };
		static constexpr auto VTABLE{ VTABLE::TrapEntry };

		// override (ZoneEntry)
		virtual void Run() override;  // 01
	};
	static_assert(sizeof(TrapEntry) == 0x18);
}
