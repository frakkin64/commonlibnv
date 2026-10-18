#pragma once

#include "NVSE/Impl/Windows.h"

#include "RE/H/hkArray.h"
#include "RE/H/hkContainerHeapAllocator.h"
#include "RE/H/hkRefPtr.h"
#include "RE/H/hkReferencedObject.h"
#include "RE/H/hkpDisplayBindingData_PhysicsSystem.h"
#include "RE/H/hkpDisplayBindingData_RigidBody.h"

namespace RE
{
	class hkpDisplayBindingData :
		public hkReferencedObject  // 00
	{
	public:
		static constexpr auto RTTI{ RTTI::hkpDisplayBindingData };
		static constexpr auto VTABLE{ VTABLE::hkpDisplayBindingData };

		using PhysicsSystem = hkpDisplayBindingData_PhysicsSystem;
		using RigidBody = hkpDisplayBindingData_RigidBody;

		// override (hkReferencedObject)
		virtual ~hkpDisplayBindingData() = default;  // 00

		// members
		hkArray<hkRefPtr<hkpDisplayBindingData_RigidBody>, hkContainerHeapAllocator>     m_rigidBodyBindings;      // 08?
		hkArray<hkRefPtr<hkpDisplayBindingData_PhysicsSystem>, hkContainerHeapAllocator> m_physicsSystemBindings;  // 14?
	};
}
