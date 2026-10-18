#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpContactMgr_ToiAccept.h"
#include "RE/H/hkpContactMgr_Type.h"

namespace RE
{
	class hkpContactMgr :
		public hkReferencedObject  // 00
	{
	public:
		using ToiAccept = hkpContactMgr_ToiAccept;
		using Type = hkpContactMgr_Type;

		// members
		hkpContactMgr_Type m_type;  // 08?
	};
}
