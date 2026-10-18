#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	template <class T>
	class hkpRelativePointer32
	{
	public:
		// members
		std::uint32_t m_relativeAddress;
	};
}
