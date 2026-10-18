#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BGSNumericIDIndex
	{
	public:
		BGSNumericIDIndex* ctor()
		{
			using func_t = BGSNumericIDIndex*(__thiscall*)(BGSNumericIDIndex*);
			static REL::Relocation<func_t> func{ Offsets::BGSNumericIDIndex::ctor };
			return func(this);
		}

		std::uint32_t GetNumericID()
		{
			using func_t = decltype(&BGSNumericIDIndex::GetNumericID);
			static REL::Relocation<func_t> func{ Offsets::BGSNumericIDIndex::GetNumericID };
			return func(this);
		}

		void SetNumericID(std::uint32_t aiNumericID)
		{
			using func_t = decltype(&BGSNumericIDIndex::SetNumericID);
			static REL::Relocation<func_t> func{ Offsets::BGSNumericIDIndex::SetNumericID };
			func(this, aiNumericID);
		}

	public:
		// members
		std::uint8_t cData1;  // 00
		std::uint8_t cData2;  // 01
		std::uint8_t cData3;  // 02
	};
}
