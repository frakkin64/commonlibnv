#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpBallGun.h"

namespace RE
{
	class hkTransform;
	class hkpWorld;

	class alignas(16) hkpMountedBallGun :
		public hkpBallGun  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpMountedBallGun };
		static constexpr auto VTABLE{ VTABLE::hkpMountedBallGun };

		// override (hkpBallGun)
		virtual ~hkpMountedBallGun() = default;                                            // 00
		virtual void fireGun(hkpWorld* world, hkTransform const& viewTransform) override;  // 04

		// members
		// not placed: m_position
	};
}
