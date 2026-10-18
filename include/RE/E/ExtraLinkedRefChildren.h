#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleList.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraLinkedRefChildren :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraLinkedRefChildren };
		static constexpr auto VTABLE{ VTABLE::ExtraLinkedRefChildren };

		// override (BSExtraData)
		virtual ~ExtraLinkedRefChildren() = default;  // 00

		// members
		BSSimpleList<TESObjectREFR*> ChildList;  // 0C
	};
	static_assert(sizeof(ExtraLinkedRefChildren) == 0x14);
}
