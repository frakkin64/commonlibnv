#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BS_TASK_STATE.h"
#include "RE/I/IOTask.h"

namespace RE
{
	class EXTERIOR_CELL_DATA;
	class ExteriorCellLoader;

	class ExteriorCellLoaderTask :
		public IOTask  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExteriorCellLoaderTask };
		static constexpr auto VTABLE{ VTABLE::ExteriorCellLoaderTask };

		// override (IOTask)
		virtual ~ExteriorCellLoaderTask() = default;                                            // 00
		virtual void Run() override;                                                            // 01
		virtual void Finish() override;                                                         // 02
		virtual void Cancel(BS_TASK_STATE aePreviousState, void* apTaskOwner) override;         // 03
		virtual bool GetDescription(char* apDescription, std::uint32_t aiBufferSize) override;  // 04
		virtual void PostProcess() override;                                                    // 05

		// members
		ExteriorCellLoader* pLoader;    // 18
		EXTERIOR_CELL_DATA* pCellData;  // 1C
	};
	static_assert(sizeof(ExteriorCellLoaderTask) == 0x20);
}
