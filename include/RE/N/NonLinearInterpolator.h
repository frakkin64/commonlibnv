#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NonLinearInterpolator
	{
	public:
		bool Setup(float afStart, float afEnd, float afTime)
		{
			using func_t = decltype(&NonLinearInterpolator::Setup);
			static REL::Relocation<func_t> func{ Offsets::NonLinearInterpolator::Setup };
			return func(this, afStart, afEnd, afTime);
		}

		float GetCurrent()
		{
			using func_t = decltype(&NonLinearInterpolator::GetCurrent);
			static REL::Relocation<func_t> func{ Offsets::NonLinearInterpolator::GetCurrent };
			return func(this);
		}

	public:
		// members
		float fPercentages[100];  // 00
		float fCurrent;           // 190
		float fEnd;               // 194
		float fRemainingTime;     // 198
		float fTotalTime;         // 19C
	};
}
