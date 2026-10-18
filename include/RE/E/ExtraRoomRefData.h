#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class RoomLinkedRefData;

	class ExtraRoomRefData :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraRoomRefData };
		static constexpr auto VTABLE{ VTABLE::ExtraRoomRefData };

		// override (BSExtraData)
		virtual ~ExtraRoomRefData() = default;                  // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		RoomLinkedRefData* pData;  // 0C
	};
	static_assert(sizeof(ExtraRoomRefData) == 0x10);
}
