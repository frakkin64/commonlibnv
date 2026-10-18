#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkBinaryAction.h"

namespace RE
{
	class bhkAngularDashpotAction :
		public bhkBinaryAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkAngularDashpotAction };
		static constexpr auto VTABLE{ VTABLE::bhkAngularDashpotAction };

	};
}
