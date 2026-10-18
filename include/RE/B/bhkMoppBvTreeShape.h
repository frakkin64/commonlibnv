#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkBvTreeShape.h"

namespace RE
{
	class bhkMoppBvTreeShape :
		public bhkBvTreeShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkMoppBvTreeShape };
		static constexpr auto VTABLE{ VTABLE::bhkMoppBvTreeShape };

	};
}
