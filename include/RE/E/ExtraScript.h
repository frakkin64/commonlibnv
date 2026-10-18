#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class Script;
	class ScriptLocals;

	class ExtraScript :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraScript };
		static constexpr auto VTABLE{ VTABLE::ExtraScript };

		// override (BSExtraData)
		virtual ~ExtraScript() = default;                       // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraScript* ctor(Script* apScript)
		{
			using func_t = ExtraScript*(__thiscall*)(ExtraScript*, Script*);
			static REL::Relocation<func_t> func{ Offsets::ExtraScript::ctor };
			return func(this, apScript);
		}

	public:
		// members
		Script*       pScript;      // 0C
		ScriptLocals* pScriptVars;  // 10
	};
	static_assert(sizeof(ExtraScript) == 0x14);
}
