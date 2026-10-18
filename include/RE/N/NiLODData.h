#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiObject.h"

namespace RE
{
	class NiLODData :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiLODData };
		static constexpr auto VTABLE{ VTABLE::NiLODData };

		// add
		virtual void Unk_23();  // 23
		virtual void Unk_24();  // 24
		virtual void Unk_25();  // 25
		virtual void Unk_26();  // 26
	};
	static_assert(sizeof(NiLODData) == 0x8);
}
