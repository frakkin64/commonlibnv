#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkConvexShape.h"

namespace RE
{
	class bhkConvexTransformShape :
		public bhkConvexShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkConvexTransformShape };
		static constexpr auto VTABLE{ VTABLE::bhkConvexTransformShape };

	};
}
