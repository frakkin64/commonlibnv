#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESForm;

	class ExtraStartingWorldOrCell :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraStartingWorldOrCell };
		static constexpr auto VTABLE{ VTABLE::ExtraStartingWorldOrCell };

		// override (BSExtraData)
		virtual ~ExtraStartingWorldOrCell() = default;  // 00

		ExtraStartingWorldOrCell* ctor()
		{
			using func_t = ExtraStartingWorldOrCell*(__thiscall*)(ExtraStartingWorldOrCell*);
			static REL::Relocation<func_t> func{ Offsets::ExtraStartingWorldOrCell::ctor };
			return func(this);
		}

	public:
		// members
		TESForm* pStartingWorldOrCell;  // 0C
	};
	static_assert(sizeof(ExtraStartingWorldOrCell) == 0x10);
}
