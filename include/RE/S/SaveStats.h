#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"
#include "RE/N/NiTPointerMap.h"

namespace RE
{
	class BSSystemFile;
	class LoadFormHeader;
	class SaveFormHeader;

	class SaveStats
	{
	public:
		class ExtraStat;

		class ExtraStat
		{
		public:
			// members
			std::uint32_t iSize;         // 00?
			char*         pDescription;  // 04?
		};

		void AddExtraStat(std::uint32_t aiSize, char* apDescription)
		{
			using func_t = decltype(&SaveStats::AddExtraStat);
			static REL::Relocation<func_t> func{ Offsets::SaveStats::AddExtraStat };
			func(this, aiSize, apDescription);
		}

		void AddStats(SaveFormHeader* apHeader, std::uint16_t aiSize)
		{
			using func_t = void (SaveStats::*)(SaveFormHeader*, std::uint16_t);
			static REL::Relocation<func_t> func{ Offsets::SaveStats::AddStats };
			func(this, apHeader, aiSize);
		}

		void AddStats(LoadFormHeader* apHeader)
		{
			using func_t = void (SaveStats::*)(LoadFormHeader*);
			static REL::Relocation<func_t> func{ Offsets::SaveStats::AddStats_1 };
			func(this, apHeader);
		}

		void PrintStats(char* apFileName)
		{
			using func_t = decltype(&SaveStats::PrintStats);
			static REL::Relocation<func_t> func{ Offsets::SaveStats::PrintStats };
			func(this, apFileName);
		}

		bool WriteFile(BSSystemFile& aFile, char const* apBuffer)
		{
			using func_t = decltype(&SaveStats::WriteFile);
			static REL::Relocation<func_t> func{ Offsets::SaveStats::WriteFile };
			return func(this, aFile, apBuffer);
		}

	public:
		// members
		NiTPointerMap<std::uint8_t, BSSimpleList<LoadFormHeader*>*>* pStatsMap;    // 00
		BSSimpleList<SaveStats::ExtraStat*>*                         pExtraStats;  // 04
	};
}
