#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESObjectMISC.h"

namespace RE
{
	class TESKey :
		public TESObjectMISC  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESKey };
		static constexpr auto VTABLE{ VTABLE::TESKey };

		// override (TESObjectMISC)
		virtual ~TESKey() = default;  // 04
	};
	static_assert(sizeof(TESKey) == 0xAC);
}
