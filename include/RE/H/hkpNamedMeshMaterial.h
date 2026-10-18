#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkStringPtr.h"
#include "RE/H/hkpMeshMaterial.h"

namespace RE
{
	class hkpNamedMeshMaterial :
		public hkpMeshMaterial  // 00
	{
	public:
		// members
		hkStringPtr m_name;  // 04?
	};
}
