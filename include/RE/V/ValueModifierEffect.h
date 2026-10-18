#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActiveEffect.h"
#include "RE/A/ActorValue_Index.h"

namespace RE
{
	class Actor;
	class EffectItem;
	class MagicCaster;
	class MagicItem;
	class MagicTarget;

	class ValueModifierEffect :
		public ActiveEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ValueModifierEffect };
		static constexpr auto VTABLE{ VTABLE::ValueModifierEffect };

		// override (ActiveEffect)
		virtual ~ValueModifierEffect() = default;                     // 00
		virtual ActiveEffect* Copy() override;                        // 01
		virtual void Finalize() override;                             // 02
		virtual void Update(float afSecondsElapsed) override;         // 03
		virtual std::uint16_t GetSaveSize(Actor* apActor) override;   // 04
		virtual void SaveGame(Actor* apActor) override;               // 06
		virtual void LoadGame(Actor* apActor) override;               // 08
		virtual void FinishInitLoadGame(Actor* apActor) override;     // 0B
		virtual bool IsCausingDamage() override;                      // 0F
		virtual void CopyData(ActiveEffect* apDestination) override;  // 11
		virtual bool CheckTarget(MagicTarget* apTarget) override;     // 13
		virtual void Start() override;                                // 14
		virtual void Continue() override;                             // 15
		virtual void Finish() override;                               // 16

		// add
		virtual void SetActorValue(ActorValue_Index aeWhichActorValue);                        // 17
		virtual ActorValue_Index GetActorValue();                                              // 18
		virtual void ModifyActorValue(Actor* apActor, float a_arg2, ActorValue_Index a_arg3);  // 19

		ValueModifierEffect* ctor(MagicCaster* apCaster, MagicItem* apSpell, EffectItem* apEffect)
		{
			using func_t = ValueModifierEffect*(__thiscall*)(ValueModifierEffect*, MagicCaster*, MagicItem*, EffectItem*);
			static REL::Relocation<func_t> func{ Offsets::ValueModifierEffect::ctor };
			return func(this, apCaster, apSpell, apEffect);
		}

		void ShowAttributeReductionMessage()
		{
			using func_t = decltype(&ValueModifierEffect::ShowAttributeReductionMessage);
			static REL::Relocation<func_t> func{ Offsets::ValueModifierEffect::ShowAttributeReductionMessage };
			func(this);
		}

	protected:
		float CheckAdjustNoNegativeMagnitude(float afMagnitude)
		{
			using func_t = decltype(&ValueModifierEffect::CheckAdjustNoNegativeMagnitude);
			static REL::Relocation<func_t> func{ Offsets::ValueModifierEffect::CheckAdjustNoNegativeMagnitude };
			return func(this, afMagnitude);
		}

	public:
		// members
		ActorValue_Index eWhichActorValue;  // 48
	};
	static_assert(sizeof(ValueModifierEffect) == 0x4C);
}
