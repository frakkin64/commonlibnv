#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkSerializableCinfo.h"

namespace RE
{
	class hkActionCinfo :
		public hkSerializableCinfo  // 00
	{
	public:
		// members
		std::uint32_t m_userData;  // 00?
	};
}
