#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FR2Vect3TC.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class FffTriDiffMorphS
	{
	public:
		// members
		stl::string                    label;     // 00?
		stl::vector<FR2Vect3TC<float>> vtxDelta;  // 1C?
	};
}
