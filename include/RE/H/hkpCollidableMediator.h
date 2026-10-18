#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkKdTreeBuildInput_Mediator.h"

namespace RE
{
	class hkKdTreeProjectedEntry;
	class hkpCollidable;

	class hkpCollidableMediator :
		public hkKdTreeBuildInput_Mediator  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpCollidableMediator };
		static constexpr auto VTABLE{ VTABLE::hkpCollidableMediator };

		// override (hkKdTreeBuildInput_Mediator)
		virtual ~hkpCollidableMediator() = default;  // 00

		// add
		virtual std::int32_t getNumPrimitives() const;                                             // 03
		virtual std::uint32_t getPrimitiveId(std::int32_t a_arg1);                                 // 04
		virtual void projectPrimitive(std::uint32_t primitiveId, hkKdTreeProjectedEntry& bounds);  // 05

		// members
		hkArray<hkpCollidable const*, hkContainerHeapAllocator>* m_collidables;  // 08?
	};
}
