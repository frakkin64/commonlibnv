#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpContactMgrFactory.h"

namespace RE
{
	class hkpCollidable;
	class hkpCollisionInput;
	class hkpContactMgr;
	class hkpWorld;

	class hkpSimpleConstraintContactMgr_Factory :
		public hkpContactMgrFactory  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSimpleConstraintContactMgr_Factory };
		static constexpr auto VTABLE{ VTABLE::hkpSimpleConstraintContactMgr_Factory };

		// override (hkpContactMgrFactory)
		virtual ~hkpSimpleConstraintContactMgr_Factory() = default;  // 00

		// add
		virtual hkpContactMgr* createContactMgr(hkpCollidable const& a, hkpCollidable const& b, hkpCollisionInput const& input);  // 03

		// members
		hkpWorld* m_world;  // 08?
	};
}
