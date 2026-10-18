#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class BSCoreMessage_MsgStyle : std::int32_t
	{
		kMS_ASSERT = 0x0,
		kMS_WARNING = 0x1,
		kMS_PROGFLOW = 0x2,
		kMS_INITFLOW = 0x3,
		kMS_DEBUGSTRING = 0x4,
		kMS_OK = 0x5,
		kMS_OKCANCEL = 0x6,
		kMS_YESNO = 0x7,
		kMS_YESNOCANCEL = 0x8,
		kMS_RETRYCANCEL = 0x9,
		kMS_NOYES = 0xA,
	};
}
