#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiFixedString.h"
#include "RE/N/NiMaterialNode.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class NiMaterialResourceConsumerNode :
		public NiMaterialNode  // 00
	{
	public:
		// members
		NiFixedString m_kConsumerType;  // 30?
	};
}
