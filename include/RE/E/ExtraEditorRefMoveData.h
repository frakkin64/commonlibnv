#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSExtraData.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class TESObjectREFR;

	class ExtraEditorRefMoveData :
		public BSExtraData  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::ExtraEditorRefMoveData };
		static constexpr auto VTABLE{ VTABLE::ExtraEditorRefMoveData };

		// override (BSExtraData)
		virtual ~ExtraEditorRefMoveData() = default;  // 00

		ExtraEditorRefMoveData* ctor(TESObjectREFR* apRef)
		{
			using func_t = ExtraEditorRefMoveData*(__thiscall*)(ExtraEditorRefMoveData*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::ExtraEditorRefMoveData::ctor };
			return func(this, apRef);
		}

	public:
		// members
		NiPoint3 realAngle;     // 0C
		NiPoint3 realLocation;  // 18
		NiPoint3 oldLocation;   // 24
	};
	static_assert(sizeof(ExtraEditorRefMoveData) == 0x30);
}
