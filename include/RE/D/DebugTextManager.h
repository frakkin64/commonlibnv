#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTMap.h"

namespace RE
{
	class IDebugTextPage;

	class DebugTextManager
	{
	public:
		class DTPEntry;

		class DTPEntry
		{
		public:
			// members
			char  pName[64];         // 00
			void* pfCreateFunction;  // 40?
		};

		static DebugTextManager* Instance()
		{
			using func_t = decltype(&DebugTextManager::Instance);
			static REL::Relocation<func_t> func{ Offsets::DebugTextManager::Instance };
			return func();
		}

		void OutputDebugPageNames(void* apfOutput)
		{
			using func_t = decltype(&DebugTextManager::OutputDebugPageNames);
			static REL::Relocation<func_t> func{ Offsets::DebugTextManager::OutputDebugPageNames };
			func(this, apfOutput);
		}

		bool SetScreenDebugPage(char const* apScreen, std::int32_t aiSubPage)
		{
			using func_t = decltype(&DebugTextManager::SetScreenDebugPage);
			static REL::Relocation<func_t> func{ Offsets::DebugTextManager::SetScreenDebugPage };
			return func(this, apScreen, aiSubPage);
		}

	public:
		// members
		std::uint32_t                          iCurrentGlobalId;     // 00
		NiTMap<std::uint32_t, IDebugTextPage*> TrackedDebugPages;    // 04
		std::int32_t                           iNumPages;            // 14
		std::int32_t                           iScreenPage;          // 18
		std::int32_t                           iScreenSubPage;       // 1C
		DebugTextManager::DTPEntry             RegisteredPages[64];  // 20
	};
}
