#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActiveEffect.h"

namespace RE
{
	class Actor;
	class EffectItem;
	class MagicCaster;
	class MagicItem;
	class MagicTarget;

	class CommandEffect :
		public ActiveEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::CommandEffect };
		static constexpr auto VTABLE{ VTABLE::CommandEffect };

		// override (ActiveEffect)
		virtual ~CommandEffect() = default;                               // 00
		virtual ActiveEffect* Copy() override;                            // 01
		virtual void Update(float afSecondsElapsed) override;             // 03
		virtual bool CheckDeletedCaster(MagicCaster* apCaster) override;  // 0E
		virtual bool CheckTarget(MagicTarget* apTarget) override;         // 13
		virtual void Start() override;                                    // 14
		virtual void Finish() override;                                   // 16

		CommandEffect* ctor(MagicCaster* apCaster, MagicItem* apSpell, EffectItem* apEffect)
		{
			using func_t = CommandEffect*(__thiscall*)(CommandEffect*, MagicCaster*, MagicItem*, EffectItem*);
			static REL::Relocation<func_t> func{ Offsets::CommandEffect::ctor };
			return func(this, apCaster, apSpell, apEffect);
		}

		static void InitCommandedActor(Actor* apTarget, Actor* apCaster)
		{
			using func_t = decltype(&CommandEffect::InitCommandedActor);
			static REL::Relocation<func_t> func{ Offsets::CommandEffect::InitCommandedActor };
			func(apTarget, apCaster);
		}

		static void UpdateCommandedActor(Actor* apTarget, Actor* apCaster)
		{
			using func_t = decltype(&CommandEffect::UpdateCommandedActor);
			static REL::Relocation<func_t> func{ Offsets::CommandEffect::UpdateCommandedActor };
			func(apTarget, apCaster);
		}
	};
}
