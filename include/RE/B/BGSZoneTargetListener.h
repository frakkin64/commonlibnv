#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class TESObjectREFR;
	class TargetEntry;
	class ZoneEntry;
	class hkpCollidable;
	class hkpRootCdPoint;

	class __declspec(novtable) BGSZoneTargetListener
	{
	public:
		static constexpr auto RTTI{ RTTI::BGSZoneTargetListener };
		static constexpr auto VTABLE{ VTABLE::BGSZoneTargetListener };

		// add
		virtual ~BGSZoneTargetListener() = default;                                                 // 00
		virtual ZoneEntry* CreateZoneEntry(TESObjectREFR* apZone, hkpCollidable const* apCol);      // 01
		virtual TargetEntry* CreateTargetEntry(TESObjectREFR* apZone, hkpCollidable const* apCol);  // 02

		void RemoveZone(TESObjectREFR* apZone)
		{
			using func_t = decltype(&BGSZoneTargetListener::RemoveZone);
			static REL::Relocation<func_t> func{ Offsets::BGSZoneTargetListener::RemoveZone };
			func(this, apZone);
		}

		BGSZoneTargetListener* ctor()
		{
			using func_t = BGSZoneTargetListener*(__thiscall*)(BGSZoneTargetListener*);
			static REL::Relocation<func_t> func{ Offsets::BGSZoneTargetListener::ctor };
			return func(this);
		}

		void RemoveTarget(TESObjectREFR* apTarget)
		{
			using func_t = decltype(&BGSZoneTargetListener::RemoveTarget);
			static REL::Relocation<func_t> func{ Offsets::BGSZoneTargetListener::RemoveTarget };
			func(this, apTarget);
		}

		void EmptyList()
		{
			using func_t = decltype(&BGSZoneTargetListener::EmptyList);
			static REL::Relocation<func_t> func{ Offsets::BGSZoneTargetListener::EmptyList };
			func(this);
		}

		ZoneEntry* AddZoneTargetPair(hkpRootCdPoint const& arPoint, TESObjectREFR* apZone, TESObjectREFR* apTarget, std::uint32_t aiFlags, bool abTrap)
		{
			using func_t = decltype(&BGSZoneTargetListener::AddZoneTargetPair);
			static REL::Relocation<func_t> func{ Offsets::BGSZoneTargetListener::AddZoneTargetPair };
			return func(this, arPoint, apZone, apTarget, aiFlags, abTrap);
		}

		ZoneEntry* RemoveTargetFromZone(hkpCollidable const* apZone, TESObjectREFR* apTarget)
		{
			using func_t = ZoneEntry* (BGSZoneTargetListener::*)(hkpCollidable const*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::BGSZoneTargetListener::RemoveTargetFromZone };
			return func(this, apZone, apTarget);
		}

	protected:
		void RemoveZoneEntry(ZoneEntry* apZone)
		{
			using func_t = decltype(&BGSZoneTargetListener::RemoveZoneEntry);
			static REL::Relocation<func_t> func{ Offsets::BGSZoneTargetListener::RemoveZoneEntry };
			func(this, apZone);
		}

		void RemoveTargetFromZone(ZoneEntry* apZone, TESObjectREFR* apTarget)
		{
			using func_t = void (BGSZoneTargetListener::*)(ZoneEntry*, TESObjectREFR*);
			static REL::Relocation<func_t> func{ Offsets::BGSZoneTargetListener::RemoveTargetFromZone_1 };
			func(this, apZone, apTarget);
		}

	public:
		// members
		ZoneEntry* pZones;  // 04
	};
	static_assert(sizeof(BGSZoneTargetListener) == 0x8);
}
