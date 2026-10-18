#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkMap.h"
#include "RE/H/hkMapOperations.h"

namespace RE
{
	template <class T, class U, class V>
	class hkPointerMap
	{
	public:
		// members
		hkMap<std::uint32_t, std::uint32_t, hkMapOperations<std::uint32_t>, V> m_map;
	};
}
