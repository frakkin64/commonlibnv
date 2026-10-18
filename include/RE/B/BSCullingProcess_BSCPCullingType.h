#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BSCullingProcess_BSCPCullingType : std::int32_t
	{
		kBSCP_CULL_NORMAL = 0x0,
		kBSCP_CULL_ALLPASS = 0x1,
		kBSCP_CULL_ALLFAIL = 0x2,
		kBSCP_CULL_IGNOREMULTIBOUNDS = 0x3,
		kBSCP_CULL_FORCEMULTIBOUNDSNOUPDATE = 0x4,
	};
}
