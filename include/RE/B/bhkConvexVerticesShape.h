#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkConvexShape.h"

namespace RE
{
	class bhkConvexVerticesShape :
		public bhkConvexShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkConvexVerticesShape };
		static constexpr auto VTABLE{ VTABLE::bhkConvexVerticesShape };

	};
}
