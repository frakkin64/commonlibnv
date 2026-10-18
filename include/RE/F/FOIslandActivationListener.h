#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpEntityListener.h"
#include "RE/H/hkpIslandActivationListener.h"

namespace RE
{
	class hkpSimulationIsland;
	class hkpWorld;

	class FOIslandActivationListener :
		public hkpIslandActivationListener,  // 00
		public hkpEntityListener  // 04
	{
	public:
		static constexpr auto RTTI{ RTTI::FOIslandActivationListener };
		static constexpr auto VTABLE{ VTABLE::FOIslandActivationListener };

		// override (hkpIslandActivationListener)
		virtual ~FOIslandActivationListener() = default;                               // 00
		virtual void islandActivatedCallback(hkpSimulationIsland* a_arg1) override;    // 01
		virtual void islandDeactivatedCallback(hkpSimulationIsland* a_arg1) override;  // 02

		FOIslandActivationListener* ctor()
		{
			using func_t = FOIslandActivationListener*(__thiscall*)(FOIslandActivationListener*);
			static REL::Relocation<func_t> func{ Offsets::FOIslandActivationListener::ctor };
			return func(this);
		}

		void AddToWorld(hkpWorld* apWorld)
		{
			using func_t = decltype(&FOIslandActivationListener::AddToWorld);
			static REL::Relocation<func_t> func{ Offsets::FOIslandActivationListener::AddToWorld };
			func(this, apWorld);
		}

		void RemoveFromWorld(hkpWorld* apWorld)
		{
			using func_t = decltype(&FOIslandActivationListener::RemoveFromWorld);
			static REL::Relocation<func_t> func{ Offsets::FOIslandActivationListener::RemoveFromWorld };
			func(this, apWorld);
		}
	};
	static_assert(sizeof(FOIslandActivationListener) == 0x8);
}
