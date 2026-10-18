#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkTransform.h"

namespace RE
{
	class hkpRigidBody;

	class hkpSerializedDisplayRbTransforms :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpSerializedDisplayRbTransforms };
		static constexpr auto VTABLE{ VTABLE::hkpSerializedDisplayRbTransforms };

		class DisplayTransformPair;

		class alignas(16) DisplayTransformPair
		{
		public:
			// members
			hkpRigidBody* m_rb;              // 00?
			std::uint8_t  pad04[0xC];        // 04
			hkTransform   m_localToDisplay;  // 10?
		};

		// override (hkReferencedObject)
		virtual ~hkpSerializedDisplayRbTransforms() = default;  // 00

		// members
		hkArray<hkpSerializedDisplayRbTransforms::DisplayTransformPair, hkContainerHeapAllocator> m_transforms;  // 08?
	};
}
