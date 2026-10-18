#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkTTNode.h"
#include "RE/T/TESObjectREFR.h"

namespace RE
{
	class ZoneEntry;
	class hkpCollidable;

	class __declspec(novtable) alignas(16) TargetEntry :
		public bhkTTNode<TESObjectREFR>  // 04
	{
	public:
		static constexpr auto RTTI{ RTTI::TargetEntry };
		static constexpr auto VTABLE{ VTABLE::TargetEntry };

		// add
		virtual void Run(ZoneEntry* apTrap);  // 00

		TargetEntry* ctor(TESObjectREFR* apRef, hkpCollidable const* apCol)
		{
			using func_t = TargetEntry*(__thiscall*)(TargetEntry*, TESObjectREFR*, hkpCollidable const*);
			static REL::Relocation<func_t> func{ Offsets::TargetEntry::ctor };
			return func(this, apRef, apCol);
		}

	public:
		// members
		// not placed: PositionAtHit, VelocityAtHit, eMaterialAtHit
		std::uint8_t pad14[0xC];  // 14
	};
}
