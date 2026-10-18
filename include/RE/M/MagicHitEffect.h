#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSTempEffect.h"

namespace RE
{
	class ActiveEffect;
	class TESObjectREFR;

	class MagicHitEffect :
		public BSTempEffect  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::MagicHitEffect };
		static constexpr auto VTABLE{ VTABLE::MagicHitEffect };

		void SetFinished(bool abFinished)
		{
			using func_t = decltype(&MagicHitEffect::SetFinished);
			static REL::Relocation<func_t> func{ Offsets::MagicHitEffect::SetFinished };
			func(this, abFinished);
		}

		MagicHitEffect* ctor()
		{
			using func_t = MagicHitEffect*(__thiscall*)(MagicHitEffect*);
			static REL::Relocation<func_t> func{ Offsets::MagicHitEffect::ctor };
			return func(this);
		}

		MagicHitEffect* ctor(TESObjectREFR* apTarget, ActiveEffect* apEffect)
		{
			using func_t = MagicHitEffect*(__thiscall*)(MagicHitEffect*, TESObjectREFR*, ActiveEffect*);
			static REL::Relocation<func_t> func{ Offsets::MagicHitEffect::ctor_1 };
			return func(this, apTarget, apEffect);
		}

		static BSSimpleList<MagicHitEffect*>* InstantiateHitEffects(ActiveEffect* apEffect)
		{
			using func_t = decltype(&MagicHitEffect::InstantiateHitEffects);
			static REL::Relocation<func_t> func{ Offsets::MagicHitEffect::InstantiateHitEffects };
			return func(apEffect);
		}

	public:
		// members
		ActiveEffect*  pEffect;     // 18
		TESObjectREFR* pTarget;     // 1C
		float          fAge;        // 20
		bool           bFinished;   // 24
		std::uint8_t   pad25[0x3];  // 25
	};
	static_assert(sizeof(MagicHitEffect) == 0x28);
}
