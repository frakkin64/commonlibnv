#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiBoundingVolume.h"
#include "RE/N/NiSphere.h"

namespace RE
{
	class NiSphereBV :
		public NiBoundingVolume  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiSphereBV };
		static constexpr auto VTABLE{ VTABLE::NiSphereBV };

		// members
		NiSphere m_kSphere;  // 04
	};
}
