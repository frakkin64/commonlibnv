#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleList.h"

namespace RE
{
	class RunOncePackage;

	class ExtraRunOncePacks :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraRunOncePacks };
		static constexpr auto VTABLE{ VTABLE::ExtraRunOncePacks };

		// override (BSExtraData)
		virtual ~ExtraRunOncePacks() = default;  // 00

		// members
		BSSimpleList<RunOncePackage*>* pPackageList;  // 0C
	};
	static_assert(sizeof(ExtraRunOncePacks) == 0x10);
}
