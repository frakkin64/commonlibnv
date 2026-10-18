#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class SCRIPT_HEADER
	{
	public:
		void Endian()
		{
			using func_t = decltype(&SCRIPT_HEADER::Endian);
			static REL::Relocation<func_t> func{ Offsets::SCRIPT_HEADER::Endian };
			func(this);
		}

	public:
		// members
		std::uint32_t variableCount;         // 00
		std::uint32_t refObjectCount;        // 04
		std::uint32_t dataSize;              // 08
		std::uint32_t m_uiLastID;            // 0C
		bool          bIsQuestScript;        // 10
		bool          bIsMagicEffectScript;  // 11?
		bool          bIsCompiled;           // 12?
		std::uint8_t  pad13;                 // 13
	};
}
