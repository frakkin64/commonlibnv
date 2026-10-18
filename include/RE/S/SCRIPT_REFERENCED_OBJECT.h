#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"

namespace RE
{
	class TESForm;

	class SCRIPT_REFERENCED_OBJECT
	{
	public:
		SCRIPT_REFERENCED_OBJECT* ctor()
		{
			using func_t = SCRIPT_REFERENCED_OBJECT*(__thiscall*)(SCRIPT_REFERENCED_OBJECT*);
			static REL::Relocation<func_t> func{ Offsets::SCRIPT_REFERENCED_OBJECT::ctor };
			return func(this);
		}

		SCRIPT_REFERENCED_OBJECT* ctor(SCRIPT_REFERENCED_OBJECT* apCopy)
		{
			using func_t = SCRIPT_REFERENCED_OBJECT*(__thiscall*)(SCRIPT_REFERENCED_OBJECT*, SCRIPT_REFERENCED_OBJECT*);
			static REL::Relocation<func_t> func{ Offsets::SCRIPT_REFERENCED_OBJECT::ctor_1 };
			return func(this, apCopy);
		}

	public:
		// members
		BSStringT<char> cEditorID;     // 00
		TESForm*        pForm;         // 08
		std::uint32_t   uiVariableID;  // 0C
	};
	static_assert(sizeof(SCRIPT_REFERENCED_OBJECT) == 0x10);
}
