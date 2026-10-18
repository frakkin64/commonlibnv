#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/Q/QueuedKF.h"

namespace RE
{
	class Animation;
	class QueuedReplacementKFList;

	class QueuedReplacementKF :
		public QueuedKF  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedReplacementKF };
		static constexpr auto VTABLE{ VTABLE::QueuedReplacementKF };

		// override (QueuedKF)
		virtual ~QueuedReplacementKF() = default;                                               // 00
		virtual void Finish() override;                                                         // 02
		virtual bool GetDescription(char* apDescription, std::uint32_t aiBufferSize) override;  // 04
		virtual void PostProcess() override;                                                    // 05

		// members
		Animation*               pAnim;   // 38
		QueuedReplacementKFList* pOwner;  // 3C
	};
}
