#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/B/BSFile.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class BSMemoryFile :
		public BSFile  // 00
	{
	public:
		// members
		// not placed: uiMemBufferSize, pucMemBuffer, uiCurMemPos
	};
}
