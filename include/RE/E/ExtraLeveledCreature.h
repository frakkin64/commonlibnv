#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESActorBase;

	class ExtraLeveledCreature :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraLeveledCreature };
		static constexpr auto VTABLE{ VTABLE::ExtraLeveledCreature };

		// override (BSExtraData)
		virtual ~ExtraLeveledCreature() = default;  // 00

		ExtraLeveledCreature* ctor()
		{
			using func_t = ExtraLeveledCreature*(__thiscall*)(ExtraLeveledCreature*);
			static REL::Relocation<func_t> func{ Offsets::ExtraLeveledCreature::ctor };
			return func(this);
		}

	public:
		// members
		TESActorBase* pOriginalBase;  // 0C
		TESActorBase* pTemplate;      // 10
	};
	static_assert(sizeof(ExtraLeveledCreature) == 0x14);
}
