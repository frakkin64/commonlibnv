#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/S/SShape.h"

namespace RE
{
	// not confirmed: no named code in the executable refers to this type
	class SCollisionObjects
	{
	public:
		// members
		stl::vector<SShape> m_vObjects;  // 00?
	};
}
