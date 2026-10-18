#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiAVObjectPalette.h"
#include "RE/N/NiTFixedStringMap.h"

namespace RE
{
	class NiAVObject;

	class NiDefaultAVObjectPalette :
		public NiAVObjectPalette  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiDefaultAVObjectPalette };
		static constexpr auto VTABLE{ VTABLE::NiDefaultAVObjectPalette };

		// add
		virtual void Unk_25();  // 25
		virtual void Unk_26();  // 26

		// members
		NiTFixedStringMap<NiAVObject*> m_kHash;     // 08
		std::uint8_t                   pad18[0x8];  // 18
		NiAVObject*                    m_pkScene;   // 20
	};
}
