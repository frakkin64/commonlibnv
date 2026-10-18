#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkShapeCollection.h"

namespace RE
{
	class bhkPackedNiTriStripsShape :
		public bhkShapeCollection  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkPackedNiTriStripsShape };
		static constexpr auto VTABLE{ VTABLE::bhkPackedNiTriStripsShape };

	};
}
