#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiNode.h"

namespace RE
{
	class NiBSPNode :
		public NiNode  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiBSPNode };
		static constexpr auto VTABLE{ VTABLE::NiBSPNode };

		// members
		// not placed: m_kModelPlane, m_kWorldPlane
	};
}
