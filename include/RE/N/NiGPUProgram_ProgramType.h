#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiGPUProgram_ProgramType : std::int32_t
	{
		kPROGRAM_VERTEX = 0x0,
		kPROGRAM_VERTEX_CLIPPING_PLANES = 0x1,
		kPROGRAM_PIXEL = 0x2,
		kPROGRAM_MAX = 0x3,
	};
}
