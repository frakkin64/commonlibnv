#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkDataObject_Value.h"
#include "RE/H/hkDataRefCounted.h"

namespace RE
{
	class hkDataArrayImpl :
		public hkDataRefCounted  // 00
	{
	public:
		void set(std::int32_t index, hkDataObject_Value val)
		{
			using func_t = decltype(&hkDataArrayImpl::set);
			static REL::Relocation<func_t> func{ Offsets::hkDataArrayImpl::set };
			func(this, index, val);
		}
	};
	static_assert(sizeof(hkDataArrayImpl) == 0xC);
}
