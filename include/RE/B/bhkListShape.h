#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkShapeCollection.h"

namespace RE
{
	class bhkListShape :
		public bhkShapeCollection  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkListShape };
		static constexpr auto VTABLE{ VTABLE::bhkListShape };

	};
}
