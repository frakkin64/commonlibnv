#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class MultiBoundMarkerData;

	class ExtraMultiBoundData :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraMultiBoundData };
		static constexpr auto VTABLE{ VTABLE::ExtraMultiBoundData };

		// override (BSExtraData)
		virtual ~ExtraMultiBoundData() = default;               // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		MultiBoundMarkerData* pBound;  // 0C
	};
	static_assert(sizeof(ExtraMultiBoundData) == 0x10);
}
