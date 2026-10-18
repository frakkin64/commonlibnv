#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraRank :
		public BSExtraData  // 00
	{
	public:
		// override (BSExtraData)
		virtual ~ExtraRank() = default;                         // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		std::int32_t iRank;  // 0C
	};
	static_assert(sizeof(ExtraRank) == 0x10);
}
