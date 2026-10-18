#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpContactMgrFactory.h"
#include "RE/H/hkpNullContactMgr.h"

namespace RE
{
	class hkpCollidable;
	class hkpCollisionInput;
	class hkpContactMgr;

	class hkpNullContactMgrFactory :
		public hkpContactMgrFactory  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpNullContactMgrFactory };
		static constexpr auto VTABLE{ VTABLE::hkpNullContactMgrFactory };

		// override (hkpContactMgrFactory)
		virtual ~hkpNullContactMgrFactory() = default;  // 00

		// add
		virtual hkpContactMgr* createContactMgr(hkpCollidable const& a, hkpCollidable const& b, hkpCollisionInput const& env);  // 03

		// members
		hkpNullContactMgr m_contactMgr;  // 08
	};
}
