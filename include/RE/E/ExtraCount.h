#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraCount :
		public BSExtraData  // 00
	{
	public:
		// override (BSExtraData)
		virtual ~ExtraCount() = default;                        // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		std::int16_t  iCount;  // 0C
		std::uint16_t pad0E;   // 0E
	};
	static_assert(sizeof(ExtraCount) == 0x10);
}
