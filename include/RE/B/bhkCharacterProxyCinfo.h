#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkSerializableCinfo.h"
#include "RE/H/hkpCharacterProxyCinfo.h"

namespace RE
{
	class alignas(16) bhkCharacterProxyCinfo :
		public hkSerializableCinfo,  // 00
		public hkpCharacterProxyCinfo  // 00
	{
	public:
	};
	static_assert(sizeof(bhkCharacterProxyCinfo) == 0x80);
}
