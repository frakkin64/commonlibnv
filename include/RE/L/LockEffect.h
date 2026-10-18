#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class MagicTarget;

	class LockEffect :
		public ActiveEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::LockEffect };
		static constexpr auto VTABLE{ VTABLE::LockEffect };

		// override (ActiveEffect)
		virtual ~LockEffect() = default;                           // 00
		virtual ActiveEffect* Copy() override;                     // 01
		virtual bool CheckTarget(MagicTarget* apTarget) override;  // 13
		virtual void Start() override;                             // 14
	};
	static_assert(sizeof(LockEffect) == 0x48);
}
