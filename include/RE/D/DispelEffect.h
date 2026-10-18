#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class MagicTarget;

	class DispelEffect :
		public ActiveEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::DispelEffect };
		static constexpr auto VTABLE{ VTABLE::DispelEffect };

		// override (ActiveEffect)
		virtual ~DispelEffect() = default;                            // 00
		virtual ActiveEffect* Copy() override;                        // 01
		virtual void CopyData(ActiveEffect* apDestination) override;  // 11
		virtual bool CheckTarget(MagicTarget* apTarget) override;     // 13
		virtual void Start() override;                                // 14
	};
	static_assert(sizeof(DispelEffect) == 0x48);
}
