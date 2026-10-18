#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleArray.h"

namespace RE
{
	class GrabIK_DATA
	{
	public:
		class GrabIK_Arm_DATA;

		class GrabIK_Arm_DATA
		{
		public:
			// members
			std::int16_t sShoulderIndex;  // 00
			std::int16_t sElbowIndex;     // 02
			std::int16_t sHandIndex;      // 04
		};
		static_assert(sizeof(GrabIK_Arm_DATA) == 0x6);

		void Copy(GrabIK_DATA const& arData)
		{
			using func_t = decltype(&GrabIK_DATA::Copy);
			static REL::Relocation<func_t> func{ Offsets::GrabIK_DATA::Copy };
			func(this, arData);
		}

		GrabIK_DATA* ctor()
		{
			using func_t = GrabIK_DATA*(__thiscall*)(GrabIK_DATA*);
			static REL::Relocation<func_t> func{ Offsets::GrabIK_DATA::ctor };
			return func(this);
		}

	public:
		// members
		bool                                              bEnabled;         // 00
		std::uint8_t                                      pad01[0x3];       // 01
		BSSimpleArray<char const*, 1024>                  ArmSystemsNameA;  // 04
		BSSimpleArray<GrabIK_DATA::GrabIK_Arm_DATA, 1024> ArmSystemsA;      // 14
	};
}
