#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraMultiBoundRef :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraMultiBoundRef };
		static constexpr auto VTABLE{ VTABLE::ExtraMultiBoundRef };

		// override (BSExtraData)
		virtual ~ExtraMultiBoundRef() = default;                // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		// members
		TESObjectREFR* pBoundRef;  // 0C
	};
	static_assert(sizeof(ExtraMultiBoundRef) == 0x10);
}
