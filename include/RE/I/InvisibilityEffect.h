#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class ActiveEffect;
	class Actor;
	class MagicTarget;

	class InvisibilityEffect :
		public ValueModifierEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::InvisibilityEffect };
		static constexpr auto VTABLE{ VTABLE::InvisibilityEffect };

		// override (ValueModifierEffect)
		virtual ~InvisibilityEffect() = default;                      // 00
		virtual ActiveEffect* Copy() override;                        // 01
		virtual void Update(float afSecondsElapsed) override;         // 03
		virtual void FinishInitLoadGame(Actor* apActor) override;     // 0B
		virtual void Revert(Actor* apActor) override;                 // 0D
		virtual void CopyData(ActiveEffect* apDestination) override;  // 11
		virtual bool CheckTarget(MagicTarget* apTarget) override;     // 13
		virtual void Start() override;                                // 14
		virtual void Finish() override;                               // 16
	};
	static_assert(sizeof(InvisibilityEffect) == 0x4C);
}
