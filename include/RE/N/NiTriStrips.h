#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTriBasedGeom.h"

namespace RE
{
	class NiTriStrips :
		public NiTriBasedGeom  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiTriStrips };
		static constexpr auto VTABLE{ VTABLE::NiTriStrips };

	};
}
