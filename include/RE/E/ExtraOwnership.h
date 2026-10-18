#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESForm;

	class ExtraOwnership :
		public BSExtraData  // 00
	{
	public:
		// override (BSExtraData)
		virtual ~ExtraOwnership() = default;                    // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		TESForm* pOwner;  // 0C
	};
	static_assert(sizeof(ExtraOwnership) == 0x10);
}
