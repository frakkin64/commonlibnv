#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SCRIPT_OUTPUT.h"

namespace RE
{
	class TESForm;

	class SCRIPT_WORD
	{
	public:
		SCRIPT_WORD* ctor()
		{
			using func_t = SCRIPT_WORD*(__thiscall*)(SCRIPT_WORD*);
			static REL::Relocation<func_t> func{ Offsets::SCRIPT_WORD::ctor };
			return func(this);
		}

	public:
		// members
		char          pText[512];        // 00
		std::uint32_t uiRefObjectIndex;  // 200
		char          cVariableType;     // 204
		std::uint8_t  pad205[0x3];       // 205
		SCRIPT_OUTPUT eFunctionCode;     // 208
		std::uint32_t uiVariableID;      // 20C
		TESForm*      pForm;             // 210
	};
}
