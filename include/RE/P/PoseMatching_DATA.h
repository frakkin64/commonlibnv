#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSStringT.h"

namespace RE
{
	class PoseMatching_DATA
	{
	public:
		class PoseMatching_System_DATA;

		class PoseMatching_System_DATA
		{
		public:
			void Endian()
			{
				using func_t = decltype(&PoseMatching_System_DATA::Endian);
				static REL::Relocation<func_t> func{ Offsets::PoseMatching_DATA_PoseMatching_System_DATA::Endian };
				func(this);
			}

		public:
			// members
			std::int16_t sRootMatchingBone;     // 00
			std::int16_t sMatchingBone2;        // 02
			std::int16_t sMatchingBone3;        // 04
			bool         bDisableOnActivate;    // 06
			std::uint8_t pad07;                 // 07
			float        fMotorStrength;        // 08
			float        fDelayTime;            // 0C
			float        fErrorAllowance;       // 10
			float        fDisableDisplacement;  // 14
		};
		static_assert(sizeof(PoseMatching_System_DATA) == 0x18);

		// members
		bool                                        bEnabled;     // 00
		std::uint8_t                                pad01[0x3];   // 01
		BSStringT<char>                             PSAFilename;  // 04
		PoseMatching_DATA::PoseMatching_System_DATA SystemData;   // 0C
	};
}
