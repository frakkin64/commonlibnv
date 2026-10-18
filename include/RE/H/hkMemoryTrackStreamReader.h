#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkResult.h"
#include "RE/H/hkStreamReader.h"
#include "RE/H/hkStreamReader_SeekWhence.h"

namespace RE
{
	class hkMemoryTrack;

	class hkMemoryTrackStreamReader :
		public hkStreamReader  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMemoryTrackStreamReader };
		static constexpr auto VTABLE{ VTABLE::hkMemoryTrackStreamReader };

		enum class MemoryType : std::int32_t
		{
			kMEMORY_COPY = 0x0,
			kMEMORY_TAKE = 0x1,
			kMEMORY_INPLACE = 0x2,
		};

		// override (hkStreamReader)
		virtual ~hkMemoryTrackStreamReader() = default;                                         // 00
		virtual std::int32_t read(void* a_arg1, std::int32_t a_arg2) override;                  // 04
		virtual std::int32_t skip(std::int32_t nbytes) override;                                // 05
		virtual hkResult setMark(std::int32_t markLimit) override;                              // 07
		virtual hkResult rewindToMark() override;                                               // 08
		virtual hkResult seek(std::int32_t offset, hkStreamReader_SeekWhence whence) override;  // 0A

		// members
		const hkMemoryTrack*                  m_track;    // 08
		std::int32_t                          m_offset;   // 0C
		hkMemoryTrackStreamReader::MemoryType m_memType;  // 10
	};
}
