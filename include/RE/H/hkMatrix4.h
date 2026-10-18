#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkVector4.h"

namespace RE
{
	class alignas(16) hkMatrix4
	{
	public:
		// members
		hkVector4 m_col0;  // 00?
		hkVector4 m_col1;  // 10?
		hkVector4 m_col2;  // 20?
		hkVector4 m_col3;  // 30?
	};
}
