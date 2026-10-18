#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class InternedStringRefCounted :
		public hkReferencedObject  // 00
	{
	public:
		// members
		const char* m_cachedString;  // 08?
	};
}
