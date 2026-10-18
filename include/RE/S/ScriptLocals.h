#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class ACTION_OBJECT;
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class SCRIPT_EFFECT_DATA;
	class SCRIPT_LOCAL;
	class Script;
	class TESForm;

	class ScriptLocals
	{
	public:
		ScriptLocals* ctor()
		{
			using func_t = ScriptLocals*(__thiscall*)(ScriptLocals*);
			static REL::Relocation<func_t> func{ Offsets::ScriptLocals::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(ScriptLocals*);
			static REL::Relocation<func_t> func{ Offsets::ScriptLocals::dtor };
			func(this);
		}

		void AddActionObject(TESForm* apActionForm)
		{
			using func_t = decltype(&ScriptLocals::AddActionObject);
			static REL::Relocation<func_t> func{ Offsets::ScriptLocals::AddActionObject };
			func(this, apActionForm);
		}

		bool SetActionFlag(TESForm* apActionForm, std::uint32_t aiFlag)
		{
			using func_t = decltype(&ScriptLocals::SetActionFlag);
			static REL::Relocation<func_t> func{ Offsets::ScriptLocals::SetActionFlag };
			return func(this, apActionForm, aiFlag);
		}

		bool CheckActionFlag(TESForm* apActionForm, std::uint32_t aiFlag)
		{
			using func_t = decltype(&ScriptLocals::CheckActionFlag);
			static REL::Relocation<func_t> func{ Offsets::ScriptLocals::CheckActionFlag };
			return func(this, apActionForm, aiFlag);
		}

		double GetVariable(std::uint32_t auiID, Script* apScript)
		{
			using func_t = decltype(&ScriptLocals::GetVariable);
			static REL::Relocation<func_t> func{ Offsets::ScriptLocals::GetVariable };
			return func(this, auiID, apScript);
		}

		void SetVariable(std::uint32_t auiID, double value)
		{
			using func_t = decltype(&ScriptLocals::SetVariable);
			static REL::Relocation<func_t> func{ Offsets::ScriptLocals::SetVariable };
			func(this, auiID, value);
		}

		bool IsReferenceVariable(std::uint32_t auiID)
		{
			using func_t = decltype(&ScriptLocals::IsReferenceVariable);
			static REL::Relocation<func_t> func{ Offsets::ScriptLocals::IsReferenceVariable };
			return func(this, auiID);
		}

		std::uint16_t GetSaveSize()
		{
			using func_t = decltype(&ScriptLocals::GetSaveSize);
			static REL::Relocation<func_t> func{ Offsets::ScriptLocals::GetSaveSize };
			return func(this);
		}

		void SaveGame()
		{
			using func_t = void (ScriptLocals::*)();
			static REL::Relocation<func_t> func{ Offsets::ScriptLocals::SaveGame };
			func(this);
		}

		void LoadGame()
		{
			using func_t = void (ScriptLocals::*)();
			static REL::Relocation<func_t> func{ Offsets::ScriptLocals::LoadGame };
			func(this);
		}

		void Revert()
		{
			using func_t = void (ScriptLocals::*)();
			static REL::Relocation<func_t> func{ Offsets::ScriptLocals::Revert };
			func(this);
		}

		static void ClearOptimizations()
		{
			using func_t = decltype(&ScriptLocals::ClearOptimizations);
			static REL::Relocation<func_t> func{ Offsets::ScriptLocals::ClearOptimizations };
			func();
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = void (ScriptLocals::*)(BGSSaveFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::ScriptLocals::SaveGame_1 };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = void (ScriptLocals::*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::ScriptLocals::LoadGame_1 };
			func(this, apLoadGameBuffer);
		}

		void Revert(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = void (ScriptLocals::*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::ScriptLocals::Revert_1 };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		Script*                       m_pMasterScript;      // 00
		char                          m_cFlags;             // 04
		std::uint8_t                  pad05[0x3];           // 05
		BSSimpleList<ACTION_OBJECT*>* m_pActionList;        // 08
		BSSimpleList<SCRIPT_LOCAL*>*  m_pLocalList;         // 0C
		SCRIPT_EFFECT_DATA*           m_pScriptEffectData;  // 10
	};
	static_assert(sizeof(ScriptLocals) == 0x14);
}
