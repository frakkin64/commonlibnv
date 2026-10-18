#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSSemaphore.h"
#include "RE/B/BSSpinLock.h"
#include "RE/B/BSTaskletGroupData.h"

namespace RE
{
	class BSWin32TaskletGroupData :
		public BSTaskletGroupData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSWin32TaskletGroupData };
		static constexpr auto VTABLE{ VTABLE::BSWin32TaskletGroupData };

		// members
		BSSemaphore   CompletionSemaphore;  // 08?
		BSSpinLock    GroupDataLock;        // 14?
		bool          bAttached;            // 1C?
		bool          bAllowTaskAttach;     // 1D?
		bool          bCancelled;           // 1E?
		std::uint8_t  pad1F;                // 1F
		std::uint32_t uiPriority;           // 20?
		std::uint32_t uiAttached;           // 24?
		std::uint32_t uiCompleted;          // 28?
		std::uint32_t uiMaxConcurrent;      // 2C
		std::uint32_t uiCurrConcurrent;     // 30?
	};
}
