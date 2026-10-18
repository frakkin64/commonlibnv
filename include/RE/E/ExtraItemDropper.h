#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraItemDropper :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraItemDropper };
		static constexpr auto VTABLE{ VTABLE::ExtraItemDropper };

		// override (BSExtraData)
		virtual ~ExtraItemDropper() = default;  // 00

		ExtraItemDropper* ctor()
		{
			using func_t = ExtraItemDropper*(__thiscall*)(ExtraItemDropper*);
			static REL::Relocation<func_t> func{ Offsets::ExtraItemDropper::ctor };
			return func(this);
		}

	public:
		// members
		TESObjectREFR* pDropper;  // 0C
	};
	static_assert(sizeof(ExtraItemDropper) == 0x10);
}
