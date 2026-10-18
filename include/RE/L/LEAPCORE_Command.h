#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/L/LEAPCORE_ECommandType.h"

namespace RE
{
	class LEAPCORE_ICommandSink;

	class LEAPCORE_Command
	{
	public:
		// members
		LEAPCORE_ECommandType  nCmdType;   // 00?
		std::uint32_t          nCmdSet;    // 04?
		std::uint32_t          nCommand;   // 08?
		LEAPCORE_ICommandSink* pCmdSink;   // 0C?
		std::uint8_t           pParams[];  // 10?
	};
}
