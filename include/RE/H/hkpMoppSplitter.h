#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkpMoppNodeMgr.h"
#include "RE/H/hkpMoppSplitter_hkpMoppScratchArea.h"
#include "RE/H/hkpMoppSplitter_hkpMoppSplitParams.h"

namespace RE
{
	class hkpMoppSplitter :
		public hkpMoppNodeMgr  // 00
	{
	public:
		using hkpMoppScratchArea = hkpMoppSplitter_hkpMoppScratchArea;
		using hkpMoppSplitParams = hkpMoppSplitter_hkpMoppSplitParams;

	};
}
