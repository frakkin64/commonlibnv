#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ActorValue_Index.h"
#include "RE/S/SPECIALIZATION.h"

namespace RE
{
	class SKILL_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&SKILL_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::SKILL_DATA::Endian };
			func(this);
		}

	public:
		// members
		ActorValue_Index eIndex;           // 00
		ActorValue_Index eAttribute;       // 04
		SPECIALIZATION   eSpecialization;  // 08
		float            fActionValue[2];  // 0C
	};
	static_assert(sizeof(SKILL_DATA) == 0x14);
}
