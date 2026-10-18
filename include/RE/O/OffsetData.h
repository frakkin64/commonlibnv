#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class BGSReconstructFormsMap;

	class OffsetData
	{
	public:
		// members
		std::uint32_t           iOffset;    // 00?
		BGSReconstructFormsMap* pFormsMap;  // 04?
	};
}
