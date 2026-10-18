#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiGPUProgram_ProgramType.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiGPUProgram :
		public NiRefObject  // 00
	{
	public:
		using ProgramType = NiGPUProgram_ProgramType;

		// members
		NiGPUProgram_ProgramType m_eProgramType;  // 08?
	};
}
