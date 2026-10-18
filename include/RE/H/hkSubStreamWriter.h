#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkResult.h"
#include "RE/H/hkStreamWriter.h"
#include "RE/H/hkStreamWriter_SeekWhence.h"

namespace RE
{
	class hkSubStreamWriter :
		public hkStreamWriter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkSubStreamWriter };
		static constexpr auto VTABLE{ VTABLE::hkSubStreamWriter };

		// override (hkStreamWriter)
		virtual ~hkSubStreamWriter() = default;                                                 // 00
		virtual std::int32_t write(const void* a_arg1, std::int32_t a_arg2) override;           // 04
		virtual void flush() override;                                                          // 05
		virtual hkResult seek(std::int32_t offset, hkStreamWriter_SeekWhence whence) override;  // 07

		// members
		hkStreamWriter* m_childStream;  // 08?
		std::int32_t    m_startOffset;  // 0C?
	};
}
