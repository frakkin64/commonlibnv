#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleList.h"

namespace RE
{
	class REF_ACTIVATE_DATA;

	class ExtraActivateRefChildren :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraActivateRefChildren };
		static constexpr auto VTABLE{ VTABLE::ExtraActivateRefChildren };

		// override (BSExtraData)
		virtual ~ExtraActivateRefChildren() = default;  // 00

		// members
		BSSimpleList<REF_ACTIVATE_DATA*> ChildList;               // 0C
		float                            fActivateChildrenTimer;  // 14
	};
	static_assert(sizeof(ExtraActivateRefChildren) == 0x18);
}
