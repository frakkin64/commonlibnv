#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkGeometryProcessing_PoolAllocator.h"
#include "RE/H/hkgpAbstractMeshDefinitions_List.h"
#include "RE/T/T.h"

namespace RE
{
	template <class T, class U, class V>
	class hkgpAbstractMeshDefinitions_Triangle :
		public hkgpAbstractMeshDefinitions_List<T, U, hkGeometryProcessing_PoolAllocator<T, 32, hkContainerHeapAllocator>>::Item  // 00
	{
	public:
		// members
		V m_vertices[3];
		std::uint32_t m_links[3];
	};
}
