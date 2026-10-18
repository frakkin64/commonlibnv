#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class OBJ_TREE
	{
	public:
		void Endian()
		{
			using func_t = decltype(&OBJ_TREE::Endian);
			static REL::Relocation<func_t> func{ Offsets::OBJ_TREE::Endian };
			func(this);
		}

	public:
		// members
		float        fCurveScalar;         // 00
		float        fMinimumLeafAngle;    // 04
		float        fMaximumLeafAngle;    // 08
		float        fBranchDimming;       // 0C
		float        fLeafDimming;         // 10
		std::int32_t iCanopyShadowRadius;  // 14
		float        fRockSpeed;           // 18
		float        fRustleSpeed;         // 1C
	};
	static_assert(sizeof(OBJ_TREE) == 0x20);
}
