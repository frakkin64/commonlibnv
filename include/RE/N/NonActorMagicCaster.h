#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/M/MagicCaster.h"

namespace RE
{
	class MagicItem;
	class MagicTarget;
	class TESObjectREFR;

	class NonActorMagicCaster :
		public BSExtraData,  // 00
		public MagicCaster  // 0C
	{
	public:
		static constexpr auto RTTI{ RTTI::NonActorMagicCaster };
		static constexpr auto VTABLE{ VTABLE::NonActorMagicCaster };

		// override (BSExtraData)
		virtual ~NonActorMagicCaster() = default;  // 00

		NonActorMagicCaster* ctor()
		{
			using func_t = NonActorMagicCaster*(__thiscall*)(NonActorMagicCaster*);
			static REL::Relocation<func_t> func{ Offsets::NonActorMagicCaster::ctor };
			return func(this);
		}

		NonActorMagicCaster* ctor(TESObjectREFR* apCasterObject)
		{
			using func_t = NonActorMagicCaster*(__thiscall*)(NonActorMagicCaster*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::NonActorMagicCaster::ctor_1 };
			return func(this, apCasterObject);
		}

	private:
		void CleanUpOtherMobileObjects()
		{
			using func_t = decltype(&NonActorMagicCaster::CleanUpOtherMobileObjects);
			static REL::Relocation<func_t> func{ Offsets::NonActorMagicCaster::CleanUpOtherMobileObjects };
			func(this);
		}

	public:
		// members
		MagicItem*     pCurrentSpell;   // 18
		MagicTarget*   pDesiredTarget;  // 1C
		TESObjectREFR* pCasterObject;   // 20
	};
	static_assert(sizeof(NonActorMagicCaster) == 0x24);
}
