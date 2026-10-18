#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/F/FR2Vect3TC.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class FffTriSurfLabelS
	{
	public:
		// members
		std::uint32_t     idx;        // 00?
		FR2Vect3TC<float> vtxIntWgt;  // 04?
		stl::string       label;      // 10?
	};
}
