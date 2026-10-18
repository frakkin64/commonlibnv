#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/M/MagicProjectile.h"

namespace RE
{
	class MagicSprayProjectile :
		public MagicProjectile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MagicSprayProjectile };
		static constexpr auto VTABLE{ VTABLE::MagicSprayProjectile };

		// override (MagicProjectile)
		virtual ~MagicSprayProjectile() = default;         // 04
		virtual void CleanUpPointersOnDisable() override;  // BF
	};
}
