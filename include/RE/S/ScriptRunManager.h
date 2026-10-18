#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class Script;
	class ScriptLocals;
	class ScriptRunner;
	class TESObjectREFR;

	class ScriptRunManager
	{
	public:
		static ScriptRunManager* Instance()
		{
			using func_t = decltype(&ScriptRunManager::Instance);
			static REL::Relocation<func_t> func{ Offsets::ScriptRunManager::Instance };
			return func();
		}

		bool Run(Script* apScript, TESObjectREFR* apOwnerObject, ScriptLocals* apOwnerVars, TESObjectREFR* apOwnerContainer, bool abIsPartialScript, bool abScriptEffectStart, bool abScriptEffectFinish, float afSecondsElapsed)
		{
			using func_t = decltype(&ScriptRunManager::Run);
			static REL::Relocation<func_t> func{ Offsets::ScriptRunManager::Run };
			return func(this, apScript, apOwnerObject, apOwnerVars, apOwnerContainer, abIsPartialScript, abScriptEffectStart, abScriptEffectFinish, afSecondsElapsed);
		}

		bool InitActionList(Script* apScript, TESObjectREFR* apOwnerObject, ScriptLocals* apOwnerVars)
		{
			using func_t = decltype(&ScriptRunManager::InitActionList);
			static REL::Relocation<func_t> func{ Offsets::ScriptRunManager::InitActionList };
			return func(this, apScript, apOwnerObject, apOwnerVars);
		}

	public:
		// members
		ScriptRunner* m_pScriptRunner;  // 00
		ScriptRunner* pCurrentRunner;   // 04
	};
}
