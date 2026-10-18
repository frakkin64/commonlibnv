#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpKeyframedRigidMotion.h"

namespace RE
{
	class alignas(16) hkpMaxSizeMotion :
		public hkpKeyframedRigidMotion  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMaxSizeMotion };
		static constexpr auto VTABLE{ VTABLE::hkpMaxSizeMotion };

		// override (hkpKeyframedRigidMotion)
		virtual ~hkpMaxSizeMotion() = default;  // 00
	};
}
