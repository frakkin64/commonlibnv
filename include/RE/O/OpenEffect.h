#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class MagicTarget;

	class OpenEffect :
		public ActiveEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::OpenEffect };
		static constexpr auto VTABLE{ VTABLE::OpenEffect };

		// override (ActiveEffect)
		virtual ~OpenEffect() = default;                           // 00
		virtual ActiveEffect* Copy() override;                     // 01
		virtual bool CheckTarget(MagicTarget* apTarget) override;  // 13
		virtual void Start() override;                             // 14
	};
	static_assert(sizeof(OpenEffect) == 0x48);
}
