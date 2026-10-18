#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class MagicTarget;

	class DisintegrateWeaponEffect :
		public ActiveEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::DisintegrateWeaponEffect };
		static constexpr auto VTABLE{ VTABLE::DisintegrateWeaponEffect };

		// override (ActiveEffect)
		virtual ~DisintegrateWeaponEffect() = default;             // 00
		virtual ActiveEffect* Copy() override;                     // 01
		virtual bool CheckTarget(MagicTarget* apTarget) override;  // 13
		virtual void Start() override;                             // 14
	};
	static_assert(sizeof(DisintegrateWeaponEffect) == 0x48);
}
