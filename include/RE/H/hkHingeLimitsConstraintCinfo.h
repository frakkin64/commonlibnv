#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkConstraintCinfo.h"

namespace RE
{
	class hkHingeLimitsConstraintCinfo :
		public hkConstraintCinfo  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkHingeLimitsConstraintCinfo };
		static constexpr auto VTABLE{ VTABLE::hkHingeLimitsConstraintCinfo };

	};
}
