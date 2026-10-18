#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BGSDestructibleObjectForm.h"
#include "RE/M/MOVABLE_STATIC_DATA.h"
#include "RE/T/TESFullName.h"
#include "RE/T/TESObjectSTAT.h"

namespace RE
{
	class TESSound;

	class BGSMovableStatic :
		public TESFullName,  // 00
		public BGSDestructibleObjectForm,  // 0C
		public TESObjectSTAT  // 14
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSMovableStatic };
		static constexpr auto VTABLE{ VTABLE::BGSMovableStatic };

		static constexpr auto FORM_ID{ ENUM_FORM_ID::kMSTT_ID };

		BGSMovableStatic* ctor()
		{
			using func_t = BGSMovableStatic*(__thiscall*)(BGSMovableStatic*);
			static REL::Relocation<func_t> func{ Offsets::BGSMovableStatic::ctor };
			return func(this);
		}

	public:
		// members
		TESSound*           pSoundLoop;  // 6C
		MOVABLE_STATIC_DATA data;        // 70
		std::uint8_t        pad71[0x3];  // 71
	};
	static_assert(sizeof(BGSMovableStatic) == 0x74);
}
