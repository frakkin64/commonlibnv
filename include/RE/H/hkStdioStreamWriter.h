#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkStreamWriter.h"
#include "RE/H/hkStreamWriter_SeekWhence.h"

namespace RE
{
	class hkStdioStreamWriter :
		public hkStreamWriter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkStdioStreamWriter };
		static constexpr auto VTABLE{ VTABLE::hkStdioStreamWriter };

		// override (hkStreamWriter)
		virtual ~hkStdioStreamWriter() = default;                                               // 00
		virtual std::int32_t write(const void* a_arg1, std::int32_t a_arg2) override;           // 04
		virtual void flush() override;                                                          // 05
		virtual hkResult seek(std::int32_t offset, hkStreamWriter_SeekWhence whence) override;  // 07

		// add
		virtual hkBool* markSupported(hkBool* a_arg1) const;  // 09

		hkStdioStreamWriter* ctor(char const* nameIn)
		{
			using func_t = hkStdioStreamWriter*(__thiscall*)(hkStdioStreamWriter*, char const*);
			static REL::Relocation<func_t> func{ Offsets::hkStdioStreamWriter::ctor };
			return func(this, nameIn);
		}

	public:
		// members
		_iobuf*      m_handle;    // 08
		hkBool       m_owned;     // 0C?
		std::uint8_t pad0D[0x3];  // 0D
	};
}
