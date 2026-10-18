#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraOpenCloseActivateRef :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraOpenCloseActivateRef };
		static constexpr auto VTABLE{ VTABLE::ExtraOpenCloseActivateRef };

		// override (BSExtraData)
		virtual ~ExtraOpenCloseActivateRef() = default;  // 00

		ExtraOpenCloseActivateRef* ctor()
		{
			using func_t = ExtraOpenCloseActivateRef*(__thiscall*)(ExtraOpenCloseActivateRef*);
			static REL::Relocation<func_t> func{ Offsets::ExtraOpenCloseActivateRef::ctor };
			return func(this);
		}

	public:
		// members
		TESObjectREFR* pActivateRef;  // 0C
	};
	static_assert(sizeof(ExtraOpenCloseActivateRef) == 0x10);
}
