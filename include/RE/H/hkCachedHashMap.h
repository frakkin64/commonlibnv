#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	template <class T, class U>
	class hkCachedHashMap
	{
	public:
		// members
		std::uint32_t* m_elem;
		std::int32_t m_numElems;
		std::int32_t m_hashMod;
		T m_ops;
	};
}
