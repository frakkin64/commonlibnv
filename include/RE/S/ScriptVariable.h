#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"
#include "RE/S/SCRIPT_LOCAL.h"

namespace RE
{
	class TESFile;

	class ScriptVariable
	{
	public:
		ScriptVariable* ctor()
		{
			using func_t = ScriptVariable*(__thiscall*)(ScriptVariable*);
			static REL::Relocation<func_t> func{ Offsets::ScriptVariable::ctor };
			return func(this);
		}

		ScriptVariable* ctor(ScriptVariable* apCopy)
		{
			using func_t = ScriptVariable*(__thiscall*)(ScriptVariable*, ScriptVariable*);
			static REL::Relocation<func_t> func{ Offsets::ScriptVariable::ctor_1 };
			return func(this, apCopy);
		}

		void Load(TESFile* apFile)
		{
			using func_t = decltype(&ScriptVariable::Load);
			static REL::Relocation<func_t> func{ Offsets::ScriptVariable::Load };
			func(this, apFile);
		}

	public:
		// members
		SCRIPT_LOCAL    data;   // 00
		BSStringT<char> cName;  // 18
	};
	static_assert(sizeof(ScriptVariable) == 0x20);
}
