#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class ExtraTimeLeft :
		public BSExtraData  // 00
	{
	public:
		// override (BSExtraData)
		virtual ~ExtraTimeLeft() = default;                     // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		float fTime;  // 0C
	};
	static_assert(sizeof(ExtraTimeLeft) == 0x10);
}
