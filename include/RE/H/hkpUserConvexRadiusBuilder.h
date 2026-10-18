#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkSingleton.h"
#include "RE/H/hkpShapeType.h"

namespace RE
{
	class hkpUserConvexRadiusBuilder :
		public hkReferencedObject,  // 00
		public hkSingleton<hkpUserConvexRadiusBuilder>  // 08
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpUserConvexRadiusBuilder };
		static constexpr auto VTABLE{ VTABLE::hkpUserConvexRadiusBuilder };

		class UserShapeBuilder;

		class UserShapeBuilder
		{
		public:
			// members
			void*        f;     // 00?
			hkpShapeType type;  // 04?
		};

		// override (hkReferencedObject)
		virtual ~hkpUserConvexRadiusBuilder() = default;  // 00

		// members
		hkArray<hkpUserConvexRadiusBuilder::UserShapeBuilder, hkContainerHeapAllocator> m_userConvexRadiusBuilders;  // 08?
	};
}
