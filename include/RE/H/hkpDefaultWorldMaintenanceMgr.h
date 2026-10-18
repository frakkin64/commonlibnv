#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpWorldMaintenanceMgr.h"

namespace RE
{
	class hkStepInfo;
	class hkpWorld;

	class hkpDefaultWorldMaintenanceMgr :
		public hkpWorldMaintenanceMgr  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpDefaultWorldMaintenanceMgr };
		static constexpr auto VTABLE{ VTABLE::hkpDefaultWorldMaintenanceMgr };

		// override (hkpWorldMaintenanceMgr)
		virtual ~hkpDefaultWorldMaintenanceMgr() = default;  // 00

		// add
		virtual void init(hkpWorld* world);                                             // 03
		virtual void performMaintenance(hkpWorld* world, hkStepInfo& stepInfo);         // 04
		virtual void performMaintenanceNoSplit(hkpWorld* world, hkStepInfo& stepInfo);  // 05

		hkpDefaultWorldMaintenanceMgr* ctor()
		{
			using func_t = hkpDefaultWorldMaintenanceMgr*(__thiscall*)(hkpDefaultWorldMaintenanceMgr*);
			static REL::Relocation<func_t> func{ Offsets::hkpDefaultWorldMaintenanceMgr::ctor };
			return func(this);
		}

	public:
		// members
		float m_minAllowedTimeValue;  // 08
		float m_maxAllowedTimeValue;  // 0C
	};
}
