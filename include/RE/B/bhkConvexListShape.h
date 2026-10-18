#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkConvexShape.h"

namespace RE
{
	class bhkConvexListShape :
		public bhkConvexShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkConvexListShape };
		static constexpr auto VTABLE{ VTABLE::bhkConvexListShape };

		// add
		virtual void Unk_38();  // 38
		virtual void Unk_39();  // 39
		virtual void Unk_3A();  // 3A
		virtual void Unk_3B();  // 3B
	};
}
