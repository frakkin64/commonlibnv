#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/B/BSStringT.h"

namespace RE
{
	class ExtraEditorID :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraEditorID };
		static constexpr auto VTABLE{ VTABLE::ExtraEditorID };

		// override (BSExtraData)
		virtual ~ExtraEditorID() = default;  // 00

		ExtraEditorID* ctor(char const* apEditorID)
		{
			using func_t = ExtraEditorID*(__thiscall*)(ExtraEditorID*, char const*);
			static REL::Relocation<func_t> func{ Offsets::ExtraEditorID::ctor };
			return func(this, apEditorID);
		}

	public:
		// members
		BSStringT<char> cEditorID;  // 0C
	};
	static_assert(sizeof(ExtraEditorID) == 0x14);
}
