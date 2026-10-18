#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/P/PosGen.h"

namespace RE
{
	class SymGen :
		public PosGen  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SymGen };
		static constexpr auto VTABLE{ VTABLE::SymGen };

		// override (PosGen)
		virtual ~SymGen() = default;    // 00
		virtual float Next() override;  // 01
		virtual char* Name() override;  // 02
	};
}
