#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkServerProcessHandler;
	class hkSocket;

	class hkVisualDebuggerClient
	{
	public:
		// members
		hkSocket*               m_socket;          // 00?
		hkServerProcessHandler* m_processHandler;  // 04?
	};
}
