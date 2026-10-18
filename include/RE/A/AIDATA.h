#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class AIDATA
	{
	public:
		// members
		std::uint8_t  cAggression;      // 00
		std::uint8_t  cConfidence;      // 01
		std::uint8_t  cEnergy;          // 02
		std::uint8_t  cResponsibility;  // 03
		std::uint8_t  cMood;            // 04
		std::uint8_t  pad05[0x3];       // 05
		std::uint32_t iServiceFlags;    // 08
		std::uint8_t  cTrainingSkill;   // 0C
		std::uint8_t  cTrainingLevel;   // 0D
		std::uint8_t  cAssistance;      // 0E
		bool          bAggroRadius;     // 0F
		std::uint32_t uiAggroRadius;    // 10
	};
}
