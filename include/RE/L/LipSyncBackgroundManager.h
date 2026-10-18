#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/L/LockFreeMap.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class LipTask;
	class MobileObject;

	class LipSyncBackgroundManager
	{
	public:
		void dtor()
		{
			using func_t = void(__thiscall*)(LipSyncBackgroundManager*);
			static REL::Relocation<func_t> func{ Offsets::LipSyncBackgroundManager::dtor };
			func(this);
		}

		void BuildLipSynicFile(MobileObject* apActor, char const* apFilename)
		{
			using func_t = decltype(&LipSyncBackgroundManager::BuildLipSynicFile);
			static REL::Relocation<func_t> func{ Offsets::LipSyncBackgroundManager::BuildLipSynicFile };
			func(this, apActor, apFilename);
		}

		void CancelLipFile(MobileObject* apActor)
		{
			using func_t = decltype(&LipSyncBackgroundManager::CancelLipFile);
			static REL::Relocation<func_t> func{ Offsets::LipSyncBackgroundManager::CancelLipFile };
			func(this, apActor);
		}

		void RemoveTask(MobileObject* apActor)
		{
			using func_t = decltype(&LipSyncBackgroundManager::RemoveTask);
			static REL::Relocation<func_t> func{ Offsets::LipSyncBackgroundManager::RemoveTask };
			func(this, apActor);
		}

	public:
		// members
		LockFreeMap<MobileObject*, NiPointer<LipTask>> LipMap;  // 00
	};
}
