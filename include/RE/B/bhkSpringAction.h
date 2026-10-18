#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkBinaryAction.h"

namespace RE
{
	class bhkSpringAction :
		public bhkBinaryAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkSpringAction };
		static constexpr auto VTABLE{ VTABLE::bhkSpringAction };

	};
}
