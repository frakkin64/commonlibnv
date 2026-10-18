#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSChangeFlags.h"

namespace RE
{
	class TESForm;

	class SavedFormData
	{
	public:
		void GetFormName(char* apName, std::uint32_t aiNameSize)
		{
			using func_t = decltype(&SavedFormData::GetFormName);
			static REL::Relocation<func_t> func{ Offsets::SavedFormData::GetFormName };
			func(this, apName, aiNameSize);
		}

	public:
		// members
		std::uint32_t  iFormID;         // 00
		BGSChangeFlags iChangeFlags;    // 04
		std::uint32_t  iSize;           // 08
		std::uint32_t  iOverhead;       // 0C
		std::uint32_t  iDebugOverhead;  // 10
		TESForm*       pForm;           // 14
		std::uint8_t   cVersion;        // 18?
		std::uint8_t   pad19[0x3];      // 19
	};
}
