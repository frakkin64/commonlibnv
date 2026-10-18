#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraAshPileRef :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraAshPileRef };
		static constexpr auto VTABLE{ VTABLE::ExtraAshPileRef };

		// override (BSExtraData)
		virtual ~ExtraAshPileRef() = default;  // 00

		ExtraAshPileRef* ctor()
		{
			using func_t = ExtraAshPileRef*(__thiscall*)(ExtraAshPileRef*);
			static REL::Relocation<func_t> func{ Offsets::ExtraAshPileRef::ctor };
			return func(this);
		}

	public:
		// members
		TESObjectREFR* pAshPileRef;  // 0C
	};
	static_assert(sizeof(ExtraAshPileRef) == 0x10);
}
