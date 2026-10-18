#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkConstraintCinfo.h"

namespace RE
{
	class hkRagdollConstraintCinfo :
		public hkConstraintCinfo  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkRagdollConstraintCinfo };
		static constexpr auto VTABLE{ VTABLE::hkRagdollConstraintCinfo };

	};
}
