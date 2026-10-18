#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class SCENE_INFO_DATA_STRUCT
	{
	public:
		SCENE_INFO_DATA_STRUCT* ctor()
		{
			using func_t = SCENE_INFO_DATA_STRUCT*(__thiscall*)(SCENE_INFO_DATA_STRUCT*);
			static REL::Relocation<func_t> func{ Offsets::SCENE_INFO_DATA_STRUCT::ctor };
			return func(this);
		}

	public:
		// members
		std::uint32_t pData[16];  // 00
	};
	static_assert(sizeof(SCENE_INFO_DATA_STRUCT) == 0x40);
}
