#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTPointerMap.h"

namespace RE
{
	class NumericIDBufferMap :
		public NiTPointerMap<std::uint32_t, void*>  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NumericIDBufferMap };
		static constexpr auto VTABLE{ VTABLE::NumericIDBufferMap };

		// override (NiTPointerMap<std::uint32_t, void*>)
		virtual ~NumericIDBufferMap() = default;  // 00
	};
	static_assert(sizeof(NumericIDBufferMap) == 0x10);
}
