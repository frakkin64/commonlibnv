#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpEntityActivationListener.h"

namespace RE
{
	class hkpEntity;

	class bhkObstacleDeactivationListener :
		public hkpEntityActivationListener  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkObstacleDeactivationListener };
		static constexpr auto VTABLE{ VTABLE::bhkObstacleDeactivationListener };

		// override (hkpEntityActivationListener)
		virtual ~bhkObstacleDeactivationListener() = default;                // 00
		virtual void entityDeactivatedCallback(hkpEntity* a_arg1) override;  // 01
		virtual void entityActivatedCallback(hkpEntity* a_arg1) override;    // 02
	};
	static_assert(sizeof(bhkObstacleDeactivationListener) == 0x4);
}
