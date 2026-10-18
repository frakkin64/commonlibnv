#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkStreamWriter.h"
#include "RE/H/hkStreamWriter_SeekWhence.h"

namespace RE
{
	class hkBufferedStreamWriter :
		public hkStreamWriter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkBufferedStreamWriter };
		static constexpr auto VTABLE{ VTABLE::hkBufferedStreamWriter };

		// override (hkStreamWriter)
		virtual ~hkBufferedStreamWriter() = default;                                            // 00
		virtual std::int32_t write(const void* a_arg1, std::int32_t a_arg2) override;           // 04
		virtual void flush() override;                                                          // 05
		virtual hkResult seek(std::int32_t offset, hkStreamWriter_SeekWhence whence) override;  // 07

		// members
		hkStreamWriter* m_stream;       // 08
		char*           m_buf;          // 0C
		std::int32_t    m_bufSize;      // 10?
		std::int32_t    m_bufCapacity;  // 14?
		hkBool          m_ownBuffer;    // 18?
		std::uint8_t    pad19[0x3];     // 19
	};
}
