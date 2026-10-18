#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSWin32TaskletData.h"

namespace RE
{
	class UpdateMasterPsysTaskletData :
		public BSWin32TaskletData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::UpdateMasterPsysTaskletData };
		static constexpr auto VTABLE{ VTABLE::UpdateMasterPsysTaskletData };

		// override (BSWin32TaskletData)
		virtual ~UpdateMasterPsysTaskletData() = default;  // 00
		virtual void Process() override;                   // 02

		// members
		// not placed: pObj(absent), pUpdateData(absent)
	};
	static_assert(sizeof(UpdateMasterPsysTaskletData) == 0x20);
}
