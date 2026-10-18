#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkSocket_SOCKET_EVENTS : std::int32_t
	{
		kSOCKET_NOEVENTS = 0x0,
		kSOCKET_CAN_READ = 0x1,
		kSOCKET_CAN_WRITE = 0x2,
		kSOCKET_CONNECT = 0x4,
		kSOCKET_CLOSED = 0x8,
		kSOCKET_ALLEVENTS = 0xFF,
	};
}
