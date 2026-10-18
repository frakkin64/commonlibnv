#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/T/TallGrassShaderProperty_GrassParam.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class TESGrassAreaParam
	{
	public:
		// members
		TallGrassShaderProperty_GrassParam kGrassParam;   // 00?
		float                              pfDensity[9];  // 20?
	};
}
