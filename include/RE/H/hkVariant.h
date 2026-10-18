#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class hkClass;

	class hkVariant
	{
	public:
		// members
		void*          m_object;  // 00
		const hkClass* m_class;   // 04?
	};
}
