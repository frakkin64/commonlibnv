#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"

namespace RE
{
	class NiTextKey
	{
	public:
		// members
		float         m_fTime;  // 00?
		NiFixedString m_kText;  // 04
	};
}
