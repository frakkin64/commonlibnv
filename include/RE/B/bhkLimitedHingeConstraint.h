#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkConstraint.h"

namespace RE
{
	class bhkLimitedHingeConstraint :
		public bhkConstraint  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkLimitedHingeConstraint };
		static constexpr auto VTABLE{ VTABLE::bhkLimitedHingeConstraint };

	};
}
