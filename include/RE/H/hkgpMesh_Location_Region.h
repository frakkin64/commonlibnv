#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkgpMeshBase_Edge.h"
#include "RE/H/hkgpMesh_Location_Region_eType.h"

namespace RE
{
	class hkgpMesh_Location_Region
	{
	public:
		using eType = hkgpMesh_Location_Region_eType;

		// members
		hkgpMesh_Location_Region_eType m_type;     // 00?
		hkgpMeshBase_Edge              m_feature;  // 04?
	};
}
