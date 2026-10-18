#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/C/CNonBlockingQueue.h"
#include "RE/C/CPointerList.h"
#include "RE/L/LEAPCORE_Command.h"

namespace RE
{
	class LEAPCORE_CCommandManager
	{
	public:
		// members
		CNonBlockingQueue<LEAPCORE_Command*>              m_CommandRegQueue;  // 00?
		CPointerList<LEAPCORE_Command, 16, 4294967295, 4> m_lstCommands;      // 08?
	};
}
