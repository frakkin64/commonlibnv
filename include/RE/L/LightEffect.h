#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActiveEffect.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class Actor;
	class BGSLoadFormBuffer;
	class EffectItem;
	class MagicCaster;
	class MagicItem;
	class MagicTarget;
	class NiPointLight;

	class LightEffect :
		public ActiveEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::LightEffect };
		static constexpr auto VTABLE{ VTABLE::LightEffect };

		// override (ActiveEffect)
		virtual ~LightEffect() = default;                                           // 00
		virtual ActiveEffect* Copy() override;                                      // 01
		virtual void Update(float afSecondsElapsed) override;                       // 03
		virtual void FinishInitLoadGame(Actor* apActor) override;                   // 0B
		virtual void Revert(BGSLoadFormBuffer* apLoadGameBuffer) override;          // 0C
		virtual void Revert(Actor* apActor) override;                               // 0D
		virtual void FinishLoadGame(BGSLoadFormBuffer* apLoadGameBuffer) override;  // 10
		virtual void CopyData(ActiveEffect* apDestination) override;                // 11
		virtual bool CheckTarget(MagicTarget* apTarget) override;                   // 13
		virtual void Start() override;                                              // 14
		virtual void Finish() override;                                             // 16

		LightEffect* ctor(MagicCaster* apCaster, MagicItem* apSpell, EffectItem* apEffect)
		{
			using func_t = LightEffect*(__thiscall*)(LightEffect*, MagicCaster*, MagicItem*, EffectItem*);
			static REL::Relocation<func_t> func{ Offsets::LightEffect::ctor };
			return func(this, apCaster, apSpell, apEffect);
		}

	protected:
		void AttachLight()
		{
			using func_t = decltype(&LightEffect::AttachLight);
			static REL::Relocation<func_t> func{ Offsets::LightEffect::AttachLight };
			func(this);
		}

		void DetachLight()
		{
			using func_t = decltype(&LightEffect::DetachLight);
			static REL::Relocation<func_t> func{ Offsets::LightEffect::DetachLight };
			func(this);
		}

		static void AttachBestLightEffect(MagicTarget* apTarget)
		{
			using func_t = decltype(&LightEffect::AttachBestLightEffect);
			static REL::Relocation<func_t> func{ Offsets::LightEffect::AttachBestLightEffect };
			func(apTarget);
		}

	public:
		// members
		NiPointer<NiPointLight> spPointLight;  // 48
	};
	static_assert(sizeof(LightEffect) == 0x4C);
}
