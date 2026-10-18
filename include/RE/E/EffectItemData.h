#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/M/MagicSystem_Range.h"

namespace RE
{
	class EffectItemData
	{
	public:
		EffectItemData* ctor()
		{
			using func_t = EffectItemData*(__thiscall*)(EffectItemData*);
			static REL::Relocation<func_t> func{ Offsets::EffectItemData::ctor };
			return func(this);
		}

	public:
		// members
		std::int32_t      iMagnitude;   // 00
		std::int32_t      iArea;        // 04
		std::int32_t      iDuration;    // 08
		MagicSystem_Range iRange;       // 0C
		ActorValue_Index  iActorValue;  // 10
	};
	static_assert(sizeof(EffectItemData) == 0x14);
}
