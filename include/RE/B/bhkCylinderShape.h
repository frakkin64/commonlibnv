#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkConvexShape.h"

namespace RE
{
	class bhkCylinderShape :
		public bhkConvexShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkCylinderShape };
		static constexpr auto VTABLE{ VTABLE::bhkCylinderShape };

	};
}
