#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkStreamWriter.h"

namespace RE
{
	class hkCrc32StreamWriter :
		public hkStreamWriter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkCrc32StreamWriter };
		static constexpr auto VTABLE{ VTABLE::hkCrc32StreamWriter };

		// override (hkStreamWriter)
		virtual ~hkCrc32StreamWriter() = default;                                      // 00
		virtual std::int32_t write(const void* a_arg1, std::int32_t a_arg2) override;  // 04

		// members
		std::uint32_t m_crc32;  // 08?
	};
}
