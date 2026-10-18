#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkRefPtr.h"

namespace RE
{
	class InternedStringRefCounted;

	class InternedStringHandle
	{
	public:
		// members
		hkRefPtr<InternedStringRefCounted> m_cached;  // 00
	};
}
