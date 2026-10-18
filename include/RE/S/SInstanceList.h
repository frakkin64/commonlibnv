#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class CSpeedTreeRT;

	// not confirmed: no named code in the executable refers to this type
	class SInstanceList
	{
	public:
		// members
		stl::vector<CSpeedTreeRT*> m_vInstances;  // 00?
	};
}
