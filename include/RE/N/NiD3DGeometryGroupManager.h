#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/N/NiGeometryGroupManager.h"
#include "RE/N/NiTPrimitiveSet.h"

namespace RE
{
	class NiDX9VertexBufferManager;
	class NiGeometryGroup;

	class NiD3DGeometryGroupManager :
		public NiGeometryGroupManager  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::NiD3DGeometryGroupManager };
		static constexpr auto VTABLE{ VTABLE::NiD3DGeometryGroupManager };

		// members
		NiTPrimitiveSet<NiGeometryGroup*> m_kGroups;      // 04
		void*                             m_pkD3DDevice;  // 10
		NiDX9VertexBufferManager*         m_pkVBManager;  // 14
		bool                              m_bHWSkinning;  // 18
		std::uint8_t                      pad19[0x3];     // 19
	};
}
