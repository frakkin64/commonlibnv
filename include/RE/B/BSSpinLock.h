#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSSpinLock
	{
	public:
		void Lock(char const* apName)
		{
			using func_t = decltype(&BSSpinLock::Lock);
			static REL::Relocation<func_t> func{ Offsets::BSSpinLock::Lock };
			func(this, apName);
		}

	public:
		// members
		volatile std::uint32_t uiOwningThread;  // 00
		std::uint32_t          uiLockCount;     // 04
	};
}
