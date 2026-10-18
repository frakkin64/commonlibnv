#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPSysModifier.h"
#include "RE/N/NiPointer.h"

namespace RE
{
	class NiPSysCollider;

	class NiPSysColliderManager :
		public NiPSysModifier  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiPSysColliderManager };
		static constexpr auto VTABLE{ VTABLE::NiPSysColliderManager };

		// members
		NiPointer<NiPSysCollider> m_spColliders;  // 18
	};
}
