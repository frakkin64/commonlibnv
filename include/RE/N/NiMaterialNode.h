#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiPointer.h"
#include "RE/N/NiRefObject.h"
#include "RE/N/NiTObjectArray.h"

namespace RE
{
	class NiMaterialResource;

	// not confirmed: no named code in the executable refers to this type
	class NiMaterialNode :
		public NiRefObject  // 00
	{
	public:
		// members
		NiFixedString                                 m_kType;     // 08?
		NiFixedString                                 m_kName;     // 0C?
		NiTObjectArray<NiPointer<NiMaterialResource>> m_kInputs;   // 10?
		NiTObjectArray<NiPointer<NiMaterialResource>> m_kOutputs;  // 20?
	};
}
