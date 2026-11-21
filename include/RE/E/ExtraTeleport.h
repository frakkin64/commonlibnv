#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class DoorTeleportData;

	class ExtraTeleport :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraTeleport };
		static constexpr auto VTABLE{ VTABLE::ExtraTeleport };

		// override (BSExtraData)
		virtual ~ExtraTeleport() = default;                     // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		DoorTeleportData* pTeleportData;  // 0C
	};
	static_assert(sizeof(ExtraTeleport) == 0x10);
}
