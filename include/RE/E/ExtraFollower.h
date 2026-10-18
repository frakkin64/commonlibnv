#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleList.h"

namespace RE
{
	class Actor;

	class ExtraFollower :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraFollower };
		static constexpr auto VTABLE{ VTABLE::ExtraFollower };

		// override (BSExtraData)
		virtual ~ExtraFollower() = default;  // 00

		// members
		BSSimpleList<Actor*>* pActorlist;  // 0C
	};
	static_assert(sizeof(ExtraFollower) == 0x10);
}
