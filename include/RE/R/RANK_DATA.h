#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/T/TESTexture.h"

namespace RE
{
	class RANK_DATA
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(RANK_DATA*);
			static REL::Relocation<func_t> func{ Offsets::RANK_DATA::dtor };
			func(this);
		}

		RANK_DATA* ctor()
		{
			using func_t = RANK_DATA*(__thiscall*)(RANK_DATA*);
			static REL::Relocation<func_t> func{ Offsets::RANK_DATA::ctor };
			return func(this);
		}

	public:
		// members
		BSStringT<char> cMaleRankTitle;    // 00
		BSStringT<char> cFemaleRankTitle;  // 08
		TESTexture      TextureInsignia;   // 10
	};
	static_assert(sizeof(RANK_DATA) == 0x1C);
}
