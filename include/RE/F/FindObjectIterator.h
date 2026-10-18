#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/E/ENUM_FORM_ID.h"
#include "RE/I/InventoryIterator.h"

namespace RE
{
	class InventoryChanges;
	class TESBoundObject;
	class TESObjectREFR;

	class FindObjectIterator
	{
	public:
		FindObjectIterator* ctor(ENUM_FORM_ID aeFormType, TESObjectREFR* apActivatingRef)
		{
			using func_t = FindObjectIterator*(__thiscall*)(FindObjectIterator*, ENUM_FORM_ID, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::FindObjectIterator::ctor };
			return func(this, aeFormType, apActivatingRef);
		}

		FindObjectIterator* ctor(TESBoundObject* apBoundObject, TESObjectREFR* apActivatingRef)
		{
			using func_t = FindObjectIterator*(__thiscall*)(FindObjectIterator*, TESBoundObject*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::FindObjectIterator::ctor_1 };
			return func(this, apBoundObject, apActivatingRef);
		}

	public:
		// members
		// not placed: pCurrentMap
		ENUM_FORM_ID      eFormType;          // 00
		TESBoundObject*   pBoundObject;       // 04
		TESObjectREFR*    pActivatingRef;     // 08
		TESObjectREFR*    pCurrentRef;        // 0C
		InventoryChanges* pCurrentInventory;  // 10
		void*             MapIterator;        // 14
		InventoryIterator InvIterator;        // 18
		std::uint8_t      cMapIndex;          // 30?
		std::uint8_t      pad31[0x3];         // 31
	};
}
