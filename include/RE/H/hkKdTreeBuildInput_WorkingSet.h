#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkKdTreeProjectedEntry;

	class hkKdTreeBuildInput_WorkingSet
	{
	public:
		// members
		hkKdTreeProjectedEntry* m_entriesIn;   // 00
		hkKdTreeProjectedEntry* m_entriesOut;  // 04?
	};
}
