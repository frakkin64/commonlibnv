#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSAnimNote_AnimNoteType.h"
#include "RE/N/NiObject.h"

namespace RE
{
	class BSAnimNote :
		public NiObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::BSAnimNote };
		static constexpr auto VTABLE{ VTABLE::BSAnimNote };

		using AnimNoteType = BSAnimNote_AnimNoteType;

		// add
		virtual void Unk_23();  // 23

		// members
		BSAnimNote_AnimNoteType eType;  // 08
		float                   fTime;  // 0C
	};
	static_assert(sizeof(BSAnimNote) == 0x10);
}
