#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkUnaryAction.h"

namespace RE
{
	class bhkMotorAction :
		public bhkUnaryAction  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkMotorAction };
		static constexpr auto VTABLE{ VTABLE::bhkMotorAction };

	};
}
