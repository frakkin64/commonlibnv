#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESModel.h"

namespace RE
{
	class TESModelRDT :
		public TESModel  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::TESModelRDT };
		static constexpr auto VTABLE{ VTABLE::TESModelRDT };

		// override (TESModel)
		virtual ~TESModelRDT() = default;  // 04
	};
}
