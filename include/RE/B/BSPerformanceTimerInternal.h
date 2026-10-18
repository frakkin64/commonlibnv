#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class BSPerformanceTimerInternal
	{
	public:
		class ThreadTimeData;

		enum class PauseStates : std::int32_t
		{
			kUNPAUSED = 0x0,
			kPAUSING = 0x1,
			kPAUSED = 0x2,
			kUNPAUSING = 0x3,
		};

		class ThreadTimeData
		{
		public:
			// members
			std::uint32_t uMinTime;           // 00?
			std::uint32_t uMaxTime;           // 04?
			std::uint32_t uTotalTime;         // 08?
			std::uint32_t uMinTimeOneFrame;   // 0C?
			std::uint32_t uMaxTimeOneFrame;   // 10?
			std::uint32_t uTimeThisFrame;     // 14?
			std::int64_t  StartTime;          // 18?
			std::uint32_t uNumRuns;           // 20?
			std::uint32_t uNumRunsThisFrame;  // 24?
			std::uint32_t aTimeBuffer[1];     // 28?
			bool          bFullBuffer;        // 2C?
			std::uint8_t  pad2D[0x3];         // 2D
			std::int32_t  iBufferIdx;         // 30?
			std::uint32_t uNumFrames;         // 34?
			std::int32_t  iDepth;             // 38?
			std::uint32_t pad3C;              // 3C
		};

		// members
		char*                                      pSystem;           // 00?
		char*                                      pName;             // 04?
		BSPerformanceTimerInternal::ThreadTimeData TimeData[6];       // 08?
		bool                                       bGlobalReset;      // 188?
		bool                                       bDisplayPerFrame;  // 189?
		std::uint16_t                              pad18A;            // 18A
		BSPerformanceTimerInternal::PauseStates    PauseState;        // 18C?
	};
}
