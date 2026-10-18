#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BS_TASK_STATE.h"
#include "RE/Q/QueuedFile.h"

namespace RE
{
	class Animation;

	class QueuedReplacementKFList :
		public QueuedFile  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedReplacementKFList };
		static constexpr auto VTABLE{ VTABLE::QueuedReplacementKFList };

		// override (QueuedFile)
		virtual ~QueuedReplacementKFList() = default;                                    // 00
		virtual void Cancel(BS_TASK_STATE aePreviousState, void* apTaskOwner) override;  // 03
		virtual void CheckFinished() override;                                           // 0A

		void NotifyChildFinishedPostProcessing()
		{
			using func_t = decltype(&QueuedReplacementKFList::NotifyChildFinishedPostProcessing);
			static REL::Relocation<func_t> func{ Offsets::QueuedReplacementKFList::NotifyChildFinishedPostProcessing };
			func(this);
		}

	public:
		// members
		Animation*    pAnim;                      // 28
		std::uint32_t iPostProcessingChildCount;  // 2C
		std::uint32_t iPostProcessedChildCount;   // 30
		std::uint32_t pad34;                      // 34
	};
	static_assert(sizeof(QueuedReplacementKFList) == 0x38);
}
