#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/S/Script.h"
#include "RE/T/TESCondition.h"

namespace RE
{
	class BGSNote;
	class BGSTerminal;

	class TERMINAL_MENU_ITEM
	{
	public:
		TERMINAL_MENU_ITEM* ctor()
		{
			using func_t = TERMINAL_MENU_ITEM*(__thiscall*)(TERMINAL_MENU_ITEM*);
			static REL::Relocation<func_t> func{ Offsets::TERMINAL_MENU_ITEM::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TERMINAL_MENU_ITEM*);
			static REL::Relocation<func_t> func{ Offsets::TERMINAL_MENU_ITEM::dtor };
			func(this);
		}

		void SetSelected(bool abVal)
		{
			using func_t = decltype(&TERMINAL_MENU_ITEM::SetSelected);
			static REL::Relocation<func_t> func{ Offsets::TERMINAL_MENU_ITEM::SetSelected };
			func(this, abVal);
		}

	public:
		// members
		BSStringT<char> ResponseText;  // 00
		BSStringT<char> ResultText;    // 08
		Script          ResultScript;  // 10
		TESCondition    Conditions;    // 64
		BGSNote*        pDisplayNote;  // 6C
		BGSTerminal*    pSubMenu;      // 70
		char            cFlags;        // 74
		std::uint8_t    pad75[0x3];    // 75
	};
	static_assert(sizeof(TERMINAL_MENU_ITEM) == 0x78);
}
