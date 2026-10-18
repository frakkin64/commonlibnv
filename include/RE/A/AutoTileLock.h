#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class AutoTileLock
	{
	public:
		AutoTileLock* ctor()
		{
			using func_t = AutoTileLock*(__thiscall*)(AutoTileLock*);
			static REL::Relocation<func_t> func{ Offsets::AutoTileLock::ctor };
			return func(this);
		}
	};
}
