#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"

namespace RE
{
	class NiTask :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTask };
		static constexpr auto VTABLE{ VTABLE::NiTask };

		enum class TaskStatus : std::int32_t
		{
			kSTOPPED = 0x0,
			kSTOPPING = 0x1,
			kRUNNING = 0x2,
		};

		// override (NiObject)
		virtual ~NiTask() = default;  // 00

		// add
		virtual void DoTask();      // 23
		virtual bool CanExecute();  // 24
		virtual bool Clear();       // 25

		// members
		NiTask::TaskStatus m_eStatus;  // 08
	};
	static_assert(sizeof(NiTask) == 0xC);
}
