#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/INISettingCollection.h"
#include "RE/S/SettingT.h"

namespace RE
{
	class bhkWorld;
	class hkJobQueue;
	class hkJobThreadPool;

	class bhkMultithreadedSystem
	{
	public:
		bhkMultithreadedSystem* ctor()
		{
			using func_t = bhkMultithreadedSystem*(__thiscall*)(bhkMultithreadedSystem*);
			static REL::Relocation<func_t> func{ Offsets::bhkMultithreadedSystem::ctor };
			return func(this);
		}

	public:
		// members
		SettingT<INISettingCollection> iNumThreads;        // 00
		std::uint32_t                  uiMTResourceOwner;  // 0C
		bhkWorld*                      pCurrentMTWorld;    // 10
		hkJobQueue*                    pJobQueue;          // 14
		hkJobThreadPool*               pJobThreadPool;     // 18
	};
	static_assert(sizeof(bhkMultithreadedSystem) == 0x1C);
}
