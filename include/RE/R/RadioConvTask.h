#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/Q/QueuedFileEntry.h"

namespace RE
{
	class FalloutRadio_FORadioStation;

	class RadioConvTask :
		public QueuedFileEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::RadioConvTask };
		static constexpr auto VTABLE{ VTABLE::RadioConvTask };

		// override (QueuedFileEntry)
		virtual ~RadioConvTask() = default;                                                     // 00
		virtual void Run() override;                                                            // 01
		virtual void Finish() override;                                                         // 02
		virtual bool GetDescription(char* apDescription, std::uint32_t aiBufferSize) override;  // 04
		virtual std::uint8_t GetFileIndex() override;                                           // 0B

		// add
		virtual void Cancel();  // 0C

		// members
		FalloutRadio_FORadioStation* pStation;  // 30
		std::uint32_t                pad34;     // 34
	};
	static_assert(sizeof(RadioConvTask) == 0x38);
}
