#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	enum class NiBillboardNode_FaceMode : std::int32_t
	{
		kALWAYS_FACE_CAMERA = 0x0,
		kROTATE_ABOUT_UP = 0x1,
		kRIGID_FACE_CAMERA = 0x2,
		kALWAYS_FACE_CENTER = 0x3,
		kRIGID_FACE_CENTER = 0x4,
		kBSROTATE_ABOUT_UP = 0x5,
	};
}
