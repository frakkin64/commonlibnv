#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkSemaphore
	{
	public:
		hkSemaphore* ctor(std::int32_t initialCount, std::int32_t maxCount)
		{
			using func_t = hkSemaphore*(__thiscall*)(hkSemaphore*, std::int32_t, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::hkSemaphore::ctor };
			return func(this, initialCount, maxCount);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(hkSemaphore*);
			static REL::Relocation<func_t> func{ Offsets::hkSemaphore::dtor };
			func(this);
		}

		void release(std::int32_t count)
		{
			using func_t = decltype(&hkSemaphore::release);
			static REL::Relocation<func_t> func{ Offsets::hkSemaphore::release };
			func(this, count);
		}

	public:
		// members
		void* m_semaphore;  // 00
	};
}
