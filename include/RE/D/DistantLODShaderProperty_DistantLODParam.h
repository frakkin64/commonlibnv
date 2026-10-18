#pragma once

#include "NVSE/Impl/Windows.h"

namespace RE
{
	class NiNode;

	class DistantLODShaderProperty_DistantLODParam
	{
	public:
		// members
		char*         pcGeomFilename;  // 00?
		NiNode*       p3DData;         // 04?
		std::uint32_t iBaseObjectID;   // 08?
	};
}
