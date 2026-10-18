#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/F/FILE_POS_ROT.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraStartingPosition :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraStartingPosition };
		static constexpr auto VTABLE{ VTABLE::ExtraStartingPosition };

		// override (BSExtraData)
		virtual ~ExtraStartingPosition() = default;             // 00
		virtual bool Compare(BSExtraData* apCompare) override;  // 01

		ExtraStartingPosition* ctor(TESObjectREFR* apRef)
		{
			using func_t = ExtraStartingPosition*(__thiscall*)(ExtraStartingPosition*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::ExtraStartingPosition::ctor };
			return func(this, apRef);
		}

	public:
		// members
		FILE_POS_ROT startPosition;  // 0C
	};
	static_assert(sizeof(ExtraStartingPosition) == 0x24);
}
