#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class IO_FILE_INDEX : std::int32_t
	{
		kIO_FILE_INDEX_TEXTURES = 0x0,
		kIO_FILE_INDEX_MESHES = 0x1,
		kIO_FILE_INDEX_SOUNDS = 0x2,
		kIO_FILE_INDEX_MISC = 0x3,
		kIO_FILE_INDEX_COUNT = 0x4,
	};
}
