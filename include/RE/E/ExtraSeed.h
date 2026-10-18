#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraSeed :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraSeed };
		static constexpr auto VTABLE{ VTABLE::ExtraSeed };

		// override (BSExtraData)
		virtual ~ExtraSeed() = default;                         // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		std::uint8_t iSeed;       // 0C
		std::uint8_t pad0D[0x3];  // 0D
	};
	static_assert(sizeof(ExtraSeed) == 0x10);
}
