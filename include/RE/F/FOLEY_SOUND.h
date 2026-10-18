#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/E/ENUM_FOLEY_SOUND.h"

namespace RE
{
	class TESSound;

	class FOLEY_SOUND
	{
	public:
		FOLEY_SOUND* ctor()
		{
			using func_t = FOLEY_SOUND*(__thiscall*)(FOLEY_SOUND*);
			static REL::Relocation<func_t> func{ Offsets::FOLEY_SOUND::ctor };
			return func(this);
		}

	public:
		// members
		TESSound*        pSound;      // 00
		std::uint8_t     iChance;     // 04
		std::uint8_t     pad05[0x3];  // 05
		ENUM_FOLEY_SOUND eType;       // 08
	};
	static_assert(sizeof(FOLEY_SOUND) == 0xC);
}
