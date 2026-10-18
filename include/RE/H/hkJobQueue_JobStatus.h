#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkJobQueue_JobStatus : std::int32_t
	{
		kJOB_INVALID = -1,
		kGOT_NEXT_JOB = 0x0,
		kNO_JOBS_AVAILABLE = 0x1,
		kALL_JOBS_FINISHED = 0x2,
		kJOBS_AVAILABLE_BUT_NOT_FOR_CURRENT_ELF = 0x3,
	};
}
