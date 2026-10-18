#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class CRotTransform
	{
	public:
		// members
		float m_afData[3][3];  // 00?
	};
}
