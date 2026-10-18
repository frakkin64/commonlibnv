#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class ActiveEffect;
	class MagicCaster;
	class MagicTarget;

	class CalmEffect :
		public ValueModifierEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CalmEffect };
		static constexpr auto VTABLE{ VTABLE::CalmEffect };

		// override (ValueModifierEffect)
		virtual ~CalmEffect() = default;                                  // 00
		virtual ActiveEffect* Copy() override;                            // 01
		virtual void Update(float afSecondsElapsed) override;             // 03
		virtual bool CheckDeletedCaster(MagicCaster* apCaster) override;  // 0E
		virtual bool CheckTarget(MagicTarget* apTarget) override;         // 13
		virtual void Start() override;                                    // 14
		virtual void Finish() override;                                   // 16
	};
	static_assert(sizeof(CalmEffect) == 0x4C);
}
