#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraLinkedRef :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraLinkedRef };
		static constexpr auto VTABLE{ VTABLE::ExtraLinkedRef };

		// override (BSExtraData)
		virtual ~ExtraLinkedRef() = default;                    // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		TESObjectREFR* pLinkedRef;  // 0C
	};
	static_assert(sizeof(ExtraLinkedRef) == 0x10);
}
