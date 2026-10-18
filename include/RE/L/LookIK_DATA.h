#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"

namespace RE
{
	class LookIK_DATA
	{
	public:
		class LookIK_Head_DATA;

		class LookIK_Head_DATA
		{
		public:
			// members
			std::int16_t sNeckIdx;           // 00
			std::int16_t sHeadIdx;           // 02
			float        fForwardHeadLS[3];  // 04
			float        fForwardNeckMS[3];  // 10
			float        fLimitConeAngle;    // 1C
			float        fLookAtTargetGain;  // 20
			float        fLookAtGain;        // 24
		};
		static_assert(sizeof(LookIK_Head_DATA) == 0x28);

		void Copy(LookIK_DATA const& arData)
		{
			using func_t = decltype(&LookIK_DATA::Copy);
			static REL::Relocation<func_t> func{ Offsets::LookIK_DATA::Copy };
			func(this, arData);
		}

		LookIK_DATA* ctor()
		{
			using func_t = LookIK_DATA*(__thiscall*)(LookIK_DATA*);
			static REL::Relocation<func_t> func{ Offsets::LookIK_DATA::ctor };
			return func(this);
		}

	public:
		// members
		bool                                               bEnabled;          // 00
		std::uint8_t                                       pad01[0x3];        // 01
		BSSimpleArray<char const*, 1024>                   HeadSystemsNameA;  // 04
		BSSimpleArray<LookIK_DATA::LookIK_Head_DATA, 1024> HeadSystemsA;      // 14
	};
}
