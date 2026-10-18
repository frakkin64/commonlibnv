#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/A/ANIM_GROUP_WEAPON_ENUM.h"
#include "RE/B/BSSimpleList.h"
#include "RE/B/BSTCaseInsensitiveStringMap.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class IDLE_ANIM_ROOT;
	class NiFormArray;
	class TESForm;
	class TESIdleForm;
	class TESObject;
	class TESObjectREFR;

	class TESIdleManager
	{
	public:
		TESIdleManager* ctor()
		{
			using func_t = TESIdleManager*(__thiscall*)(TESIdleManager*);
			static REL::Relocation<func_t> func{ Offsets::TESIdleManager::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(TESIdleManager*);
			static REL::Relocation<func_t> func{ Offsets::TESIdleManager::dtor };
			func(this);
		}

		void DestroyRootIdleArrayForms()
		{
			using func_t = decltype(&TESIdleManager::DestroyRootIdleArrayForms);
			static REL::Relocation<func_t> func{ Offsets::TESIdleManager::DestroyRootIdleArrayForms };
			func(this);
		}

		NiFormArray* AddRootIdleArray(char const* apIdleDir, BSSimpleList<char const*>* apList, bool abForceList)
		{
			using func_t = NiFormArray* (TESIdleManager::*)(char const*, BSSimpleList<char const*>*, bool);
			static REL::Relocation<func_t> func{ Offsets::TESIdleManager::AddRootIdleArray };
			return func(this, apIdleDir, apList, abForceList);
		}

		NiFormArray* AddRootIdleArray(TESForm* apForm)
		{
			using func_t = NiFormArray* (TESIdleManager::*)(TESForm*);
			static REL::Relocation<func_t> func{ Offsets::TESIdleManager::AddRootIdleArray_1 };
			return func(this, apForm);
		}

		NiFormArray* GetRootIdleArray(char const* apIdleDir)
		{
			using func_t = NiFormArray* (TESIdleManager::*)(char const*);
			static REL::Relocation<func_t> func{ Offsets::TESIdleManager::GetRootIdleArray };
			return func(this, apIdleDir);
		}

		NiFormArray* GetRootIdleArray(TESForm* apForm)
		{
			using func_t = NiFormArray* (TESIdleManager::*)(TESForm*);
			static REL::Relocation<func_t> func{ Offsets::TESIdleManager::GetRootIdleArray_1 };
			return func(this, apForm);
		}

		NiFormArray* GetLooseIdleArray(TESForm* apForm)
		{
			using func_t = decltype(&TESIdleManager::GetLooseIdleArray);
			static REL::Relocation<func_t> func{ Offsets::TESIdleManager::GetLooseIdleArray };
			return func(this, apForm);
		}

		BSSimpleList<char const*>* GetRootFilenameList(char const* apIdleDir, ANIM_GROUP_WEAPON_ENUM aeWeaponGroup)
		{
			using func_t = decltype(&TESIdleManager::GetRootFilenameList);
			static REL::Relocation<func_t> func{ Offsets::TESIdleManager::GetRootFilenameList };
			return func(this, apIdleDir, aeWeaponGroup);
		}

		static void GetIdleDirName(char const* apInDir, char* apOutDir)
		{
			using func_t = decltype(&TESIdleManager::GetIdleDirName);
			static REL::Relocation<func_t> func{ Offsets::TESIdleManager::GetIdleDirName };
			func(apInDir, apOutDir);
		}

		static TESObject* GetUsedItem()
		{
			using func_t = decltype(&TESIdleManager::GetUsedItem);
			static REL::Relocation<func_t> func{ Offsets::TESIdleManager::GetUsedItem };
			return func();
		}

		static void SetUsedItem(TESObject* apObject)
		{
			using func_t = decltype(&TESIdleManager::SetUsedItem);
			static REL::Relocation<func_t> func{ Offsets::TESIdleManager::SetUsedItem };
			func(apObject);
		}

		static void SetUsedItemLevel(std::int32_t aiLevel)
		{
			using func_t = decltype(&TESIdleManager::SetUsedItemLevel);
			static REL::Relocation<func_t> func{ Offsets::TESIdleManager::SetUsedItemLevel };
			func(aiLevel);
		}

		static void SetUsedItemActivate(bool abactive)
		{
			using func_t = decltype(&TESIdleManager::SetUsedItemActivate);
			static REL::Relocation<func_t> func{ Offsets::TESIdleManager::SetUsedItemActivate };
			func(abactive);
		}

		TESIdleForm* GetIdleToPlay(TESObjectREFR* apActionRef, TESObjectREFR* apTargetRef)
		{
			using func_t = decltype(&TESIdleManager::GetIdleToPlay);
			static REL::Relocation<func_t> func{ Offsets::TESIdleManager::GetIdleToPlay };
			return func(this, apActionRef, apTargetRef);
		}

	public:
		// members
		BSTCaseInsensitiveStringMap<IDLE_ANIM_ROOT*> IdleArrayMap;     // 00
		bool                                         bInitialized;     // 14
		std::uint8_t                                 pad15[0x3];       // 15
		NiTPrimitiveArray<TESIdleForm*>              LoadedIdleArray;  // 18
	};
	static_assert(sizeof(TESIdleManager) == 0x28);
}
