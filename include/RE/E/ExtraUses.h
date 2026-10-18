#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraUses :
		public BSExtraData  // 00
	{
	public:
		// override (BSExtraData)
		virtual ~ExtraUses() = default;                         // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		std::uint8_t cUses;       // 0C
		std::uint8_t pad0D[0x3];  // 0D
	};
	static_assert(sizeof(ExtraUses) == 0x10);
}
