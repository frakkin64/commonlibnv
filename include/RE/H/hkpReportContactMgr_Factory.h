#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpContactMgrFactory.h"

namespace RE
{
	class hkpCollidable;
	class hkpCollisionInput;
	class hkpContactMgr;
	class hkpWorld;

	class hkpReportContactMgr_Factory :
		public hkpContactMgrFactory  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpReportContactMgr_Factory };
		static constexpr auto VTABLE{ VTABLE::hkpReportContactMgr_Factory };

		// override (hkpContactMgrFactory)
		virtual ~hkpReportContactMgr_Factory() = default;  // 00

		// add
		virtual hkpContactMgr* createContactMgr(hkpCollidable const& a, hkpCollidable const& b, hkpCollisionInput const& env);  // 03

		hkpReportContactMgr_Factory* ctor(hkpWorld* mgr)
		{
			using func_t = hkpReportContactMgr_Factory*(__thiscall*)(hkpReportContactMgr_Factory*, hkpWorld*);
			static REL::Relocation<func_t> func{ Offsets::hkpReportContactMgr_Factory::ctor };
			return func(this, mgr);
		}

	public:
		// members
		hkpWorld* m_world;  // 08?
	};
}
