#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class ActiveEffect;
	class Actor;

	class ParalysisEffect :
		public ValueModifierEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ParalysisEffect };
		static constexpr auto VTABLE{ VTABLE::ParalysisEffect };

		// override (ValueModifierEffect)
		virtual ~ParalysisEffect() = default;                         // 00
		virtual ActiveEffect* Copy() override;                        // 01
		virtual void Update(float afSecondsElapsed) override;         // 03
		virtual void FinishInitLoadGame(Actor* apActor) override;     // 0B
		virtual void Revert(Actor* apActor) override;                 // 0D
		virtual void CopyData(ActiveEffect* apDestination) override;  // 11
		virtual void Start() override;                                // 14
		virtual void Finish() override;                               // 16
	};
	static_assert(sizeof(ParalysisEffect) == 0x4C);
}
