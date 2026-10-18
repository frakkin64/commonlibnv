#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BSAnimNote;

	class __declspec(novtable) IBSAnimNoteReceiver
	{
	public:
		static constexpr auto RTTI{ RTTI::IBSAnimNoteReceiver };
		static constexpr auto VTABLE{ VTABLE::IBSAnimNoteReceiver };

		// add
		virtual ~IBSAnimNoteReceiver() = default;  // 00
		virtual void Update(BSAnimNote* a_arg1);   // 01

		IBSAnimNoteReceiver* ctor()
		{
			using func_t = IBSAnimNoteReceiver*(__thiscall*)(IBSAnimNoteReceiver*);
			static REL::Relocation<func_t> func{ Offsets::IBSAnimNoteReceiver::ctor };
			return func(this);
		}
	};
}
