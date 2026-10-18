#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BS_TASK_STATE.h"
#include "RE/N/NiPointer.h"
#include "RE/Q/QueuedKF.h"

namespace RE
{
	class AnimIdle;
	class TESObjectREFR;

	class QueuedAnimIdle :
		public QueuedKF  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedAnimIdle };
		static constexpr auto VTABLE{ VTABLE::QueuedAnimIdle };

		// override (QueuedKF)
		virtual ~QueuedAnimIdle() = default;                                                    // 00
		virtual void Cancel(BS_TASK_STATE aePreviousState, void* apTaskOwner) override;         // 03
		virtual bool GetDescription(char* apDescription, std::uint32_t aiBufferSize) override;  // 04
		virtual void PostProcess() override;                                                    // 05
		virtual void QueueMe() override;                                                        // 08
		virtual void CheckFinished() override;                                                  // 0A

		// members
		TESObjectREFR*      pQueuedForRef;  // 38
		NiPointer<AnimIdle> spAnimIdle;     // 3C
	};
}
