#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkMemoryAllocator;

	class hkContainerHeapAllocator
	{
	public:
		hkMemoryAllocator& get(void const* __formal)
		{
			using func_t = decltype(&hkContainerHeapAllocator::get);
			static REL::Relocation<func_t> func{ Offsets::hkContainerHeapAllocator::get };
			return func(this, __formal);
		}
	};
}
