#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkaAnimation;
	class hkaAnimationBinding;
	class hkaBoneAttachment;
	class hkaMeshBinding;
	class hkaSkeleton;

	class hkaAnimationContainer :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkaAnimationContainer };
		static constexpr auto VTABLE{ VTABLE::hkaAnimationContainer };

		// override (hkReferencedObject)
		virtual ~hkaAnimationContainer() = default;  // 00

		// members
		hkArray<hkRefPtr<hkaSkeleton>, hkContainerHeapAllocator>         m_skeletons;    // 08?
		hkArray<hkRefPtr<hkaAnimation>, hkContainerHeapAllocator>        m_animations;   // 14?
		hkArray<hkRefPtr<hkaAnimationBinding>, hkContainerHeapAllocator> m_bindings;     // 20?
		hkArray<hkRefPtr<hkaBoneAttachment>, hkContainerHeapAllocator>   m_attachments;  // 2C?
		hkArray<hkRefPtr<hkaMeshBinding>, hkContainerHeapAllocator>      m_skins;        // 38?
	};
}
