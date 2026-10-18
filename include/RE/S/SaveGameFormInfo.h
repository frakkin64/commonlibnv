#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class SaveGameFormInfo
	{
	public:
		SaveGameFormInfo* ctor()
		{
			using func_t = SaveGameFormInfo*(__thiscall*)(SaveGameFormInfo*);
			static REL::Relocation<func_t> func{ Offsets::SaveGameFormInfo::ctor };
			return func(this);
		}

	public:
		// members
		std::uint32_t iFormIDMapOffset;          // 00?
		std::uint32_t iHistoryOffset;            // 04?
		std::uint32_t iInitialGlobalDataOffset;  // 08?
		std::uint32_t iFormDataOffset;           // 0C?
		std::uint32_t iFinalGlobalDataOffset;    // 10?
		std::uint32_t iInitialGlobalFormCount;   // 14?
		std::uint32_t iFinalGlobalFormCount;     // 18?
		std::uint32_t iFormCount;                // 1C?
		std::uint32_t iSecondaryDataSize;        // 20?
		char          ReservedSpace[74];         // 24?
		std::uint16_t pad6E;                     // 6E
	};
}
