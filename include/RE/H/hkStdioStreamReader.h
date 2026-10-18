#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkBool.h"
#include "RE/H/hkResult.h"
#include "RE/H/hkSeekableStreamReader.h"
#include "RE/H/hkStreamReader_SeekWhence.h"

namespace RE
{
	class hkStdioStreamReader :
		public hkSeekableStreamReader  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkStdioStreamReader };
		static constexpr auto VTABLE{ VTABLE::hkStdioStreamReader };

		// override (hkSeekableStreamReader)
		virtual ~hkStdioStreamReader() = default;                                      // 00
		virtual std::int32_t read(void* buf, std::int32_t nbytes);                     // 04
		virtual hkResult seek(std::int32_t offset, hkStreamReader_SeekWhence whence);  // 0A

		hkStdioStreamReader* ctor(char const* nameIn)
		{
			using func_t = hkStdioStreamReader*(__thiscall*)(hkStdioStreamReader*, char const*);
			static REL::Relocation<func_t> func{ Offsets::hkStdioStreamReader::ctor };
			return func(this, nameIn);
		}

	public:
		// members
		_iobuf*      m_handle;    // 0C
		hkBool       m_isOk;      // 10?
		std::uint8_t pad11[0x3];  // 11
	};
}
