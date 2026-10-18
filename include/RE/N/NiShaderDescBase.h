#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiRefObject.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiShaderDescBase :
		public NiRefObject  // 00
	{
	public:
		// members
		char* m_pcName;  // 08?
		char* m_pcDesc;  // 0C?
	};
}
