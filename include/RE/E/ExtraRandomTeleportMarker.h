#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraRandomTeleportMarker :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraRandomTeleportMarker };
		static constexpr auto VTABLE{ VTABLE::ExtraRandomTeleportMarker };

		// override (BSExtraData)
		virtual ~ExtraRandomTeleportMarker() = default;         // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		TESObjectREFR* pMarker;  // 0C
	};
	static_assert(sizeof(ExtraRandomTeleportMarker) == 0x10);
}
