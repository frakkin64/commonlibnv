#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"

namespace RE
{
	class hkpDisplayBindingData_RigidBody;
	class hkpPhysicsSystem;

	class hkpDisplayBindingData_PhysicsSystem :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpDisplayBindingData_PhysicsSystem };
		static constexpr auto VTABLE{ VTABLE::hkpDisplayBindingData_PhysicsSystem };

		// override (hkReferencedObject)
		virtual ~hkpDisplayBindingData_PhysicsSystem() = default;  // 00

		// members
		hkArray<hkRefPtr<hkpDisplayBindingData_RigidBody>, hkContainerHeapAllocator> m_bindings;  // 08?
		hkRefPtr<hkpPhysicsSystem>                                                   m_system;    // 14?
	};
}
