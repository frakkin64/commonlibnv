#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkResult.h"
#include "RE/H/hkStreamWriter.h"
#include "RE/H/hkStreamWriter_SeekWhence.h"

namespace RE
{
	class hkOffsetOnlyStreamWriter :
		public hkStreamWriter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkOffsetOnlyStreamWriter };
		static constexpr auto VTABLE{ VTABLE::hkOffsetOnlyStreamWriter };

		// override (hkStreamWriter)
		virtual ~hkOffsetOnlyStreamWriter() = default;                                          // 00
		virtual std::int32_t write(const void* a_arg1, std::int32_t a_arg2) override;           // 04
		virtual hkResult seek(std::int32_t offset, hkStreamWriter_SeekWhence whence) override;  // 07

		// members
		std::int32_t m_offset;     // 08
		std::int32_t m_eofOffset;  // 0C?
	};
}
