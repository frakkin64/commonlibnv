#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class BSAnimNoteReceiver;

	class ExtraAnimNoteReceiver :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraAnimNoteReceiver };
		static constexpr auto VTABLE{ VTABLE::ExtraAnimNoteReceiver };

		// override (BSExtraData)
		virtual ~ExtraAnimNoteReceiver() = default;  // 00

		ExtraAnimNoteReceiver* ctor(BSAnimNoteReceiver* apReceiver)
		{
			using func_t = ExtraAnimNoteReceiver*(__thiscall*)(ExtraAnimNoteReceiver*, BSAnimNoteReceiver*);
			static REL::Relocation<func_t> func{ Offsets::ExtraAnimNoteReceiver::ctor };
			return func(this, apReceiver);
		}

	public:
		// members
		BSAnimNoteReceiver* pReceiver;  // 0C
	};
	static_assert(sizeof(ExtraAnimNoteReceiver) == 0x10);
}
