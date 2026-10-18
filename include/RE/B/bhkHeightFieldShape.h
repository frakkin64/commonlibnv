#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkShape.h"

namespace RE
{
	class bhkHeightFieldShape :
		public bhkShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkHeightFieldShape };
		static constexpr auto VTABLE{ VTABLE::bhkHeightFieldShape };

	};
}
