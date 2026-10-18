#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/I/ILeapLock.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class CCriticalSectionLock :
		public ILeapLock  // 00
	{
	public:
		// members
		_RTL_CRITICAL_SECTION m_critsec;         // 04?
		std::int32_t          m_bInitialized;    // 20?
		char                  m_szLockName[32];  // 24?
		char                  m_szCreator[128];  // 44?
	};
}
