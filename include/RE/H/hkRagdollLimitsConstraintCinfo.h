#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkConstraintCinfo.h"

namespace RE
{
	class hkRagdollLimitsConstraintCinfo :
		public hkConstraintCinfo  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkRagdollLimitsConstraintCinfo };
		static constexpr auto VTABLE{ VTABLE::hkRagdollLimitsConstraintCinfo };

	};
}
