#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SCRIPT_ERROR.h"
#include "RE/S/SCRIPT_OUTPUT.h"

namespace RE
{
	class SCRIPT_LINE
	{
	public:
		SCRIPT_LINE* ctor()
		{
			using func_t = SCRIPT_LINE*(__thiscall*)(SCRIPT_LINE*);
			static REL::Relocation<func_t> func{ Offsets::SCRIPT_LINE::ctor };
			return func(this);
		}

	public:
		// members
		std::uint32_t uiLineNumber;      // 00
		char          pLine[512];        // 04
		std::uint32_t uiSize;            // 204
		std::uint32_t uiOffset;          // 208
		char          pOutput[512];      // 20C
		std::uint32_t uiOutputSize;      // 40C
		SCRIPT_OUTPUT sExpression;       // 410
		std::uint32_t uiRefObjectIndex;  // 414
		SCRIPT_ERROR  eScriptError;      // 418
	};
	static_assert(sizeof(SCRIPT_LINE) == 0x41C);
}
