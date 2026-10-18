#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) hkBaseObject
	{
	public:
		static constexpr auto RTTI{ RTTI::hkBaseObject };
		static constexpr auto VTABLE{ VTABLE::hkBaseObject };

		// add
		virtual ~hkBaseObject() = default;  // 00
	};
}
