#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkResult.h"
#include "RE/H/hkStreamReader.h"
#include "RE/H/hkStreamReader_SeekWhence.h"

namespace RE
{
	class hkMemoryStreamReader :
		public hkStreamReader  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMemoryStreamReader };
		static constexpr auto VTABLE{ VTABLE::hkMemoryStreamReader };

		enum class MemoryType : std::int32_t
		{
			kMEMORY_COPY = 0x0,
			kMEMORY_TAKE = 0x1,
			kMEMORY_INPLACE = 0x2,
		};

		// override (hkStreamReader)
		virtual ~hkMemoryStreamReader() = default;                                              // 00
		virtual std::int32_t read(void* a_arg1, std::int32_t a_arg2) override;                  // 04
		virtual std::int32_t skip(std::int32_t nbytes) override;                                // 05
		virtual hkResult setMark(std::int32_t markLimit) override;                              // 07
		virtual hkResult rewindToMark() override;                                               // 08
		virtual hkResult seek(std::int32_t offset, hkStreamReader_SeekWhence whence) override;  // 0A

		hkMemoryStreamReader* ctor(void const* mem, std::int32_t memSize, hkMemoryStreamReader::MemoryType mt)
		{
			using func_t = hkMemoryStreamReader*(__thiscall*)(hkMemoryStreamReader*, void const*, std::int32_t, hkMemoryStreamReader::MemoryType);
			static REL::Relocation<func_t> func{ Offsets::hkMemoryStreamReader::ctor };
			return func(this, mem, memSize, mt);
		}

	public:
		// members
		char*                            m_buf;         // 08
		std::int32_t                     m_bufCurrent;  // 0C
		std::int32_t                     m_bufSize;     // 10
		std::int32_t                     m_markPos;     // 14
		hkMemoryStreamReader::MemoryType m_memType;     // 18
	};
}
