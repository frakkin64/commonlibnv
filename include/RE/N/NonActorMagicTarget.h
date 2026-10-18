#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleList.h"
#include "RE/M/MagicTarget.h"

namespace RE
{
	class ActiveEffect;
	class TESObjectREFR;

	class NonActorMagicTarget :
		public BSExtraData,  // 00
		public MagicTarget  // 0C
	{
	public:
		static constexpr auto RTTI{ RTTI::NonActorMagicTarget };
		static constexpr auto VTABLE{ VTABLE::NonActorMagicTarget };

		// override (BSExtraData)
		virtual ~NonActorMagicTarget() = default;  // 00

		NonActorMagicTarget* ctor()
		{
			using func_t = NonActorMagicTarget*(__thiscall*)(NonActorMagicTarget*);
			static REL::Relocation<func_t> func{ Offsets::NonActorMagicTarget::ctor };
			return func(this);
		}

		NonActorMagicTarget* ctor(TESObjectREFR* apTargetObject)
		{
			using func_t = NonActorMagicTarget*(__thiscall*)(NonActorMagicTarget*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::NonActorMagicTarget::ctor_1 };
			return func(this, apTargetObject);
		}

	public:
		// members
		TESObjectREFR*              pTargetObject;      // 1C
		BSSimpleList<ActiveEffect*> lActiveEffectList;  // 20
	};
	static_assert(sizeof(NonActorMagicTarget) == 0x28);
}
