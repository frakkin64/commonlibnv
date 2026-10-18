#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiPointer.h"
#include "RE/N/NiTask.h"

namespace RE
{
	class BSTempEffect;

	// not confirmed: no named code in the executable refers to this type
	class BSTECreateTask :
		public NiTask  // 00
	{
	public:
		// members
		NiPointer<BSTempEffect> m_pEffect;  // 0C?
	};
}
