#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSSemaphore
	{
	public:
		std::int32_t Wait()
		{
			using func_t = decltype(&BSSemaphore::Wait);
			static REL::Relocation<func_t> func{ Offsets::BSSemaphore::Wait };
			return func(this);
		}

		std::int32_t Signal()
		{
			using func_t = decltype(&BSSemaphore::Signal);
			static REL::Relocation<func_t> func{ Offsets::BSSemaphore::Signal };
			return func(this);
		}

		BSSemaphore* ctor()
		{
			using func_t = BSSemaphore*(__thiscall*)(BSSemaphore*);
			static REL::Relocation<func_t> func{ Offsets::BSSemaphore::ctor };
			return func(this);
		}

		BSSemaphore* ctor(std::int32_t aiCount, std::int32_t aiMaxCount)
		{
			using func_t = BSSemaphore*(__thiscall*)(BSSemaphore*, std::int32_t, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::BSSemaphore::ctor_1 };
			return func(this, aiCount, aiMaxCount);
		}

	public:
		// members
		volatile std::int32_t iCount;      // 00
		void*                 hSemaphore;  // 04
		std::int32_t          iMaxCount;   // 08
	};
}
