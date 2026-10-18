#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkConstraintCinfo.h"

namespace RE
{
	class hkLimitedHingeConstraintCinfo :
		public hkConstraintCinfo  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkLimitedHingeConstraintCinfo };
		static constexpr auto VTABLE{ VTABLE::hkLimitedHingeConstraintCinfo };

	};
}
