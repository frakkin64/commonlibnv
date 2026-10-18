#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"

namespace RE
{
	class NiProperty;

	class NiPropertyState
	{
	public:
		// members
		NiPointer<NiProperty> m_aspProps[7];  // 00?
	};
}
