#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkTransform.h"

namespace RE
{
	class hkaSkeleton;
	class hkxMesh;

	class hkaMeshBinding :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaMeshBinding };
		static constexpr auto VTABLE{ VTABLE::hkaMeshBinding };

		class Mapping;

		class Mapping
		{
		public:
			// members
			hkArray<std::int16_t, hkContainerHeapAllocator> m_mapping;  // 00?
		};

		// override (hkReferencedObject)
		virtual ~hkaMeshBinding() = default;  // 00

		// members
		hkRefPtr<hkxMesh>                                          m_mesh;                        // 08?
		hkStringPtr                                                m_originalSkeletonName;        // 0C?
		hkRefPtr<hkaSkeleton>                                      m_skeleton;                    // 10?
		hkArray<hkaMeshBinding::Mapping, hkContainerHeapAllocator> m_mappings;                    // 14?
		hkArray<hkTransform, hkContainerHeapAllocator>             m_boneFromSkinMeshTransforms;  // 20?
	};
}
