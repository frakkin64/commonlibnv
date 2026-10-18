#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkShapeCollection.h"

namespace RE
{
	class bhkNiTriStripsShape :
		public bhkShapeCollection  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkNiTriStripsShape };
		static constexpr auto VTABLE{ VTABLE::bhkNiTriStripsShape };

		// add
		virtual void Unk_39();  // 39
	};
}
