#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESGlobal;

	class ExtraGlobal :
		public BSExtraData  // 00
	{
	public:
		// override (BSExtraData)
		virtual ~ExtraGlobal() = default;                       // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		TESGlobal* pGlobal;  // 0C
	};
	static_assert(sizeof(ExtraGlobal) == 0x10);
}
