#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class PACK_LOC_TYPE : std::int32_t
	{
		kPLT_NONE = -1,
		kPLT_REFERENCE = 0x0,
		kPLT_CELL = 0x1,
		kPLT_CURRLOC = 0x2,
		kPLT_EDITORLOC = 0x3,
		kPLT_OBJECT = 0x4,
		kPLT_TYPE = 0x5,
		kPLT_LINKEDREF = 0x6,
		kPLT_FIRSTLOC = 0x7,
	};
}
