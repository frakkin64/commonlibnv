#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"

namespace RE
{
	class TESCaravanCard;

	class CaravanAIPackage
	{
	public:
		void Print_WhatIsHeThinking(BSSimpleArray<TESCaravanCard*, 1024>* pNPCHandArray)
		{
			using func_t = decltype(&CaravanAIPackage::Print_WhatIsHeThinking);
			static REL::Relocation<func_t> func{ Offsets::CaravanAIPackage::Print_WhatIsHeThinking };
			func(this, pNPCHandArray);
		}

	public:
		// members
		std::int32_t iValueGoal;    // 00
		std::int32_t iCalcResults;  // 04
		std::int32_t iActionType;   // 08
		std::int32_t iTrack;        // 0C
		std::int32_t iRow;          // 10
		std::int32_t iDeckCard;     // 14
		std::int32_t iPriority;     // 18
	};
}
