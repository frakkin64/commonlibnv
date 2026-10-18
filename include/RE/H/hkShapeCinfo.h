#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkSerializableCinfo.h"

namespace RE
{
	class hkShapeCinfo :
		public hkSerializableCinfo  // 00
	{
	public:
		// members
		std::int32_t m_userData;  // 00
	};
	static_assert(sizeof(hkShapeCinfo) == 0x4);
}
