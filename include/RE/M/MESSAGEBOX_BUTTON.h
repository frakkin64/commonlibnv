#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/T/TESCondition.h"

namespace RE
{
	class MESSAGEBOX_BUTTON
	{
	public:
		MESSAGEBOX_BUTTON* ctor()
		{
			using func_t = MESSAGEBOX_BUTTON*(__thiscall*)(MESSAGEBOX_BUTTON*);
			static REL::Relocation<func_t> func{ Offsets::MESSAGEBOX_BUTTON::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(MESSAGEBOX_BUTTON*);
			static REL::Relocation<func_t> func{ Offsets::MESSAGEBOX_BUTTON::dtor };
			func(this);
		}

	public:
		// members
		BSStringT<char> Text;        // 00
		TESCondition    Conditions;  // 08
	};
	static_assert(sizeof(MESSAGEBOX_BUTTON) == 0x10);
}
