#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraOriginalReference :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraOriginalReference };
		static constexpr auto VTABLE{ VTABLE::ExtraOriginalReference };

		// override (BSExtraData)
		virtual ~ExtraOriginalReference() = default;            // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		TESObjectREFR* pReference;  // 0C
	};
	static_assert(sizeof(ExtraOriginalReference) == 0x10);
}
