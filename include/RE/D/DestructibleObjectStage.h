#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BGSDebris;
	class BGSExplosion;
	class TESModelTextureSwap;

	class DestructibleObjectStage
	{
	public:
		// members
		std::uint8_t         cModelDamageStage;     // 00
		std::uint8_t         cHealthPercentage;     // 01
		std::uint8_t         cFlags;                // 02
		std::uint8_t         pad03;                 // 03
		std::uint32_t        iSelfDamagePerSecond;  // 04
		BGSExplosion*        pExplosion;            // 08
		BGSDebris*           pDebris;               // 0C
		std::uint32_t        iDebrisCount;          // 10
		TESModelTextureSwap* pReplacementModel;     // 14
	};
}
