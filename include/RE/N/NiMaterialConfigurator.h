#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"
#include "RE/N/NiTObjectArray.h"

namespace RE
{
	class NiGPUProgramCache;
	class NiMaterialNode;
	class NiMaterialResourceBinding;

	// not confirmed: no named code in the executable refers to this type
	class NiMaterialConfigurator :
		public NiRefObject  // 00
	{
	public:
		// members
		NiTObjectArray<NiPointer<NiMaterialNode>>            m_kNodes;     // 08?
		NiTObjectArray<NiPointer<NiMaterialResourceBinding>> m_kBindings;  // 18?
		NiFixedString                                        m_kPlatform;  // 28?
		NiPointer<NiGPUProgramCache>                         m_spCache;    // 2C?
	};
}
