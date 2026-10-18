#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CONDITIONITEMOBJECT.h"
#include "RE/F/FUNCTION_DATA.h"

namespace RE
{
	class TESGlobal;
	class TESObjectREFR;

	class CONDITION_ITEM_DATA
	{
	public:
		void Endian()
		{
			using func_t = decltype(&CONDITION_ITEM_DATA::Endian);
			static REL::Relocation<func_t> func{ Offsets::CONDITION_ITEM_DATA::Endian };
			func(this);
		}

	public:
		// members
		char                iFlags;        // 00
		std::uint8_t        pad01[0x3];    // 01
		union
		{
			TESGlobal* pGlobal;
			float fValue;
		} ___u1;  // 04
		FUNCTION_DATA       FunctionData;  // 08
		CONDITIONITEMOBJECT eObject;       // 14
		TESObjectREFR*      pRunOnRef;     // 18
	};
	static_assert(sizeof(CONDITION_ITEM_DATA) == 0x1C);
}
