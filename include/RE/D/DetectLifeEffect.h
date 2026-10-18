#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/V/ValueModifierEffect.h"

namespace RE
{
	class ActiveEffect;
	class Actor;

	class DetectLifeEffect :
		public ValueModifierEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::DetectLifeEffect };
		static constexpr auto VTABLE{ VTABLE::DetectLifeEffect };

		// override (ValueModifierEffect)
		virtual ~DetectLifeEffect() = default;                 // 00
		virtual ActiveEffect* Copy() override;                 // 01
		virtual void Update(float afSecondsElapsed) override;  // 03
		virtual void Start() override;                         // 14
		virtual void Finish() override;                        // 16

		static void CheckPlayerRunningDetectLife()
		{
			using func_t = decltype(&DetectLifeEffect::CheckPlayerRunningDetectLife);
			static REL::Relocation<func_t> func{ Offsets::DetectLifeEffect::CheckPlayerRunningDetectLife };
			func();
		}

		static bool CheckActorDetected(Actor* apTarget, bool abCurrentlyDetected)
		{
			using func_t = decltype(&DetectLifeEffect::CheckActorDetected);
			static REL::Relocation<func_t> func{ Offsets::DetectLifeEffect::CheckActorDetected };
			return func(apTarget, abCurrentlyDetected);
		}
	};
	static_assert(sizeof(DetectLifeEffect) == 0x4C);
}
