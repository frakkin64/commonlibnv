#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/N/NiShaderRequirementDesc.h"
#include "RE/N/NiTPointerList.h"
#include "RE/N/NiTPrimitiveArray.h"

namespace RE
{
	class NiShaderAttributeDesc;

	// not confirmed: no named code in the executable refers to this type
	class NiShaderDesc :
		public NiShaderRequirementDesc  // 00
	{
	public:
		// members
		std::uint32_t                                    m_uiImplementations;     // 38?
		NiTPrimitiveArray<NiShaderRequirementDesc*>      m_kImplementationDescs;  // 3C?
		void*                                            m_kAttributePos;         // 4C?
		NiTPointerList<NiPointer<NiShaderAttributeDesc>> m_kAttributeList;        // 50?
	};
}
