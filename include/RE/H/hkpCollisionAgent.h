#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkpContactMgr;

	class hkpCollisionAgent :
		public hkReferencedObject  // 00
	{
	public:
		// members
		hkpContactMgr* m_contactMgr;  // 08
	};
	static_assert(sizeof(hkpCollisionAgent) == 0xC);
}
