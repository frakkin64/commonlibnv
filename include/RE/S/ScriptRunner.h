#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/E/EXPRESSION_ERROR.h"
#include "RE/S/SCRIPT_ERROR.h"
#include "RE/S/SCRIPT_OUTPUT.h"

namespace RE
{
	class Script;
	class ScriptLocals;
	class TESGlobal;
	class TESObject;
	class TESObjectREFR;
	class TESTopicInfo;

	class ScriptRunner
	{
	public:
		ScriptRunner* ctor()
		{
			using func_t = ScriptRunner*(__thiscall*)(ScriptRunner*);
			static REL::Relocation<func_t> func{ Offsets::ScriptRunner::ctor };
			return func(this);
		}

		bool Run(Script* apScript, TESObjectREFR* apOwnerObject, ScriptLocals* apOwnerVars, TESObjectREFR* apOwnerContainer, bool abIsPartialScript, bool abScriptEffectStart, bool abScriptEffectFinish, float afSecondsElapsed)
		{
			using func_t = decltype(&ScriptRunner::Run);
			static REL::Relocation<func_t> func{ Offsets::ScriptRunner::Run };
			return func(this, apScript, apOwnerObject, apOwnerVars, apOwnerContainer, abIsPartialScript, abScriptEffectStart, abScriptEffectFinish, afSecondsElapsed);
		}

		bool InitActionList(Script* apScript, TESObjectREFR* apOwnerObject, ScriptLocals* apOwnerVars)
		{
			using func_t = decltype(&ScriptRunner::InitActionList);
			static REL::Relocation<func_t> func{ Offsets::ScriptRunner::InitActionList };
			return func(this, apScript, apOwnerObject, apOwnerVars);
		}

	protected:
		bool GetNextLine(Script* apScript, SCRIPT_OUTPUT& aeNextExp, std::uint32_t& auiDataOffset, std::int32_t& aiLineSize, TESObjectREFR** appRefObject, bool abSkip)
		{
			using func_t = decltype(&ScriptRunner::GetNextLine);
			static REL::Relocation<func_t> func{ Offsets::ScriptRunner::GetNextLine };
			return func(this, apScript, aeNextExp, auiDataOffset, aiLineSize, appRefObject, abSkip);
		}

		bool EvaluateLine(Script* apScript, SCRIPT_OUTPUT aeExp, TESObjectREFR* apFunctionOwner, std::int32_t& aiLineSize, std::uint32_t auiDataOffset, std::uint32_t& aiSkipLines, std::uint32_t auiCurrentLine, bool abEndian, bool abActionInit)
		{
			using func_t = decltype(&ScriptRunner::EvaluateLine);
			static REL::Relocation<func_t> func{ Offsets::ScriptRunner::EvaluateLine };
			return func(this, apScript, aeExp, apFunctionOwner, aiLineSize, auiDataOffset, aiSkipLines, auiCurrentLine, abEndian, abActionInit);
		}

		void ScriptError(Script* apScript, char* text, ...)
		{
			using func_t = void(__cdecl*)(ScriptRunner*, Script*, char*, ...);
			static REL::Relocation<func_t> func{ Offsets::ScriptRunner::ScriptError };
			func(this, apScript, text);
		}

	public:
		// members
		TESObjectREFR*   m_currentContainer;            // 00
		TESObject*       m_currentObject;               // 04
		ScriptLocals*    m_currentVars;                 // 08
		TESTopicInfo*    m_currentInfo;                 // 0C
		TESGlobal*       m_global;                      // 10
		Script*          m_scriptRunning;               // 14
		SCRIPT_ERROR     m_error;                       // 18
		EXPRESSION_ERROR m_expError;                    // 1C
		std::int32_t     m_ifNested;                    // 20
		std::int32_t     m_ifFlags[10];                 // 24
		std::int32_t     m_whileNested;                 // 4C
		std::int32_t     m_whileFlags[10];              // 50
		std::int32_t     m_whileOffset[10];             // 78
		bool             m_bScriptErrorFound;           // A0
		bool             m_bStopObjectScriptExecution;  // A1
		std::uint16_t    padA2;                         // A2
	};
	static_assert(sizeof(ScriptRunner) == 0xA4);
}
