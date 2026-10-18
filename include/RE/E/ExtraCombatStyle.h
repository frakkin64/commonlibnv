#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESCombatStyle;

	class ExtraCombatStyle :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraCombatStyle };
		static constexpr auto VTABLE{ VTABLE::ExtraCombatStyle };

		// override (BSExtraData)
		virtual ~ExtraCombatStyle() = default;                  // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		TESCombatStyle* pCombatStyle;  // 0C
	};
	static_assert(sizeof(ExtraCombatStyle) == 0x10);
}
