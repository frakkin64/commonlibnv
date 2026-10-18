#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/L/LEAPCORE_ICommandSink.h"

namespace RE
{
	class ILeapLock;
	class LEAPCORE_CCommandManager;
	class LEAPCORE_IObjectStore;

	class LEAPCORE_CBaseSkin :
		public LEAPCORE_ICommandSink  // 00
	{
	public:
		// members
		void*                     m_pFilter;          // 04?
		ILeapLock*                m_pLeapLock;        // 08?
		LEAPCORE_IObjectStore*    m_pObjectStore;     // 0C?
		LEAPCORE_CCommandManager* m_pCommandManager;  // 10?
		std::uint32_t             m_nGraphThreadID;   // 14?
	};
}
