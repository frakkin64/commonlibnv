#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/bhkTTNode.h"
#include "RE/T/TESObjectREFR.h"

namespace RE
{
	class TargetEntry;
	class hkpCollidable;

	class __declspec(novtable) ZoneEntry :
		public bhkTTNode<TESObjectREFR>  // 04
	{
	public:
		static constexpr auto RTTI{ RTTI::ZoneEntry };
		static constexpr auto VTABLE{ VTABLE::ZoneEntry };

		// add
		virtual TargetEntry* AddTarget(TESObjectREFR* apTarget, hkpCollidable const* apCol, std::uint32_t aiFlags);  // 00
		virtual void Run();                                                                                          // 01

		void RemoveTarget(TESObjectREFR* apTarget)
		{
			using func_t = decltype(&ZoneEntry::RemoveTarget);
			static REL::Relocation<func_t> func{ Offsets::ZoneEntry::RemoveTarget };
			func(this, apTarget);
		}

		TargetEntry* GetTargetEntry(TESObjectREFR* apTarget)
		{
			using func_t = decltype(&ZoneEntry::GetTargetEntry);
			static REL::Relocation<func_t> func{ Offsets::ZoneEntry::GetTargetEntry };
			return func(this, apTarget);
		}

		ZoneEntry* ctor(TESObjectREFR* apRef, hkpCollidable const* apCol)
		{
			using func_t = ZoneEntry*(__thiscall*)(ZoneEntry*, TESObjectREFR*, hkpCollidable const*);
			static REL::Relocation<func_t> func{ Offsets::ZoneEntry::ctor };
			return func(this, apRef, apCol);
		}

		void dtor()
		{
			using func_t = void(__thiscall*)(ZoneEntry*);
			static REL::Relocation<func_t> func{ Offsets::ZoneEntry::dtor };
			func(this);
		}

		ZoneEntry* GetZoneEntry(hkpCollidable const* apZone)
		{
			using func_t = decltype(&ZoneEntry::GetZoneEntry);
			static REL::Relocation<func_t> func{ Offsets::ZoneEntry::GetZoneEntry };
			return func(this, apZone);
		}

	public:
		// members
		TargetEntry* pTargets;  // 14
	};
	static_assert(sizeof(ZoneEntry) == 0x18);
}
