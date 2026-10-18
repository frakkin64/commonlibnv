#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpContactMgr.h"

namespace RE
{
	class hkpWorld;

	class hkpDynamicsContactMgr :
		public hkpContactMgr  // 00
	{
	public:
		// members
		hkpWorld* m_world;  // 0C
	};
	static_assert(sizeof(hkpDynamicsContactMgr) == 0x10);
}
