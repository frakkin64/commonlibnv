#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class Actor;
	class MagicTarget;

	class SunDamageEffect :
		public ActiveEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::SunDamageEffect };
		static constexpr auto VTABLE{ VTABLE::SunDamageEffect };

		// override (ActiveEffect)
		virtual ~SunDamageEffect() = default;                         // 00
		virtual ActiveEffect* Copy() override;                        // 01
		virtual void Update(float afSecondsElapsed) override;         // 03
		virtual std::uint16_t GetSaveSize(Actor* apActor) override;   // 04
		virtual void SaveGame(Actor* apActor) override;               // 06
		virtual void LoadGame(Actor* apActor) override;               // 08
		virtual bool IsCausingDamage() override;                      // 0F
		virtual void CopyData(ActiveEffect* apDestination) override;  // 11
		virtual bool CheckTarget(MagicTarget* apTarget) override;     // 13
		virtual void Finish() override;                               // 16

		void UpdateHitEffect(bool abDamaging)
		{
			using func_t = decltype(&SunDamageEffect::UpdateHitEffect);
			static REL::Relocation<func_t> func{ Offsets::SunDamageEffect::UpdateHitEffect };
			func(this, abDamaging);
		}

		float GetDamageAmount()
		{
			using func_t = decltype(&SunDamageEffect::GetDamageAmount);
			static REL::Relocation<func_t> func{ Offsets::SunDamageEffect::GetDamageAmount };
			return func(this);
		}

	public:
		// members
		float         fGlowEffect;                 // 48
		bool          bHitEffectApplied;           // 4C
		bool          bDoNotTakeDamageNextUpdate;  // 4D
		std::uint16_t pad4E;                       // 4E
	};
	static_assert(sizeof(SunDamageEffect) == 0x50);
}
