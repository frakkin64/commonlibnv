#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFormArray.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class BGSCameraPath;
	class TESObjectREFR;

	class BGSCameraPathManager
	{
	public:
		BGSCameraPathManager* ctor()
		{
			using func_t = BGSCameraPathManager*(__thiscall*)(BGSCameraPathManager*);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraPathManager::ctor };
			return func(this);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(BGSCameraPathManager*);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraPathManager::dtor };
			func(this);
		}

		void CreateDefaultPath()
		{
			using func_t = decltype(&BGSCameraPathManager::CreateDefaultPath);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraPathManager::CreateDefaultPath };
			func(this);
		}

		void DestroyRootPathArrayForms()
		{
			using func_t = decltype(&BGSCameraPathManager::DestroyRootPathArrayForms);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraPathManager::DestroyRootPathArrayForms };
			func(this);
		}

		BGSCameraPath* GetCameraPathToPlay(TESObjectREFR* apActionRef, TESObjectREFR* apTargetRef)
		{
			using func_t = decltype(&BGSCameraPathManager::GetCameraPathToPlay);
			static REL::Relocation<func_t> func{ Offsets::BGSCameraPathManager::GetCameraPathToPlay };
			return func(this, apActionRef, apTargetRef);
		}

	public:
		// members
		NiFormArray                       PathArray;        // 00
		NiTPrimitiveArray<BGSCameraPath*> LoadedPathArray;  // 18
	};
	static_assert(sizeof(BGSCameraPathManager) == 0x28);
}
