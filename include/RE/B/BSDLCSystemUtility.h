#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSimpleList.h"

namespace RE
{
	class BSDLCSystemUtility
	{
	public:
		void UnmountDLC()
		{
			using func_t = decltype(&BSDLCSystemUtility::UnmountDLC);
			static REL::Relocation<func_t> func{ Offsets::BSDLCSystemUtility::UnmountDLC };
			func(this);
		}

	public:
		// members
		std::uint32_t       m_state;           // 00?
		void*               m_pOfferCountCtx;  // 04?
		void*               m_pOfferListCtx;   // 08?
		BSSimpleList<void*> m_validDLC;        // 0C?
		BSSimpleList<void*> m_corruptDLC;      // 14?
		BSSimpleList<char*> m_mountedFiles;    // 1C?
	};
}
