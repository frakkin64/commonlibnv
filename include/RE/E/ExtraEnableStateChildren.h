#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleList.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraEnableStateChildren :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraEnableStateChildren };
		static constexpr auto VTABLE{ VTABLE::ExtraEnableStateChildren };

		// override (BSExtraData)
		virtual ~ExtraEnableStateChildren() = default;  // 00

		// members
		BSSimpleList<TESObjectREFR*> ChildList;  // 0C
	};
	static_assert(sizeof(ExtraEnableStateChildren) == 0x14);
}
