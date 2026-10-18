#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/T.h"

namespace RE
{
	template <class T>
	class NiRect
	{
	public:
		// members
		T m_left;
		T m_right;
		T m_top;
		T m_bottom;
	};
}
