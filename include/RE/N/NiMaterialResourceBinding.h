#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"

namespace RE
{
	class NiMaterialNode;
	class NiMaterialResource;

	// not confirmed: no named code in the executable refers to this type
	class NiMaterialResourceBinding :
		public NiRefObject  // 00
	{
	public:
		// members
		NiPointer<NiMaterialResource> m_spSrcResource;   // 08?
		NiPointer<NiMaterialResource> m_spDestResource;  // 0C?
		NiPointer<NiMaterialNode>     m_spSrcNode;       // 10?
		NiPointer<NiMaterialNode>     m_spDestNode;      // 14?
		NiFixedString                 m_kVariable;       // 18?
	};
}
