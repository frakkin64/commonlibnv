#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class ActiveEffect;
	class Actor;
	class MagicTarget;

	class NightEyeEffect :
		public ValueModifierEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NightEyeEffect };
		static constexpr auto VTABLE{ VTABLE::NightEyeEffect };

		// override (ValueModifierEffect)
		virtual ~NightEyeEffect() = default;                          // 00
		virtual ActiveEffect* Copy() override;                        // 01
		virtual void Update(float afSecondsElapsed) override;         // 03
		virtual void InitLoadGame(Actor* apActor) override;           // 0A
		virtual void Revert(Actor* apActor) override;                 // 0D
		virtual void CopyData(ActiveEffect* apDestination) override;  // 11
		virtual bool CheckTarget(MagicTarget* apTarget) override;     // 13
		virtual void Start() override;                                // 14
		virtual void Finish() override;                               // 16

		static void ApplyVisualEffect()
		{
			using func_t = decltype(&NightEyeEffect::ApplyVisualEffect);
			static REL::Relocation<func_t> func{ Offsets::NightEyeEffect::ApplyVisualEffect };
			func();
		}
	};
	static_assert(sizeof(NightEyeEffect) == 0x4C);
}
