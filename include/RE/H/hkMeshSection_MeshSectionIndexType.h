#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class hkMeshSection_MeshSectionIndexType : std::int32_t
	{
		kINDEX_TYPE_NONE = 0x0,
		kINDEX_TYPE_UINT16 = 0x1,
		kINDEX_TYPE_UINT32 = 0x2,
	};
}
