#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/N/NiShaderRequirementDesc.h"
#include "RE/N/NiTObjectArray.h"

namespace RE
{
	class NiShaderDesc;

	// not confirmed: no named code in the executable refers to this type
	class NiShaderLibraryDesc :
		public NiShaderRequirementDesc  // 00
	{
	public:
		// members
		NiTObjectArray<NiPointer<NiShaderDesc>> m_kShaderDescs;  // 38?
	};
}
