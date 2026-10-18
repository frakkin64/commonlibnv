#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkSerializeUtil_ErrorDetails_ErrorID : std::int32_t
	{
		kERRORID_NONE = 0x0,
		kERRORID_READ_FAILED = 0x1,
		kERRORID_UNSUPPORTED_FORMAT = 0x2,
		kERRORID_PACKFILE_PLATFORM = 0x3,
		kERRORID_VERSIONING_FAILED = 0x4,
		kERRORID_NONHEAP_OBJECT = 0x5,
		kERRORID_LOAD_FAILED = 0x6,
		kERRORID_DEPRECATED_NOT_INITIALIZED = 0x7,
		kERRORID_MAX_ID = 0x8,
	};
}
