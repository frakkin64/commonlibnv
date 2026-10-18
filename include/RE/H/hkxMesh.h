#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkxMesh_UserChannelInfo.h"

namespace RE
{
	class hkxMeshSection;

	class hkxMesh :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkxMesh };
		static constexpr auto VTABLE{ VTABLE::hkxMesh };

		using UserChannelInfo = hkxMesh_UserChannelInfo;

		// override (hkReferencedObject)
		virtual ~hkxMesh() = default;  // 00

		// members
		hkArray<hkRefPtr<hkxMeshSection>, hkContainerHeapAllocator>          m_sections;          // 08?
		hkArray<hkRefPtr<hkxMesh_UserChannelInfo>, hkContainerHeapAllocator> m_userChannelInfos;  // 14?
	};
}
