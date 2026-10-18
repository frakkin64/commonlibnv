#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/G/GameSettingCollection.h"
#include "RE/S/SettingT.h"

namespace RE
{
	class MiscStat
	{
	public:
	private:
		MiscStat* ctor(char const* apStatName, std::uint32_t aiIndex, std::int32_t aiVal)
		{
			using func_t = MiscStat*(__thiscall*)(MiscStat*, char const*, std::uint32_t, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::MiscStat::ctor };
			return func(this, apStatName, aiIndex, aiVal);
		}

	public:
		// members
		SettingT<GameSettingCollection>* pDisplayName;  // 00
		std::int32_t                     iVal;          // 04
	};
}
