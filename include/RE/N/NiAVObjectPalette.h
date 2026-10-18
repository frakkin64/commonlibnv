#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"

namespace RE
{
	class NiAVObjectPalette :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiAVObjectPalette };
		static constexpr auto VTABLE{ VTABLE::NiAVObjectPalette };

		// add
		virtual void Unk_23();  // 23
		virtual void Unk_24();  // 24
	};
}
