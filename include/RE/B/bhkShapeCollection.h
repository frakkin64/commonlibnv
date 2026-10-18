#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkShape.h"

namespace RE
{
	class bhkShapeCollection :
		public bhkShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkShapeCollection };
		static constexpr auto VTABLE{ VTABLE::bhkShapeCollection };

		// add
		virtual void Unk_38();  // 38
	};
}
