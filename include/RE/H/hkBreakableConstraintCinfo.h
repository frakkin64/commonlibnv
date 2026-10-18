#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkConstraintCinfo.h"

namespace RE
{
	class hkBreakableConstraintCinfo :
		public hkConstraintCinfo  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkBreakableConstraintCinfo };
		static constexpr auto VTABLE{ VTABLE::hkBreakableConstraintCinfo };

	};
}
