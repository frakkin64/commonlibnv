#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SymGen.h"

namespace RE
{
	class Normal :
		public SymGen  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::Normal };
		static constexpr auto VTABLE{ VTABLE::Normal };

		// override (SymGen)
		virtual ~Normal() = default;    // 00
		virtual char* Name() override;  // 02
	};
}
