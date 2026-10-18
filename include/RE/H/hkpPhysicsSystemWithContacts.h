#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkBool.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkpPhysicsSystem.h"

namespace RE
{
	class hkpSerializedAgentNnEntry;

	class hkpPhysicsSystemWithContacts :
		public hkpPhysicsSystem  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpPhysicsSystemWithContacts };
		static constexpr auto VTABLE{ VTABLE::hkpPhysicsSystemWithContacts };

		// override (hkpPhysicsSystem)
		virtual ~hkpPhysicsSystemWithContacts() = default;  // 00
		virtual hkBool hasContacts() override;              // 04

		// members
		hkArray<hkpSerializedAgentNnEntry*, hkContainerHeapAllocator> m_contacts;  // 44?
	};
}
