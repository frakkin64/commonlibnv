#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class __declspec(novtable) hkDataRefCounted
	{
	public:
		static constexpr auto RTTI{ RTTI::hkDataRefCounted };
		static constexpr auto VTABLE{ VTABLE::hkDataRefCounted };

		// add
		virtual ~hkDataRefCounted() = default;  // 00

		// members
		std::uint16_t m_memSize;        // 04
		std::int16_t  m_externalCount;  // 06?
		std::int32_t  m_count;          // 08?
	};
}
