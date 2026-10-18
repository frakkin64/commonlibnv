#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"

namespace RE
{
	class FootIK_DATA
	{
	public:
		class FootIKSystem_DATA;
		class FootIK_Leg_DATA;

		class FootIKSystem_DATA
		{
		public:
			// members
			float fOnOffGain;             // 00?
			float fGroundAscendingGain;   // 04?
			float fGroundDescendingGain;  // 08?
			float fFootRaisedGain;        // 0C?
			float fFootPlantedGain;       // 10?
			float fRaycastDistUp;         // 14?
			float fRaycastDistDown;       // 18?
		};

		class FootIK_Leg_DATA
		{
		public:
			// members
			std::int16_t sHipIndex;                  // 00
			std::int16_t sKneeIndex;                 // 02
			std::int16_t sAnkleIndex;                // 04
			bool         bAlignFootToTerrain;        // 06
			std::uint8_t pad07;                      // 07
			float        fMinAnkleHeightMS;          // 08
			float        fMaxAnkleHeightMS;          // 0C
			float        fFootPlantedAnkleHeightMS;  // 10
			float        fFootRaisedAnkleHeightMS;   // 14
			float        fCosMaxKneeAngle;           // 18
			float        fCosMinKneeAngle;           // 1C
			float        fKneeAxis[3];               // 20
			float        fFootEndLocLS[3];           // 2C
		};
		static_assert(sizeof(FootIK_Leg_DATA) == 0x38);

		void Copy(FootIK_DATA const& arData)
		{
			using func_t = decltype(&FootIK_DATA::Copy);
			static REL::Relocation<func_t> func{ Offsets::FootIK_DATA::Copy };
			func(this, arData);
		}

		FootIK_DATA* ctor()
		{
			using func_t = FootIK_DATA*(__thiscall*)(FootIK_DATA*);
			static REL::Relocation<func_t> func{ Offsets::FootIK_DATA::ctor };
			return func(this);
		}

	public:
		// members
		bool                                              bEnabled;         // 00
		std::uint8_t                                      pad01[0x3];       // 01
		FootIK_DATA::FootIKSystem_DATA                    SystemData;       // 04
		BSSimpleArray<char const*, 1024>                  LegSystemsNameA;  // 20
		BSSimpleArray<FootIK_DATA::FootIK_Leg_DATA, 1024> LegSystemsA;      // 30
	};
}
