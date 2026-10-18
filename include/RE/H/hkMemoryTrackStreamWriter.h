#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkResult.h"
#include "RE/H/hkStreamWriter.h"
#include "RE/H/hkStreamWriter_SeekWhence.h"

namespace RE
{
	class hkMemoryTrack;

	class hkMemoryTrackStreamWriter :
		public hkStreamWriter  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkMemoryTrackStreamWriter };
		static constexpr auto VTABLE{ VTABLE::hkMemoryTrackStreamWriter };

		enum class TrackOwnership : std::int32_t
		{
			kTRACK_TAKE = 0x0,
			kTRACK_BORROW = 0x1,
		};

		// override (hkStreamWriter)
		virtual ~hkMemoryTrackStreamWriter() = default;                                         // 00
		virtual std::int32_t write(const void* a_arg1, std::int32_t a_arg2) override;           // 04
		virtual hkResult seek(std::int32_t offset, hkStreamWriter_SeekWhence whence) override;  // 07

		// add
		virtual void clear();  // 09

		// members
		hkMemoryTrack*                            m_track;      // 08
		hkMemoryTrackStreamWriter::TrackOwnership m_ownerShip;  // 0C?
	};
}
