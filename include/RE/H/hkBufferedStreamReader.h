#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkResult.h"
#include "RE/H/hkStreamReader.h"
#include "RE/H/hkStreamReader_SeekWhence.h"

namespace RE
{
	class hkBufferedStreamReader :
		public hkStreamReader  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkBufferedStreamReader };
		static constexpr auto VTABLE{ VTABLE::hkBufferedStreamReader };

		class Buffer;

		class Buffer
		{
		public:
			// members
			char*        begin;      // 00?
			std::int32_t current;    // 04?
			std::int32_t size;       // 08?
			std::int32_t capacity;   // 0C?
			std::int32_t markPos;    // 10?
			std::int32_t markLimit;  // 14?
		};

		// override (hkStreamReader)
		virtual ~hkBufferedStreamReader() = default;                                            // 00
		virtual std::int32_t read(void* a_arg1, std::int32_t a_arg2) override;                  // 04
		virtual std::int32_t skip(std::int32_t nbytes) override;                                // 05
		virtual hkResult setMark(std::int32_t markLimit) override;                              // 07
		virtual hkResult rewindToMark() override;                                               // 08
		virtual hkResult seek(std::int32_t offset, hkStreamReader_SeekWhence whence) override;  // 0A

		// add
		virtual hkResult refillBuffer();  // 0C

		hkBufferedStreamReader* ctor(hkStreamReader* s, std::int32_t bufSize)
		{
			using func_t = hkBufferedStreamReader*(__thiscall*)(hkBufferedStreamReader*, hkStreamReader*, std::int32_t);
			static REL::Relocation<func_t> func{ Offsets::hkBufferedStreamReader::ctor };
			return func(this, s, bufSize);
		}

	public:
		// members
		hkStreamReader*                m_stream;  // 08
		hkBufferedStreamReader::Buffer m_buf;     // 0C
	};
}
