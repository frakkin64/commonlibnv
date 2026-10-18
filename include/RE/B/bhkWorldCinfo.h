#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkSerializableCinfo.h"
#include "RE/H/hkpWorldCinfo.h"

namespace RE
{
	class alignas(16) bhkWorldCinfo :
		public hkpWorldCinfo,  // 00
		public hkSerializableCinfo  // F0
	{
	public:
		static constexpr auto RTTI{ RTTI::bhkWorldCinfo };
		static constexpr auto VTABLE{ VTABLE::bhkWorldCinfo };

	};
}
