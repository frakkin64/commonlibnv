#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkQsTransform.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkStringPtr.h"
#include "RE/H/hkaBone.h"

namespace RE
{
	class hkLocalFrame;

	class hkaSkeleton :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaSkeleton };
		static constexpr auto VTABLE{ VTABLE::hkaSkeleton };

		class LocalFrameOnBone;

		class LocalFrameOnBone
		{
		public:
			// members
			hkRefPtr<hkLocalFrame> m_localFrame;  // 00?
			std::int32_t           m_boneIndex;   // 04?
		};

		// override (hkReferencedObject)
		virtual ~hkaSkeleton() = default;  // 00

		// members
		hkStringPtr                                                      m_name;           // 08?
		hkArray<std::int16_t, hkContainerHeapAllocator>                  m_parentIndices;  // 0C?
		hkArray<hkaBone, hkContainerHeapAllocator>                       m_bones;          // 18?
		hkArray<hkQsTransform, hkContainerHeapAllocator>                 m_referencePose;  // 24?
		hkArray<hkStringPtr, hkContainerHeapAllocator>                   m_floatSlots;     // 30?
		hkArray<hkaSkeleton::LocalFrameOnBone, hkContainerHeapAllocator> m_localFrames;    // 3C?
	};
}
