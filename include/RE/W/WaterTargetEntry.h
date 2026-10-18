#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TargetEntry.h"

namespace RE
{
	class TESObjectREFR;
	class hkpCollidable;

	class alignas(16) WaterTargetEntry :
		public TargetEntry  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::WaterTargetEntry };
		static constexpr auto VTABLE{ VTABLE::WaterTargetEntry };

		WaterTargetEntry* ctor(TESObjectREFR* apRef, hkpCollidable const* apCol)
		{
			using func_t = WaterTargetEntry*(__thiscall*)(WaterTargetEntry*, TESObjectREFR*, hkpCollidable const*);
			static REL::Relocation<func_t> func{ Offsets::WaterTargetEntry::ctor };
			return func(this, apRef, apCol);
		}

	public:
		// members
		// not placed: CollidableList
	};
}
