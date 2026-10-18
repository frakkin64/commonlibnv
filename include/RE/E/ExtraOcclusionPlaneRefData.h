#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class OcclusionPlaneLinkedRefData;

	class ExtraOcclusionPlaneRefData :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraOcclusionPlaneRefData };
		static constexpr auto VTABLE{ VTABLE::ExtraOcclusionPlaneRefData };

		// override (BSExtraData)
		virtual ~ExtraOcclusionPlaneRefData() = default;        // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		OcclusionPlaneLinkedRefData* pData;  // 0C
	};
	static_assert(sizeof(ExtraOcclusionPlaneRefData) == 0x10);
}
