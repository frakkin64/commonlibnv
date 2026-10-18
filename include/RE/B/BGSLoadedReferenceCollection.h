#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/E/ENUM_FORM_ID.h"
#include "RE/L/LoadedReferenceMap.h"

namespace RE
{
	class FindObjectIterator;
	class ItemChange;
	class TESObjectREFR;

	class BGSLoadedReferenceCollection
	{
	public:
		BGSLoadedReferenceCollection* ctor()
		{
			using func_t = BGSLoadedReferenceCollection*(__thiscall*)(BGSLoadedReferenceCollection*);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadedReferenceCollection::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSLoadedReferenceCollection*);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadedReferenceCollection::dtor };
			func(this);
		}

		static void Create()
		{
			using func_t = decltype(&BGSLoadedReferenceCollection::Create);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadedReferenceCollection::Create };
			func();
		}

		void AddReference(TESObjectREFR* apRef)
		{
			using func_t = decltype(&BGSLoadedReferenceCollection::AddReference);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadedReferenceCollection::AddReference };
			func(this, apRef);
		}

		void RemoveReference(TESObjectREFR* apRef)
		{
			using func_t = decltype(&BGSLoadedReferenceCollection::RemoveReference);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadedReferenceCollection::RemoveReference };
			func(this, apRef);
		}

		LoadedReferenceMap* GetFormTypeMap(ENUM_FORM_ID aeFormType)
		{
			using func_t = decltype(&BGSLoadedReferenceCollection::GetFormTypeMap);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadedReferenceCollection::GetFormTypeMap };
			return func(this, aeFormType);
		}

		bool GetNextObject(FindObjectIterator& arIterator, TESObjectREFR*& arpRef, ItemChange*& arpItemChange, std::uint32_t aiFindFlags)
		{
			using func_t = decltype(&BGSLoadedReferenceCollection::GetNextObject);
			static REL::Relocation<func_t> func{ Offsets::BGSLoadedReferenceCollection::GetNextObject };
			return func(this, arIterator, arpRef, arpItemChange, aiFindFlags);
		}

	public:
		// members
		LoadedReferenceMap DynamicReferenceMap;  // 00
		LoadedReferenceMap ItemsMap;             // 18
		LoadedReferenceMap WeaponsMap;           // 30
		LoadedReferenceMap AmmoMap;              // 48
		LoadedReferenceMap ContainersMap;        // 60
		LoadedReferenceMap ActorsMap;            // 78
		LoadedReferenceMap RadiationMap;         // 90
		LoadedReferenceMap TeleportDoorMap;      // A8
	};
	static_assert(sizeof(BGSLoadedReferenceCollection) == 0xC0);
}
