#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiNode.h"

namespace RE
{
	class NiUpdateData;

	class BSTempNodeManager :
		public NiNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSTempNodeManager };
		static constexpr auto VTABLE{ VTABLE::BSTempNodeManager };

		// override (NiNode)
		virtual ~BSTempNodeManager() = default;                                                            // 00
		virtual void UpdateDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags) override;          // 29
		virtual void UpdateSelectedDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags) override;  // 2A
		virtual void UpdateRigidDownwardPass(NiUpdateData& UpdateData, std::uint32_t uFlags) override;     // 2B

		// members
		float fPrevTime;  // AC
	};
	static_assert(sizeof(BSTempNodeManager) == 0xB0);
}
