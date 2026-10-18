#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/B/BSStringT.h"
#include "RE/C/COMPILER_NAME.h"
#include "RE/S/SCRIPT_ERROR.h"
#include "RE/S/SCRIPT_HEADER.h"

namespace RE
{
	class SCRIPT_LINE;
	class SCRIPT_REFERENCED_OBJECT;
	class SCRIPT_WORD;
	class Script;
	class ScriptVariable;

	class ScriptCompileData
	{
	public:
		ScriptCompileData* ctor()
		{
			using func_t = ScriptCompileData*(__thiscall*)(ScriptCompileData*);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompileData::ctor };
			return func(this);
		}

		bool GetVariable(SCRIPT_WORD* apCurrentWord)
		{
			using func_t = decltype(&ScriptCompileData::GetVariable);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompileData::GetVariable };
			return func(this, apCurrentWord);
		}

		bool VerifyReferencedObjectList()
		{
			using func_t = decltype(&ScriptCompileData::VerifyReferencedObjectList);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompileData::VerifyReferencedObjectList };
			return func(this);
		}

		bool GetReferencedObject(SCRIPT_WORD* apCurrentWord, bool abAddRefVariable, bool abAllowUnknownRef)
		{
			using func_t = decltype(&ScriptCompileData::GetReferencedObject);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompileData::GetReferencedObject };
			return func(this, apCurrentWord, abAddRefVariable, abAllowUnknownRef);
		}

		BSSimpleList<SCRIPT_LINE*>* GetScriptLineList()
		{
			using func_t = decltype(&ScriptCompileData::GetScriptLineList);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompileData::GetScriptLineList };
			return func(this);
		}

	public:
		// members
		const char*                             input;             // 00
		std::uint32_t                           uiInputOffset;     // 04
		COMPILER_NAME                           eCompilerIndex;    // 08
		BSStringT<char>                         cScriptName;       // 0C
		SCRIPT_ERROR                            eLastError;        // 14
		bool                                    bIsPartialScript;  // 18
		std::uint8_t                            pad19[0x3];        // 19
		std::uint32_t                           uiLastLineNumber;  // 1C
		char*                                   pOutput;           // 20
		std::uint32_t                           uiOutputOffset;    // 24
		SCRIPT_HEADER                           header;            // 28
		BSSimpleList<ScriptVariable*>           listVariables;     // 3C
		BSSimpleList<SCRIPT_REFERENCED_OBJECT*> listRefObjects;    // 44
		Script*                                 pCurrentScript;    // 4C
		BSSimpleList<SCRIPT_LINE*>              listLines;         // 50
	};
}
