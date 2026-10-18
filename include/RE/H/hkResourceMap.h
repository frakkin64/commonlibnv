#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkClass;

	class __declspec(novtable) hkResourceMap
	{
	public:
		static constexpr auto RTTI{ RTTI::hkResourceMap };
		static constexpr auto VTABLE{ VTABLE::hkResourceMap };

		// add
		virtual void* findObjectByName(const char* a_arg1, const hkClass** a_arg2);  // 00
		virtual ~hkResourceMap() = default;                                          // 01
	};
	static_assert(sizeof(hkResourceMap) == 0x4);
}
