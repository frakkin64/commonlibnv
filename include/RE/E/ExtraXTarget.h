#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraXTarget :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraXTarget };
		static constexpr auto VTABLE{ VTABLE::ExtraXTarget };

		// override (BSExtraData)
		virtual ~ExtraXTarget() = default;                      // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		TESObjectREFR* pTarget;  // 0C
	};
	static_assert(sizeof(ExtraXTarget) == 0x10);
}
