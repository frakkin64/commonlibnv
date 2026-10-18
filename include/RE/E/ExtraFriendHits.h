#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSSimpleArray.h"
#include "RE/C/CombatTimeStamp.h"

namespace RE
{
	class ExtraFriendHits :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraFriendHits };
		static constexpr auto VTABLE{ VTABLE::ExtraFriendHits };

		// override (BSExtraData)
		virtual ~ExtraFriendHits() = default;  // 00

		ExtraFriendHits* ctor()
		{
			using func_t = ExtraFriendHits*(__thiscall*)(ExtraFriendHits*);
			static REL::Relocation<func_t> func{ Offsets::ExtraFriendHits::ctor };
			return func(this);
		}

	public:
		// members
		BSSimpleArray<CombatTimeStamp, 1024> Hits;  // 0C
	};
	static_assert(sizeof(ExtraFriendHits) == 0x1C);
}
