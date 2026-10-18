#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"

namespace RE
{
	class RagdollFeedbackData
	{
	public:
		class RagdollFeedbackSystemData;

		class RagdollFeedbackSystemData
		{
		public:
			void Endian()
			{
				using func_t = decltype(&RagdollFeedbackSystemData::Endian);
				static REL::Relocation<func_t> func{ Offsets::RagdollFeedbackData_RagdollFeedbackSystemData::Endian };
				func(this);
			}

		public:
			// members
			float         fKeyDynIntrp;     // 00
			float         fHeirGain;        // 04
			float         fPosGain;         // 08
			float         fVelGain;         // 0C
			float         fAccGain;         // 10
			float         fSnapGain;        // 14
			float         fVelDamp;         // 18
			float         fSnapMaxLinVel;   // 1C
			float         fSnapMaxAngVel;   // 20
			float         fSnapMaxLinDist;  // 24
			float         fSnapMaxAngDist;  // 28
			float         fPosMaxLinVel;    // 2C
			float         fPosMaxAngVel;    // 30
			std::uint32_t uiImpulseMult1;   // 34
			std::uint32_t uiImpulseMult2;   // 38
		};
		static_assert(sizeof(RagdollFeedbackSystemData) == 0x3C);

		// members
		bool                                           bEnabled;         // 00
		std::uint8_t                                   pad01[0x3];       // 01
		RagdollFeedbackData::RagdollFeedbackSystemData SystemData;       // 04
		BSSimpleArray<std::int16_t, 1024>              DynamicBoneIdxA;  // 40
	};
}
