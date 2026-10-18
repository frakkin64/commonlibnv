#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSNumericIDIndex.h"
#include "RE/B/BGSSaveLoadFormInfo.h"

namespace RE
{
	class BGSSaveLoadFormHeader
	{
	public:
		BGSSaveLoadFormHeader* ctor()
		{
			using func_t = BGSSaveLoadFormHeader*(__thiscall*)(BGSSaveLoadFormHeader*);
			static REL::Relocation<func_t> func{ Offsets::BGSSaveLoadFormHeader::ctor };
			return func(this);
		}

	public:
		// members
		// not placed: iChangeFlags(misaligned)
		BGSNumericIDIndex   FormIDIndex;  // 00
		std::uint8_t        pad03[0x4];   // 03
		BGSSaveLoadFormInfo FormInfo;     // 07
		std::uint8_t        cVersion;     // 08
		std::uint8_t        pad09[0x3];   // 09
	};
}
