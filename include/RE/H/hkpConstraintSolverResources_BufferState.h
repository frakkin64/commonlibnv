#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class T;

	template <class T>
	class hkpConstraintSolverResources_BufferState
	{
	public:
		// members
		T* m_begin;
		T* m_end;
		T* m_current;
		T* m_lastProcessed;
	};
}
