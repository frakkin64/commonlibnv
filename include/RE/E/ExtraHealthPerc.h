#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraHealthPerc :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraHealthPerc };
		static constexpr auto VTABLE{ VTABLE::ExtraHealthPerc };

		// override (BSExtraData)
		virtual ~ExtraHealthPerc() = default;                   // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		float fHealthPerc;  // 0C
	};
	static_assert(sizeof(ExtraHealthPerc) == 0x10);
}
