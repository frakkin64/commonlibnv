#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraEnableStateParent :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraEnableStateParent };
		static constexpr auto VTABLE{ VTABLE::ExtraEnableStateParent };

		// override (BSExtraData)
		virtual ~ExtraEnableStateParent() = default;            // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		TESObjectREFR* pParent;     // 0C
		std::uint8_t   cFlags;      // 10
		std::uint8_t   pad11[0x3];  // 11
	};
	static_assert(sizeof(ExtraEnableStateParent) == 0x14);
}
