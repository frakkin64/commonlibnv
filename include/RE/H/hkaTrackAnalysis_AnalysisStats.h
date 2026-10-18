#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkaTrackAnalysis_AnalysisStats
	{
	public:
		void displayReport()
		{
			using func_t = decltype(&hkaTrackAnalysis_AnalysisStats::displayReport);
			static REL::Relocation<func_t> func{ Offsets::hkaTrackAnalysis_AnalysisStats::displayReport };
			func(this);
		}

	public:
		// members
		std::uint32_t m_staticPosDOF;      // 00?
		std::uint32_t m_staticRotDOF;      // 04?
		std::uint32_t m_staticSclDOF;      // 08?
		std::uint32_t m_staticFloatDOF;    // 0C?
		std::uint32_t m_clearPosDOF;       // 10?
		std::uint32_t m_clearRotDOF;       // 14?
		std::uint32_t m_clearSclDOF;       // 18?
		std::uint32_t m_dynamicPosDOF;     // 1C?
		std::uint32_t m_dynamicRotDOF;     // 20?
		std::uint32_t m_dynamicSclDOF;     // 24?
		std::uint32_t m_dynamicFloatDOF;   // 28?
		std::uint32_t m_numTransformDOFS;  // 2C?
		std::uint32_t m_numFloatDOFS;      // 30?
		float         m_ratio;             // 34?
	};
}
