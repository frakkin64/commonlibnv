#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BS_TASK_STATE.h"
#include "RE/Q/QueuedModel.h"

namespace RE
{
	class TESObjectREFR;
	class TESObjectTREE;

	class QueuedTreeModel :
		public QueuedModel  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::QueuedTreeModel };
		static constexpr auto VTABLE{ VTABLE::QueuedTreeModel };

		// override (QueuedModel)
		virtual ~QueuedTreeModel() = default;                                                   // 00
		virtual void Run() override;                                                            // 01
		virtual void Finish() override;                                                         // 02
		virtual void Cancel(BS_TASK_STATE aePreviousState, void* apTaskOwner) override;         // 03
		virtual bool GetDescription(char* apDescription, std::uint32_t aiBufferSize) override;  // 04
		virtual void QueueMe() override;                                                        // 08

		// members
		TESObjectREFR* pRef;   // 48
		TESObjectTREE* pTree;  // 4C
	};
}
