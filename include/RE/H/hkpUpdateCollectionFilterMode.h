#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkpUpdateCollectionFilterMode : std::int32_t
	{
		kHK_UPDATE_COLLECTION_FILTER_IGNORE_SHAPE_COLLECTIONS = 0x0,
		kHK_UPDATE_COLLECTION_FILTER_PROCESS_SHAPE_COLLECTIONS = 0x1,
	};
}
