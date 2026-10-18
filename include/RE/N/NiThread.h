#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiProcessorAffinity.h"
#include "RE/N/NiThread_Priority.h"

namespace RE
{
	class NiThreadProcedure;

	// not confirmed: no named code in the executable refers to this type
	class __declspec(novtable) NiThread
	{
	public:
		using Priority = NiThread_Priority;

		enum class Status : std::int32_t
		{
			kSTOPPED = 0x0,
			kSTOPPING = 0x1,
			kRUNNING = 0x2,
		};

		virtual ~NiThread() = default;  // 00

		// members
		std::uint32_t             m_iThreadID;      // 04?
		NiProcessorAffinity       m_kAffinity;      // 08?
		std::uint32_t             m_uiStackSize;    // 10?
		NiThreadProcedure*        m_pkProcedure;    // 14?
		NiThread_Priority         m_ePriority;      // 18?
		volatile NiThread::Status m_eStatus;        // 1C?
		volatile std::uint32_t    m_uiReturnValue;  // 20?
		void*                     m_hThread;        // 24?
		char*                     m_pcName;         // 28?
	};
}
