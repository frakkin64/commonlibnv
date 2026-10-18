#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"
#include "RE/N/NiTObjectArray.h"

namespace RE
{
	class NiMaterialNode;

	// not confirmed: no named code in the executable refers to this type
	class NiMaterialNodeLibrary :
		public NiRefObject  // 00
	{
	public:
		// members
		NiTObjectArray<NiPointer<NiMaterialNode>> m_kNodes;     // 08?
		std::uint16_t                             m_usVersion;  // 18?
		std::uint16_t                             pad1A;        // 1A
	};
}
