#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class PortalLinkedRefData;

	class ExtraPortalRefData :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraPortalRefData };
		static constexpr auto VTABLE{ VTABLE::ExtraPortalRefData };

		// override (BSExtraData)
		virtual ~ExtraPortalRefData() = default;                // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		PortalLinkedRefData* pData;  // 0C
	};
	static_assert(sizeof(ExtraPortalRefData) == 0x10);
}
