#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiTriShape.h"

namespace RE
{
	class BSResizableTriShape :
		public NiTriShape  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSResizableTriShape };
		static constexpr auto VTABLE{ VTABLE::BSResizableTriShape };

		// add
		virtual void Unk_3D();  // 3D
		virtual void Unk_3E();  // 3E

		// members
		// not placed: uiNumPrimitives, LocalBound
	};
}
