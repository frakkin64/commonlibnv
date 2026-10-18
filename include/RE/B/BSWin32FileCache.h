#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSFileCache.h"

namespace RE
{
	class BSWin32FileCache :
		public BSFileCache  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSWin32FileCache };
		static constexpr auto VTABLE{ VTABLE::BSWin32FileCache };

		// members
		void* pfnCompletionCallback;  // 64?
	};
}
