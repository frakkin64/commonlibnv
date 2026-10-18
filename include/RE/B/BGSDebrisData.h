#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESTextureList.h"

namespace RE
{
	class BGSDebrisData
	{
	public:
		void SetFileName(char const* apFileName)
		{
			using func_t = decltype(&BGSDebrisData::SetFileName);
			static REL::Relocation<func_t> func{ Offsets::BGSDebrisData::SetFileName };
			func(this, apFileName);
		}

	public:
		// members
		char           cPercentage;  // 00
		char           cFlags;       // 01
		std::uint16_t  pad02;        // 02
		char*          pFileName;    // 04
		TESTextureList TextureList;  // 08
	};
	static_assert(sizeof(BGSDebrisData) == 0x10);
}
