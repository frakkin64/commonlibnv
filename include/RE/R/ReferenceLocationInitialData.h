#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSNumericIDIndex.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class ReferenceLocationInitialData
	{
	public:
		ReferenceLocationInitialData* ctor()
		{
			using func_t = ReferenceLocationInitialData*(__thiscall*)(ReferenceLocationInitialData*);
			static REL::Relocation<func_t> func{ Offsets::ReferenceLocationInitialData::ctor };
			return func(this);
		}

	public:
		// members
		BGSNumericIDIndex LocationIDIndex;  // 00
		std::uint8_t      pad03;            // 03
		NiPoint3          Location;         // 04?
		NiPoint3          Angle;            // 10?
	};
}
