#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraHeadingTarget :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraHeadingTarget };
		static constexpr auto VTABLE{ VTABLE::ExtraHeadingTarget };

		// override (BSExtraData)
		virtual ~ExtraHeadingTarget() = default;  // 00

		// members
		TESObjectREFR* pheadingtarget;  // 0C
	};
	static_assert(sizeof(ExtraHeadingTarget) == 0x10);
}
