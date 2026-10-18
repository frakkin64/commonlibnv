#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/COMPILER_NAME.h"
#include "RE/S/SCRIPT_OUTPUT.h"

namespace RE
{
	class SCRIPT_FUNCTION;
	class SCRIPT_LINE;
	class SCRIPT_PARAMETER;
	class SCRIPT_WORD;
	class Script;
	class ScriptCompileData;
	class TESObjectREFR;

	class ScriptCompiler
	{
	public:
		ScriptCompiler* ctor()
		{
			using func_t = ScriptCompiler*(__thiscall*)(ScriptCompiler*);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompiler::ctor };
			return func(this);
		}

		static void ScriptError(ScriptCompileData* apCompileData, char* a_arg2, ...)
		{
			using func_t = void(__cdecl*)(ScriptCompileData*, char*, ...);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompiler::ScriptError };
			func(apCompileData, a_arg2);
		}

		bool CompilePartialScript(Script* apScript, TESObjectREFR* apOwnerObject, COMPILER_NAME index, bool abOnLoad)
		{
			using func_t = decltype(&ScriptCompiler::CompilePartialScript);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompiler::CompilePartialScript };
			return func(this, apScript, apOwnerObject, index, abOnLoad);
		}

		static bool IsValidVariableName(char const* apVarName)
		{
			using func_t = decltype(&ScriptCompiler::IsValidVariableName);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompiler::IsValidVariableName };
			return func(apVarName);
		}

		static SCRIPT_FUNCTION* GetFunctionDef(SCRIPT_OUTPUT aeExpression)
		{
			using func_t = decltype(&ScriptCompiler::GetFunctionDef);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompiler::GetFunctionDef };
			return func(aeExpression);
		}

		static bool StandardCompile(std::uint16_t asParamCount, SCRIPT_PARAMETER const* apParameters, SCRIPT_LINE* apScriptLine, ScriptCompileData* apCompileData)
		{
			using func_t = decltype(&ScriptCompiler::StandardCompile);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompiler::StandardCompile };
			return func(asParamCount, apParameters, apScriptLine, apCompileData);
		}

		static bool MessageBoxCompile(std::uint16_t asParamCount, SCRIPT_PARAMETER const* apParameters, SCRIPT_LINE* apScriptLine, ScriptCompileData* apCompileData, bool abIsMessageBox, bool abStringOnly)
		{
			using func_t = decltype(&ScriptCompiler::MessageBoxCompile);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompiler::MessageBoxCompile };
			return func(asParamCount, apParameters, apScriptLine, apCompileData, abIsMessageBox, abStringOnly);
		}

	protected:
		bool Compile(Script* apScript, ScriptCompileData* apCompileData)
		{
			using func_t = decltype(&ScriptCompiler::Compile);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompiler::Compile };
			return func(this, apScript, apCompileData);
		}

		SCRIPT_OUTPUT GetNextExpression(ScriptCompileData* apCompileData)
		{
			using func_t = decltype(&ScriptCompiler::GetNextExpression);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompiler::GetNextExpression };
			return func(this, apCompileData);
		}

		static std::int32_t GetNextLine(ScriptCompileData* apCompileData, SCRIPT_LINE* pScriptLine)
		{
			using func_t = decltype(&ScriptCompiler::GetNextLine);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompiler::GetNextLine };
			return func(apCompileData, pScriptLine);
		}

		static std::int32_t GetNextWord(ScriptCompileData* apCompileData, SCRIPT_WORD* apNextWord, char const* apExpLine, std::uint32_t& auiLineOffset, bool abAllowVariable, bool abAllowUnknownRef)
		{
			using func_t = decltype(&ScriptCompiler::GetNextWord);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompiler::GetNextWord };
			return func(apCompileData, apNextWord, apExpLine, auiLineOffset, abAllowVariable, abAllowUnknownRef);
		}

		bool CompileLine(Script* apScript, ScriptCompileData* apCompileData, SCRIPT_LINE* apScriptLine)
		{
			using func_t = decltype(&ScriptCompiler::CompileLine);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompiler::CompileLine };
			return func(this, apScript, apCompileData, apScriptLine);
		}

		bool VerifyBlocks(ScriptCompileData* apCompileData)
		{
			using func_t = decltype(&ScriptCompiler::VerifyBlocks);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompiler::VerifyBlocks };
			return func(this, apCompileData);
		}

		std::int32_t CountBlockLines(ScriptCompileData* apCompileData, SCRIPT_LINE* apStartingLine)
		{
			using func_t = decltype(&ScriptCompiler::CountBlockLines);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompiler::CountBlockLines };
			return func(this, apCompileData, apStartingLine);
		}

		std::int32_t CountIfLines(ScriptCompileData* apCompileData, SCRIPT_LINE* apStartingLine)
		{
			using func_t = decltype(&ScriptCompiler::CountIfLines);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompiler::CountIfLines };
			return func(this, apCompileData, apStartingLine);
		}

		std::uint32_t ReplaceVariablesAndFunctions(ScriptCompileData* apCompileData, SCRIPT_LINE const* apScriptLine, char* apPostfix, char* apExpLine)
		{
			using func_t = decltype(&ScriptCompiler::ReplaceVariablesAndFunctions);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompiler::ReplaceVariablesAndFunctions };
			return func(this, apCompileData, apScriptLine, apPostfix, apExpLine);
		}

		static bool GetFunction(SCRIPT_WORD* apWord)
		{
			using func_t = decltype(&ScriptCompiler::GetFunction);
			static REL::Relocation<func_t> func{ Offsets::ScriptCompiler::GetFunction };
			return func(apWord);
		}
	};
}
