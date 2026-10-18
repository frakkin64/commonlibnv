#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiGeometryGroup.h"

namespace RE
{
	class NiUnsharedGeometryGroup :
		public NiGeometryGroup  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiUnsharedGeometryGroup };
		static constexpr auto VTABLE{ VTABLE::NiUnsharedGeometryGroup };

	};
}
