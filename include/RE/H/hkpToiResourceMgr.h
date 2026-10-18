#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpToiResourceMgr_ConstraintViolationInfo.h"

namespace RE
{
	class hkpToiResourceMgr :
		public hkReferencedObject  // 00
	{
	public:
		using ConstraintViolationInfo = hkpToiResourceMgr_ConstraintViolationInfo;

	};
	static_assert(sizeof(hkpToiResourceMgr) == 0x8);
}
