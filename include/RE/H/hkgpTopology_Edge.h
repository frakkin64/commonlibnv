#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	template <class T, class U, class V, class W>
	class hkgpTopology_Edge
	{
	public:
		// members
		V* m_triangle;
		std::uint32_t m_index;
	};
}
