#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TESObjectACTI.h"
#include "RE/T/TESProduceForm.h"

namespace RE
{
	class TESFlora :
		public TESProduceForm,  // 00
		public TESObjectACTI  // 0C
	{
	public:
		static constexpr auto RTTI{ RTTI::TESFlora };
		static constexpr auto VTABLE{ VTABLE::TESFlora };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kFLOR_ID };

		TESFlora* ctor()
		{
			using func_t = TESFlora*(__thiscall*)(TESFlora*);
			static REL::Relocation<func_t> func{ Offsets::TESFlora::ctor };
			return func(this);
		}
	};
	static_assert(sizeof(TESFlora) == 0x9C);
}
