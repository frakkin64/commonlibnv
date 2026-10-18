#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/M/ModifierList_ClampStyle.h"

namespace RE
{
	class BGSLoadFormBuffer;
	class BGSSaveFormBuffer;
	class FastModifierCollection;
	class Modifier;

	class ModifierList :
		public BSSimpleList<Modifier*>  // 00
	{
	public:
		using ClampStyle = ModifierList_ClampStyle;

		ModifierList* ctor()
		{
			using func_t = ModifierList*(__thiscall*)(ModifierList*);
			static REL::Relocation<func_t> func{ Offsets::ModifierList::ctor };
			return func(this);
		}

		void DeleteAllModifiers()
		{
			using func_t = decltype(&ModifierList::DeleteAllModifiers);
			static REL::Relocation<func_t> func{ Offsets::ModifierList::DeleteAllModifiers };
			func(this);
		}

		void AddModifier(Modifier* apModifier)
		{
			using func_t = decltype(&ModifierList::AddModifier);
			static REL::Relocation<func_t> func{ Offsets::ModifierList::AddModifier };
			func(this, apModifier);
		}

		void AdjustModifier(char acKey, float afValue, ModifierList_ClampStyle aeClampStyle)
		{
			using func_t = decltype(&ModifierList::AdjustModifier);
			static REL::Relocation<func_t> func{ Offsets::ModifierList::AdjustModifier };
			func(this, acKey, afValue, aeClampStyle);
		}

		float GetModifier(char acKey)
		{
			using func_t = decltype(&ModifierList::GetModifier);
			static REL::Relocation<func_t> func{ Offsets::ModifierList::GetModifier };
			return func(this, acKey);
		}

		void LoadGame()
		{
			using func_t = void (ModifierList::*)();
			static REL::Relocation<func_t> func{ Offsets::ModifierList::LoadGame };
			func(this);
		}

		void Revert()
		{
			using func_t = decltype(&ModifierList::Revert);
			static REL::Relocation<func_t> func{ Offsets::ModifierList::Revert };
			func(this);
		}

		void SaveGame(BGSSaveFormBuffer* apSaveGameBuffer)
		{
			using func_t = decltype(&ModifierList::SaveGame);
			static REL::Relocation<func_t> func{ Offsets::ModifierList::SaveGame };
			func(this, apSaveGameBuffer);
		}

		void LoadGame(BGSLoadFormBuffer* apLoadGameBuffer)
		{
			using func_t = void (ModifierList::*)(BGSLoadFormBuffer*);
			static REL::Relocation<func_t> func{ Offsets::ModifierList::LoadGame_1 };
			func(this, apLoadGameBuffer);
		}

	public:
		// members
		bool                    bZeroValuesAllowed;  // 08
		std::uint8_t            pad09[0x3];          // 09
		FastModifierCollection* pFastModifiers;      // 0C
	};
}
